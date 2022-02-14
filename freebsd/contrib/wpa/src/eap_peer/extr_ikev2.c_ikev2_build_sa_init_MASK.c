
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {int integ; int encr; } ;
struct ikev2_responder_data {scalar_t__ peer_auth; struct wpabuf* r_sign_msg; int state; int keys; TYPE_1__ proposal; scalar_t__ IDr_len; int r_nonce_len; int r_nonce; int r_spi; } ;
struct ikev2_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,struct wpabuf*,struct wpabuf*,int ) ;
 int FUNC_1 (struct ikev2_responder_data*,struct wpabuf*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_3 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_4 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_5 (struct ikev2_responder_data*,struct wpabuf*,int ) ;
 scalar_t__ FUNC_6 (struct ikev2_responder_data*) ;
 int FUNC_7 (struct wpabuf*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (int ,char*,struct wpabuf*) ;
 struct wpabuf* FUNC_12 (scalar_t__) ;
 struct wpabuf* FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_15(struct ikev2_responder_data *VAR_14)
{
 struct wpabuf *VAR_15;



 if (FUNC_8(VAR_14->r_spi, VAR_7))
  return ((void*)0);
 FUNC_10(VAR_9, "IKEV2: IKE_SA Responder's SPI",
      VAR_14->r_spi, VAR_7);

 VAR_14->r_nonce_len = VAR_0;
 if (FUNC_9(VAR_14->r_nonce, VAR_14->r_nonce_len))
  return ((void*)0);
 FUNC_10(VAR_9, "IKEV2: Nr", VAR_14->r_nonce, VAR_14->r_nonce_len);

 VAR_15 = FUNC_12(sizeof(struct ikev2_hdr) + VAR_14->IDr_len + 1500);
 if (VAR_15 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_14, VAR_15, VAR_8, VAR_6, 0);
 if (FUNC_5(VAR_14, VAR_15, VAR_3) ||
     FUNC_3(VAR_14, VAR_15, VAR_4) ||
     FUNC_4(VAR_14, VAR_15, VAR_14->peer_auth == VAR_12 ?
      VAR_1 :
      VAR_5)) {
  FUNC_14(VAR_15);
  return ((void*)0);
 }

 if (FUNC_6(VAR_14)) {
  FUNC_14(VAR_15);
  return ((void*)0);
 }

 if (VAR_14->peer_auth == VAR_11) {


 }

 if (VAR_14->peer_auth == VAR_12) {
  struct wpabuf *VAR_16 = FUNC_12(VAR_14->IDr_len + 1000);
  if (VAR_16 == ((void*)0)) {
   FUNC_14(VAR_15);
   return ((void*)0);
  }
  if (FUNC_2(VAR_14, VAR_16,
        VAR_5) ||
      FUNC_0(VAR_14->proposal.encr,
       VAR_14->proposal.integ,
       &VAR_14->keys, 0, VAR_15, VAR_16,
       VAR_2)) {
   FUNC_14(VAR_16);
   FUNC_14(VAR_15);
   return ((void*)0);
  }
  FUNC_14(VAR_16);
 }

 FUNC_7(VAR_15);

 FUNC_11(VAR_10, "IKEV2: Sending message (SA_INIT)", VAR_15);

 VAR_14->state = VAR_13;

 FUNC_14(VAR_14->r_sign_msg);
 VAR_14->r_sign_msg = FUNC_13(VAR_15);

 return VAR_15;
}
