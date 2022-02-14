
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_data {size_t out_frag_pos; scalar_t__ mtu; scalar_t__ state; size_t in_frag_pos; struct wpabuf* outbuf; struct wpabuf* inbuf; } ;
struct eap_method_ret {void* decision; void* methodState; void* ignore; void* allowNotifications; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;



 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int* FUNC_7 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_8 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_9 (struct eap_sm*,struct eap_pwd_data*,struct eap_method_ret*,struct wpabuf const*,int const*,size_t) ;
 int FUNC_10 (struct eap_sm*,struct eap_pwd_data*,struct eap_method_ret*,struct wpabuf const*,int const*,size_t) ;
 int FUNC_11 (struct eap_sm*,struct eap_pwd_data*,struct eap_method_ret*,struct wpabuf const*,int const*,size_t) ;
 int FUNC_12 (struct eap_pwd_data*,int ) ;
 int FUNC_13 (int ,char*,...) ;
 struct wpabuf* FUNC_14 (int) ;
 int FUNC_15 (struct wpabuf*) ;
 int* FUNC_16 (struct wpabuf*) ;
 size_t FUNC_17 (struct wpabuf*) ;
 int FUNC_18 (struct wpabuf*,int) ;
 int FUNC_19 (struct wpabuf*,int const*,size_t) ;
 int FUNC_20 (struct wpabuf*,int) ;
 size_t FUNC_21 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf *
FUNC_22(struct eap_sm *VAR_14, void *VAR_15, struct eap_method_ret *VAR_16,
  const struct wpabuf *VAR_17)
{
 struct eap_pwd_data *VAR_18 = VAR_15;
 struct wpabuf *VAR_19 = ((void*)0);
 const u8 *VAR_20, *VAR_21;
 size_t VAR_22;
 u16 VAR_23 = 0;
 u8 VAR_24;

 VAR_20 = FUNC_7(VAR_5, VAR_4, VAR_17, &VAR_22);
 if ((VAR_20 == ((void*)0)) || (VAR_22 < 1)) {
  FUNC_13(VAR_9, "EAP-pwd: Got a frame but pos is %s and "
      "len is %d",
      VAR_20 == ((void*)0) ? "NULL" : "not NULL", (int) VAR_22);
  VAR_16->ignore = VAR_13;
  return ((void*)0);
 }

 VAR_16->ignore = VAR_6;
 VAR_16->methodState = VAR_8;
 VAR_16->decision = VAR_0;
 VAR_16->allowNotifications = VAR_6;

 VAR_24 = *VAR_20;
 VAR_20++;
 VAR_22--;




 if (VAR_18->out_frag_pos) {



  if (VAR_22)
   FUNC_13(VAR_10, "Bad Response! Fragmenting but "
       "not an ACK");

  FUNC_13(VAR_9, "EAP-pwd: Got an ACK for a fragment");



  VAR_22 = FUNC_17(VAR_18->outbuf) - VAR_18->out_frag_pos;
  if ((VAR_22 + VAR_3) > VAR_18->mtu) {
   VAR_22 = VAR_18->mtu - VAR_3;
   FUNC_4(VAR_24);
  }
  VAR_19 = FUNC_8(VAR_5, VAR_4,
         VAR_3 + VAR_22,
         VAR_2, FUNC_6(VAR_17));
  if (VAR_19 == ((void*)0)) {
   FUNC_13(VAR_10, "Unable to allocate memory for "
       "next fragment!");
   return ((void*)0);
  }
  FUNC_20(VAR_19, VAR_24);
  VAR_21 = FUNC_16(VAR_18->outbuf);
  FUNC_19(VAR_19, VAR_21 + VAR_18->out_frag_pos, VAR_22);
  VAR_18->out_frag_pos += VAR_22;



  if (VAR_18->out_frag_pos >= FUNC_17(VAR_18->outbuf)) {
   FUNC_15(VAR_18->outbuf);
   VAR_18->outbuf = ((void*)0);
   VAR_18->out_frag_pos = 0;
  }
  FUNC_13(VAR_9, "EAP-pwd: Send %s fragment of %d bytes",
      VAR_18->out_frag_pos == 0 ? "last" : "next",
      (int) VAR_22);
  if (VAR_18->state == VAR_12) {
   VAR_16->methodState = VAR_7;
   VAR_16->decision = VAR_1;
   FUNC_12(VAR_18, VAR_11);
  }
  return VAR_19;
 }






 if (FUNC_1(VAR_24)) {
  if (VAR_22 < 2) {
   FUNC_13(VAR_9,
       "EAP-pwd: Frame too short to contain Total-Length field");
   VAR_16->ignore = VAR_13;
   return ((void*)0);
  }
  VAR_23 = FUNC_5(VAR_20);
  FUNC_13(VAR_9, "EAP-pwd: Incoming fragments whose "
      "total length = %d", VAR_23);
  if (VAR_23 > 15000)
   return ((void*)0);
  if (VAR_18->inbuf) {
   FUNC_13(VAR_9,
       "EAP-pwd: Unexpected new fragment start when previous fragment is still in use");
   VAR_16->ignore = VAR_13;
   return ((void*)0);
  }
  VAR_18->inbuf = FUNC_14(VAR_23);
  if (VAR_18->inbuf == ((void*)0)) {
   FUNC_13(VAR_10, "Out of memory to buffer "
       "fragments!");
   return ((void*)0);
  }
  VAR_18->in_frag_pos = 0;
  VAR_20 += sizeof(u16);
  VAR_22 -= sizeof(u16);
 }



 if (FUNC_2(VAR_24) || VAR_18->in_frag_pos) {
  if (!VAR_18->inbuf) {
   FUNC_13(VAR_9,
       "EAP-pwd: No buffer for reassembly");
   VAR_16->methodState = VAR_7;
   VAR_16->decision = VAR_0;
   return ((void*)0);
  }
  VAR_18->in_frag_pos += VAR_22;
  if (VAR_18->in_frag_pos > FUNC_21(VAR_18->inbuf)) {
   FUNC_13(VAR_10, "EAP-pwd: Buffer overflow attack "
       "detected (%d vs. %d)!",
       (int) VAR_18->in_frag_pos,
       (int) FUNC_17(VAR_18->inbuf));
   FUNC_15(VAR_18->inbuf);
   VAR_18->inbuf = ((void*)0);
   VAR_18->in_frag_pos = 0;
   return ((void*)0);
  }
  FUNC_19(VAR_18->inbuf, VAR_20, VAR_22);
 }
 if (FUNC_2(VAR_24)) {
  VAR_19 = FUNC_8(VAR_5, VAR_4,
         VAR_3,
         VAR_2, FUNC_6(VAR_17));
  if (VAR_19 != ((void*)0))
   FUNC_20(VAR_19, (FUNC_0(VAR_24)));
  FUNC_13(VAR_9, "EAP-pwd: ACKing a %d byte fragment",
      (int) VAR_22);
  return VAR_19;
 }



 if (VAR_18->in_frag_pos && VAR_18->inbuf) {
  FUNC_13(VAR_9, "EAP-pwd: Last fragment, %d bytes",
      (int) VAR_22);
  VAR_20 = FUNC_16(VAR_18->inbuf);
  VAR_22 = VAR_18->in_frag_pos;
 }
 FUNC_13(VAR_9, "EAP-pwd: processing frame: exch %d, len %d",
     FUNC_0(VAR_24), (int) VAR_22);

 switch (FUNC_0(VAR_24)) {
 case 128:
  FUNC_11(VAR_14, VAR_18, VAR_16, VAR_17,
         VAR_20, VAR_22);
  break;
 case 130:
  FUNC_9(VAR_14, VAR_18, VAR_16, VAR_17,
      VAR_20, VAR_22);
  break;
 case 129:
  FUNC_10(VAR_14, VAR_18, VAR_16, VAR_17,
       VAR_20, VAR_22);
  break;
 default:
  FUNC_13(VAR_10, "EAP-pwd: Ignoring message with unknown "
      "opcode %d", VAR_24);
  break;
 }



 if (VAR_18->in_frag_pos) {
  FUNC_15(VAR_18->inbuf);
  VAR_18->inbuf = ((void*)0);
  VAR_18->in_frag_pos = 0;
 }

 if (VAR_18->outbuf == ((void*)0)) {
  VAR_16->methodState = VAR_7;
  VAR_16->decision = VAR_0;
  return ((void*)0);
 }




 VAR_24 = FUNC_0(VAR_24);
 VAR_22 = FUNC_17(VAR_18->outbuf);
 if ((VAR_22 + VAR_3) > VAR_18->mtu) {
  VAR_19 = FUNC_8(VAR_5, VAR_4, VAR_18->mtu,
         VAR_2, FUNC_6(VAR_17));



  FUNC_3(VAR_24);
  FUNC_4(VAR_24);
  VAR_23 = VAR_22;



  VAR_22 = VAR_18->mtu - VAR_3 - sizeof(u16);
  FUNC_13(VAR_9, "EAP-pwd: Fragmenting output, total "
      "length = %d", VAR_23);
 } else {
  VAR_19 = FUNC_8(VAR_5, VAR_4,
         VAR_3 + VAR_22,
         VAR_2, FUNC_6(VAR_17));
 }
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 FUNC_20(VAR_19, VAR_24);
 if (FUNC_1(VAR_24)) {
  FUNC_18(VAR_19, VAR_23);
  VAR_18->out_frag_pos += VAR_22;
 }
 VAR_21 = FUNC_16(VAR_18->outbuf);
 FUNC_19(VAR_19, VAR_21, VAR_22);



 if (VAR_18->out_frag_pos == 0) {
  FUNC_15(VAR_18->outbuf);
  VAR_18->outbuf = ((void*)0);
  VAR_18->out_frag_pos = 0;
  if (VAR_18->state == VAR_12) {
   VAR_16->methodState = VAR_7;
   VAR_16->decision = VAR_1;
   FUNC_12(VAR_18, VAR_11);
  }
 }

 return VAR_19;
}
