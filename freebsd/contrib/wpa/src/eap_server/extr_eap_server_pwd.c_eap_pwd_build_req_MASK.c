
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {int state; scalar_t__ out_frag_pos; scalar_t__ mtu; struct wpabuf* outbuf; scalar_t__ in_frag_pos; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 struct wpabuf* FUNC_3 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct eap_sm*,struct eap_pwd_data*,int ) ;
 int FUNC_5 (struct eap_sm*,struct eap_pwd_data*,int ) ;
 int FUNC_6 (struct eap_sm*,struct eap_pwd_data*,int ) ;
 int FUNC_7 (struct eap_pwd_data*,int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct wpabuf*) ;
 int * FUNC_10 (struct wpabuf*) ;
 scalar_t__ FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*,int) ;
 int FUNC_13 (struct wpabuf*,int const*,size_t) ;
 int FUNC_14 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf *
FUNC_15(struct eap_sm *VAR_10, void *VAR_11, u8 VAR_12)
{
 struct eap_pwd_data *VAR_13 = VAR_11;
 struct wpabuf *VAR_14;
 u8 VAR_15;
 const u8 *VAR_16;
 u16 VAR_17 = 0;
 size_t VAR_18;




 if (VAR_13->in_frag_pos) {
  FUNC_8(VAR_8, "EAP-pwd: ACKing a fragment!!");
  VAR_14 = FUNC_3(VAR_6, VAR_5,
        VAR_1, VAR_0, VAR_12);
  if (VAR_14 == ((void*)0)) {
   FUNC_7(VAR_13, VAR_7);
   return ((void*)0);
  }
  switch (VAR_13->state) {
  case 128:
   FUNC_14(VAR_14, VAR_4);
   break;
  case 130:
   FUNC_14(VAR_14, VAR_2);
   break;
  case 129:
   FUNC_14(VAR_14, VAR_3);
   break;
  default:
   FUNC_7(VAR_13, VAR_7);
   FUNC_9(VAR_14);
   return ((void*)0);
  }
  return VAR_14;
 }




 switch (VAR_13->state) {
 case 128:
  FUNC_6(VAR_10, VAR_13, VAR_12);
  VAR_15 = VAR_4;
  break;
 case 130:
  FUNC_4(VAR_10, VAR_13, VAR_12);
  VAR_15 = VAR_2;
  break;
 case 129:
  FUNC_5(VAR_10, VAR_13, VAR_12);
  VAR_15 = VAR_3;
  break;
 default:
  FUNC_8(VAR_9, "EAP-pwd: Unknown state %d in build_req",
      VAR_13->state);
  FUNC_7(VAR_13, VAR_7);
  VAR_15 = 0;
  break;
 }

 if (VAR_13->state == VAR_7)
  return ((void*)0);




 VAR_18 = FUNC_11(VAR_13->outbuf) - VAR_13->out_frag_pos;
 if ((VAR_18 + VAR_1) > VAR_13->mtu) {
  VAR_18 = VAR_13->mtu - VAR_1;
  FUNC_2(VAR_15);




  if (VAR_13->out_frag_pos == 0) {
   FUNC_1(VAR_15);
   VAR_17 = FUNC_11(VAR_13->outbuf) +
    VAR_1 + sizeof(u16);
   VAR_18 -= sizeof(u16);
   FUNC_8(VAR_8, "EAP-pwd: Fragmenting output, "
       "total length = %d", VAR_17);
  }
  FUNC_8(VAR_8, "EAP-pwd: Send a %d byte fragment",
      (int) VAR_18);
 }




 VAR_14 = FUNC_3(VAR_6, VAR_5,
       VAR_1 + VAR_18 +
       (VAR_17 ? sizeof(u16) : 0),
       VAR_0, VAR_12);
 if (VAR_14 == ((void*)0)) {
  FUNC_7(VAR_13, VAR_7);
  return ((void*)0);
 }

 FUNC_14(VAR_14, VAR_15);
 if (FUNC_0(VAR_15))
  FUNC_12(VAR_14, VAR_17);

 VAR_16 = FUNC_10(VAR_13->outbuf);
 FUNC_13(VAR_14, VAR_16 + VAR_13->out_frag_pos, VAR_18);
 VAR_13->out_frag_pos += VAR_18;



 if (VAR_13->out_frag_pos >= FUNC_11(VAR_13->outbuf)) {
  FUNC_9(VAR_13->outbuf);
  VAR_13->outbuf = ((void*)0);
  VAR_13->out_frag_pos = 0;
 }

 return VAR_14;
}
