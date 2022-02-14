
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct TYPE_5__ {int pnonce_len; int prf_len; scalar_t__ nonce_len; } ;
struct eap_eke_data {scalar_t__ state; TYPE_1__ sess; int key; int dh_priv; int emsk; int msk; int nonce_p; int nonce_s; int peerid_len; int peerid; int msgs; } ;
typedef int nonce ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,int,int *,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct eap_eke_data*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct eap_eke_data*,int ) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char*,int *,int ) ;
 int FUNC_10 (int ,char*,int *,scalar_t__) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_9,
        struct eap_eke_data *VAR_10,
        const struct wpabuf *VAR_11,
        const u8 *VAR_12, size_t VAR_13)
{
 size_t VAR_14;
 u8 VAR_15[VAR_5];
 u8 VAR_16[VAR_4];

 FUNC_11(VAR_6, "EAP-EKE: Received Response/Confirm");

 if (VAR_10->state != VAR_0) {
  FUNC_3(VAR_10, VAR_3);
  return;
 }

 FUNC_11(VAR_6, "EAP-EKE: Received Response/Confirm");

 if (VAR_13 < (size_t) VAR_10->sess.pnonce_len + VAR_10->sess.prf_len) {
  FUNC_11(VAR_6, "EAP-EKE: Too short EAP-EKE-Confirm");
  FUNC_3(VAR_10, VAR_3);
  return;
 }

 VAR_14 = sizeof(VAR_15);
 if (FUNC_1(&VAR_10->sess, VAR_12, VAR_10->sess.pnonce_len,
     VAR_15, &VAR_14) < 0) {
  FUNC_11(VAR_7, "EAP-EKE: Failed to decrypt PNonce_S");
  FUNC_3(VAR_10, VAR_1);
  return;
 }
 if (VAR_14 < (size_t) VAR_10->sess.nonce_len) {
  FUNC_11(VAR_7, "EAP-EKE: PNonce_S protected data too short to include Nonce_S");
  FUNC_3(VAR_10, VAR_1);
  return;
 }
 FUNC_10(VAR_6, "EAP-EKE: Received Nonce_S",
   VAR_15, VAR_10->sess.nonce_len);
 if (FUNC_6(VAR_15, VAR_10->nonce_s, VAR_10->sess.nonce_len) != 0) {
  FUNC_11(VAR_7, "EAP-EKE: Received Nonce_S does not match previously sent Nonce_S");
  FUNC_3(VAR_10, VAR_1);
  return;
 }

 if (FUNC_0(&VAR_10->sess, "EAP-EKE peer", VAR_10->msgs, VAR_16) < 0) {
  FUNC_11(VAR_7, "EAP-EKE: Could not derive Auth_P");
  FUNC_3(VAR_10, VAR_2);
  return;
 }
 FUNC_9(VAR_6, "EAP-EKE: Auth_P", VAR_16, VAR_10->sess.prf_len);
 if (FUNC_7(VAR_16, VAR_12 + VAR_10->sess.pnonce_len,
       VAR_10->sess.prf_len) != 0) {
  FUNC_11(VAR_7, "EAP-EKE: Auth_P does not match");
  FUNC_3(VAR_10, VAR_1);
  return;
 }

 if (FUNC_2(&VAR_10->sess, VAR_9->server_id, VAR_9->server_id_len,
          VAR_10->peerid, VAR_10->peerid_len,
          VAR_10->nonce_s, VAR_10->nonce_p,
          VAR_10->msk, VAR_10->emsk) < 0) {
  FUNC_11(VAR_7, "EAP-EKE: Failed to derive MSK/EMSK");
  FUNC_3(VAR_10, VAR_2);
  return;
 }

 FUNC_8(VAR_10->dh_priv, 0, sizeof(VAR_10->dh_priv));
 FUNC_8(VAR_10->key, 0, sizeof(VAR_10->key));
 FUNC_4(&VAR_10->sess);

 FUNC_5(VAR_10, VAR_8);
}
