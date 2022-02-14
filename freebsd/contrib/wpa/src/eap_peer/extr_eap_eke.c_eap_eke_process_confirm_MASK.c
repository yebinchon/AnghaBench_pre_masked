
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_method_ret {int allowNotifications; int decision; int methodState; } ;
struct TYPE_7__ {int pnonce_ps_len; size_t prf_len; size_t nonce_len; scalar_t__ pnonce_len; } ;
struct eap_eke_data {scalar_t__ state; TYPE_1__ sess; int dh_priv; int emsk; int msk; int nonce_p; int * nonce_s; int peerid_len; int peerid; int serverid_len; int serverid; int msgs; } ;
typedef int nonces ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int ,int *) ;
 struct wpabuf* FUNC_1 (struct eap_eke_data*,struct eap_method_ret*,int ,int ) ;
 struct wpabuf* FUNC_2 (struct eap_eke_data*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const*,int,int *,size_t*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int,int *,size_t*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct eap_eke_data*,int ) ;
 int FUNC_9 (struct wpabuf const*) ;
 scalar_t__ FUNC_10 (int ,int *,int) ;
 scalar_t__ FUNC_11 (int *,int const*,size_t) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,char*,int *,size_t) ;
 int FUNC_15 (int ,char*,int *,int) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (struct wpabuf*) ;
 int * FUNC_18 (struct wpabuf*,size_t) ;
 size_t FUNC_19 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_20(struct eap_eke_data *VAR_13,
            struct eap_method_ret *VAR_14,
            const struct wpabuf *VAR_15,
            const u8 *VAR_16,
            size_t VAR_17)
{
 struct wpabuf *VAR_18;
 const u8 *VAR_19, *VAR_20;
 size_t VAR_21;
 u8 VAR_22[2 * VAR_7];
 u8 VAR_23[VAR_6];
 size_t VAR_24;
 u8 *VAR_25;
 u8 VAR_26 = FUNC_9(VAR_15);

 if (VAR_13->state != VAR_0) {
  FUNC_16(VAR_10, "EAP-EKE: EAP-EKE-Confirm/Request received in unexpected state (%d)",
      VAR_13->state);
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_5);
 }

 FUNC_16(VAR_10, "EAP-EKE: Received EAP-EKE-Confirm/Request");

 VAR_19 = VAR_16;
 VAR_20 = VAR_16 + VAR_17;

 if (VAR_19 + VAR_13->sess.pnonce_ps_len + VAR_13->sess.prf_len > VAR_20) {
  FUNC_16(VAR_10, "EAP-EKE: Too short EAP-EKE-Confirm");
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_5);
 }

 VAR_24 = sizeof(VAR_22);
 if (FUNC_3(&VAR_13->sess, VAR_19, VAR_13->sess.pnonce_ps_len,
     VAR_22, &VAR_24) < 0) {
  FUNC_16(VAR_11, "EAP-EKE: Failed to decrypt PNonce_PS");
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_3);
 }
 if (VAR_24 != (size_t) 2 * VAR_13->sess.nonce_len) {
  FUNC_16(VAR_11, "EAP-EKE: PNonce_PS protected data length does not match length of Nonce_P and Nonce_S");
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_3);
 }
 FUNC_15(VAR_10, "EAP-EKE: Received Nonce_P | Nonce_S",
   VAR_22, 2 * VAR_13->sess.nonce_len);
 if (FUNC_10(VAR_13->nonce_p, VAR_22, VAR_13->sess.nonce_len) != 0) {
  FUNC_16(VAR_11, "EAP-EKE: Received Nonce_P does not match transmitted Nonce_P");
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_3);
 }

 FUNC_12(VAR_13->nonce_s, VAR_22 + VAR_13->sess.nonce_len,
    VAR_13->sess.nonce_len);
 FUNC_15(VAR_10, "EAP-EKE: Nonce_S",
   VAR_13->nonce_s, VAR_13->sess.nonce_len);

 if (FUNC_4(&VAR_13->sess, VAR_13->serverid, VAR_13->serverid_len,
         VAR_13->peerid, VAR_13->peerid_len,
         VAR_13->nonce_p, VAR_13->nonce_s) < 0) {
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_4);
 }

 if (FUNC_0(&VAR_13->sess, "EAP-EKE server", VAR_13->msgs, VAR_23) < 0)
 {
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_4);
 }
 FUNC_14(VAR_10, "EAP-EKE: Auth_S", VAR_23, VAR_13->sess.prf_len);
 if (FUNC_11(VAR_23, VAR_19 + VAR_13->sess.pnonce_ps_len,
       VAR_13->sess.prf_len) != 0) {
  FUNC_16(VAR_11, "EAP-EKE: Auth_S does not match");
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_3);
 }

 FUNC_16(VAR_10, "EAP-EKE: Sending EAP-EKE-Confirm/Response");

 VAR_18 = FUNC_2(VAR_13, VAR_26,
     VAR_13->sess.pnonce_len + VAR_13->sess.prf_len,
     VAR_2);
 if (VAR_18 == ((void*)0)) {
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_4);
 }

 VAR_21 = FUNC_19(VAR_18);
 if (FUNC_6(&VAR_13->sess, VAR_13->nonce_s, VAR_13->sess.nonce_len,
    FUNC_18(VAR_18, 0), &VAR_21) < 0) {
  FUNC_17(VAR_18);
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_4);
 }
 FUNC_18(VAR_18, VAR_21);

 VAR_25 = FUNC_18(VAR_18, VAR_13->sess.prf_len);
 if (FUNC_0(&VAR_13->sess, "EAP-EKE peer", VAR_13->msgs, VAR_25) < 0) {
  FUNC_17(VAR_18);
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_4);
 }
 FUNC_14(VAR_10, "EAP-EKE: Auth_P", VAR_25, VAR_13->sess.prf_len);

 if (FUNC_5(&VAR_13->sess, VAR_13->serverid, VAR_13->serverid_len,
          VAR_13->peerid, VAR_13->peerid_len,
          VAR_13->nonce_s, VAR_13->nonce_p,
          VAR_13->msk, VAR_13->emsk) < 0) {
  FUNC_16(VAR_11, "EAP-EKE: Failed to derive MSK/EMSK");
  FUNC_17(VAR_18);
  return FUNC_1(VAR_13, VAR_14, VAR_26,
       VAR_4);
 }

 FUNC_13(VAR_13->dh_priv, 0, sizeof(VAR_13->dh_priv));
 FUNC_7(&VAR_13->sess);

 FUNC_8(VAR_13, VAR_12);
 VAR_14->methodState = VAR_9;
 VAR_14->decision = VAR_1;
 VAR_14->allowNotifications = VAR_8;

 return VAR_18;
}
