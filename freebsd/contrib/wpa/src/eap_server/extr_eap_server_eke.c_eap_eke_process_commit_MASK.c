
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct TYPE_4__ {int dhcomp_len; int pnonce_len; scalar_t__ nonce_len; } ;
struct eap_eke_data {scalar_t__ state; int msgs; TYPE_1__ sess; int nonce_p; int peerid_len; int peerid; int dh_priv; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int const*,int,int ,size_t*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_2 (struct eap_eke_data*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int const*) ;
 int FUNC_4 (struct eap_eke_data*,int ) ;
 int FUNC_5 (int ,char*,int const*,int) ;
 int FUNC_6 (int ,char*,int ,scalar_t__) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpabuf const*) ;
 int FUNC_9 (int ,struct wpabuf const*) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(struct eap_sm *VAR_7,
       struct eap_eke_data *VAR_8,
       const struct wpabuf *VAR_9,
       const u8 *VAR_10, size_t VAR_11)
{
 const u8 *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 size_t VAR_16;

 FUNC_7(VAR_5, "EAP-EKE: Received Response/Commit");

 if (VAR_8->state != VAR_0) {
  FUNC_2(VAR_8, VAR_4);
  return;
 }

 VAR_12 = VAR_10;
 VAR_13 = VAR_10 + VAR_11;

 if (VAR_12 + VAR_8->sess.dhcomp_len + VAR_8->sess.pnonce_len > VAR_13) {
  FUNC_7(VAR_5, "EAP-EKE: Too short EAP-EKE-Commit");
  FUNC_2(VAR_8, VAR_4);
  return;
 }

 FUNC_5(VAR_5, "EAP-EKE: DHComponent_P",
      VAR_12, VAR_8->sess.dhcomp_len);
 VAR_14 = VAR_12;
 VAR_12 += VAR_8->sess.dhcomp_len;
 FUNC_5(VAR_5, "EAP-EKE: PNonce_P", VAR_12, VAR_8->sess.pnonce_len);
 VAR_15 = VAR_12;
 VAR_12 += VAR_8->sess.pnonce_len;
 FUNC_5(VAR_5, "EAP-EKE: CBValue", VAR_12, VAR_13 - VAR_12);

 if (FUNC_3(&VAR_8->sess, VAR_8->key, VAR_8->dh_priv, VAR_14)
     < 0) {
  FUNC_7(VAR_6, "EAP-EKE: Failed to derive shared secret");
  FUNC_2(VAR_8, VAR_3);
  return;
 }

 if (FUNC_1(&VAR_8->sess,
     VAR_7->server_id, VAR_7->server_id_len,
     VAR_8->peerid, VAR_8->peerid_len) < 0) {
  FUNC_7(VAR_6, "EAP-EKE: Failed to derive Ke/Ki");
  FUNC_2(VAR_8, VAR_3);
  return;
 }

 VAR_16 = sizeof(VAR_8->nonce_p);
 if (FUNC_0(&VAR_8->sess, VAR_15, VAR_8->sess.pnonce_len,
     VAR_8->nonce_p, &VAR_16) < 0) {
  FUNC_7(VAR_6, "EAP-EKE: Failed to decrypt PNonce_P");
  FUNC_2(VAR_8, VAR_2);
  return;
 }
 if (VAR_16 < (size_t) VAR_8->sess.nonce_len) {
  FUNC_7(VAR_6, "EAP-EKE: PNonce_P protected data too short to include Nonce_P");
  FUNC_2(VAR_8, VAR_2);
  return;
 }
 FUNC_6(VAR_5, "EAP-EKE: Nonce_P",
   VAR_8->nonce_p, VAR_8->sess.nonce_len);

 if (FUNC_10(&VAR_8->msgs, FUNC_8(VAR_9)) < 0) {
  FUNC_2(VAR_8, VAR_3);
  return;
 }
 FUNC_9(VAR_8->msgs, VAR_9);

 FUNC_4(VAR_8, VAR_1);
}
