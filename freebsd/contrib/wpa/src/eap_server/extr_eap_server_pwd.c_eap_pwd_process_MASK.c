
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {size_t in_frag_pos; int * inbuf; scalar_t__ out_frag_pos; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_5 (struct eap_sm*,struct eap_pwd_data*,int const*,size_t) ;
 int FUNC_6 (struct eap_sm*,struct eap_pwd_data*,int const*,size_t) ;
 int FUNC_7 (struct eap_sm*,struct eap_pwd_data*,int const*,size_t) ;
 int FUNC_8 (struct eap_pwd_data*,int ) ;
 int FUNC_9 (int ,char*,...) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int const*,size_t) ;
 size_t FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct eap_sm *VAR_5, void *VAR_6,
       struct wpabuf *VAR_7)
{
 struct eap_pwd_data *VAR_8 = VAR_6;
 const u8 *VAR_9;
 size_t VAR_10;
 u8 VAR_11;
 u16 VAR_12;

 VAR_9 = FUNC_4(VAR_1, VAR_0, VAR_7, &VAR_10);
 if ((VAR_9 == ((void*)0)) || (VAR_10 < 1)) {
  FUNC_9(VAR_4, "Bad EAP header! pos %s and len = %d",
      (VAR_9 == ((void*)0)) ? "is NULL" : "is not NULL",
      (int) VAR_10);
  return;
 }

 VAR_11 = *VAR_9;
 VAR_9++;
 VAR_10--;





 if (VAR_8->out_frag_pos) {
  if (VAR_10 > 1)
   FUNC_9(VAR_4, "EAP-pwd: Bad response! "
       "Fragmenting but not an ACK");
  else
   FUNC_9(VAR_3, "EAP-pwd: received ACK from "
       "peer");
  return;
 }





 if (FUNC_1(VAR_11)) {
  if (VAR_10 < 2) {
   FUNC_9(VAR_3,
       "EAP-pwd: Frame too short to contain Total-Length field");
   return;
  }
  VAR_12 = FUNC_3(VAR_9);
  FUNC_9(VAR_3, "EAP-pwd: Incoming fragments, total "
      "length = %d", VAR_12);
  if (VAR_12 > 15000)
   return;
  if (VAR_8->inbuf) {
   FUNC_9(VAR_3,
       "EAP-pwd: Unexpected new fragment start when previous fragment is still in use");
   return;
  }
  VAR_8->inbuf = FUNC_10(VAR_12);
  if (VAR_8->inbuf == ((void*)0)) {
   FUNC_9(VAR_4, "EAP-pwd: Out of memory to "
       "buffer fragments!");
   return;
  }
  VAR_8->in_frag_pos = 0;
  VAR_9 += sizeof(u16);
  VAR_10 -= sizeof(u16);
 }



 if (FUNC_2(VAR_11) || VAR_8->in_frag_pos) {
  if (!VAR_8->inbuf) {
   FUNC_9(VAR_3,
       "EAP-pwd: No buffer for reassembly");
   FUNC_8(VAR_8, VAR_2);
   return;
  }
  if ((VAR_8->in_frag_pos + VAR_10) > FUNC_14(VAR_8->inbuf)) {
   FUNC_9(VAR_3, "EAP-pwd: Buffer overflow "
       "attack detected! (%d+%d > %d)",
       (int) VAR_8->in_frag_pos, (int) VAR_10,
       (int) FUNC_14(VAR_8->inbuf));
   FUNC_8(VAR_8, VAR_2);
   return;
  }
  FUNC_13(VAR_8->inbuf, VAR_9, VAR_10);
  VAR_8->in_frag_pos += VAR_10;
 }
 if (FUNC_2(VAR_11)) {
  FUNC_9(VAR_3, "EAP-pwd: Got a %d byte fragment",
      (int) VAR_10);
  return;
 }




 if (VAR_8->in_frag_pos && VAR_8->inbuf) {
  VAR_9 = FUNC_12(VAR_8->inbuf);
  VAR_10 = VAR_8->in_frag_pos;
  FUNC_9(VAR_3, "EAP-pwd: Last fragment, %d bytes",
      (int) VAR_10);
 }
 switch (FUNC_0(VAR_11)) {
 case 128:
  FUNC_7(VAR_5, VAR_8, VAR_9, VAR_10);
  break;
 case 130:
  FUNC_5(VAR_5, VAR_8, VAR_9, VAR_10);
  break;
 case 129:
  FUNC_6(VAR_5, VAR_8, VAR_9, VAR_10);
  break;
 }




 if (VAR_8->in_frag_pos) {
  FUNC_11(VAR_8->inbuf);
  VAR_8->inbuf = ((void*)0);
  VAR_8->in_frag_pos = 0;
 }
}
