
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int const u8 ;
typedef struct wpabuf const wpabuf ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int dummy; } ;
struct TYPE_6__ {int dhcomp_len; int nonce_len; scalar_t__ pnonce_len; int dhgroup; } ;
struct eap_eke_data {scalar_t__ state; int msgs; TYPE_1__ sess; int nonce_p; int peerid_len; int peerid; int serverid_len; int serverid; int dh_priv; } ;
typedef int key ;


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
 struct wpabuf const* FUNC_0 (struct eap_eke_data*,struct eap_method_ret*,int const,int ) ;
 struct wpabuf const* FUNC_1 (struct eap_eke_data*,int const,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const*,size_t,int ,int ,int ,int ,int const*) ;
 scalar_t__ FUNC_4 (int ,int ,int const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int const*,int const*,int const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ,int const*,size_t*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int const*,int ,int const*) ;
 int FUNC_8 (struct eap_eke_data*,int ) ;
 int const* FUNC_9 (struct eap_sm*,size_t*) ;
 int const FUNC_10 (struct wpabuf const*) ;
 int FUNC_11 (int const*,int) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,char*,int const*,size_t) ;
 int FUNC_14 (int ,char*,int ,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct wpabuf const*) ;
 scalar_t__ FUNC_17 (struct wpabuf const*) ;
 int const* FUNC_18 (struct wpabuf const*,size_t) ;
 int FUNC_19 (int ,struct wpabuf const*) ;
 scalar_t__ FUNC_20 (int *,scalar_t__) ;
 size_t FUNC_21 (struct wpabuf const*) ;

__attribute__((used)) static struct wpabuf * FUNC_22(struct eap_sm *VAR_10,
           struct eap_eke_data *VAR_11,
           struct eap_method_ret *VAR_12,
           const struct wpabuf *VAR_13,
           const u8 *VAR_14,
           size_t VAR_15)
{
 struct wpabuf *VAR_16;
 const u8 *VAR_17, *VAR_18, *VAR_19;
 size_t VAR_20;
 u8 *VAR_21;
 u8 VAR_22[VAR_7];
 u8 VAR_23[VAR_6];
 const u8 *VAR_24;
 size_t VAR_25;
 u8 VAR_26 = FUNC_10(VAR_13);

 if (VAR_11->state != VAR_0) {
  FUNC_15(VAR_8, "EAP-EKE: EAP-EKE-Commit/Request received in unexpected state (%d)", VAR_11->state);
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_5);
 }

 FUNC_15(VAR_8, "EAP-EKE: Received EAP-EKE-Commit/Request");

 VAR_24 = FUNC_9(VAR_10, &VAR_25);
 if (VAR_24 == ((void*)0)) {
  FUNC_15(VAR_9, "EAP-EKE: No password configured!");
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_3);
 }

 VAR_17 = VAR_14;
 VAR_18 = VAR_14 + VAR_15;

 if (VAR_17 + VAR_11->sess.dhcomp_len > VAR_18) {
  FUNC_15(VAR_8, "EAP-EKE: Too short EAP-EKE-Commit");
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_5);
 }

 FUNC_13(VAR_8, "EAP-EKE: DHComponent_S",
      VAR_17, VAR_11->sess.dhcomp_len);
 VAR_19 = VAR_17;
 VAR_17 += VAR_11->sess.dhcomp_len;
 FUNC_13(VAR_8, "EAP-EKE: CBValue", VAR_17, VAR_18 - VAR_17);





 if (FUNC_3(&VAR_11->sess, VAR_24, VAR_25,
          VAR_11->serverid, VAR_11->serverid_len,
          VAR_11->peerid, VAR_11->peerid_len, VAR_22) < 0) {
  FUNC_15(VAR_9, "EAP-EKE: Failed to derive key");
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }





 if (FUNC_4(VAR_11->sess.dhgroup, VAR_11->dh_priv, VAR_23) < 0) {
  FUNC_15(VAR_9, "EAP-EKE: Failed to initialize DH");
  FUNC_11(VAR_22, sizeof(VAR_22));
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }

 if (FUNC_7(&VAR_11->sess, VAR_22, VAR_11->dh_priv, VAR_19) < 0)
 {
  FUNC_15(VAR_9, "EAP-EKE: Failed to derive shared secret");
  FUNC_11(VAR_22, sizeof(VAR_22));
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }

 if (FUNC_2(&VAR_11->sess,
     VAR_11->serverid, VAR_11->serverid_len,
     VAR_11->peerid, VAR_11->peerid_len) < 0) {
  FUNC_15(VAR_9, "EAP-EKE: Failed to derive Ke/Ki");
  FUNC_11(VAR_22, sizeof(VAR_22));
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }

 FUNC_15(VAR_8, "EAP-EKE: Sending EAP-EKE-Commit/Response");

 VAR_16 = FUNC_1(VAR_11, VAR_26,
     VAR_11->sess.dhcomp_len + VAR_11->sess.pnonce_len,
     VAR_2);
 if (VAR_16 == ((void*)0)) {
  FUNC_11(VAR_22, sizeof(VAR_22));
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }


 VAR_21 = FUNC_18(VAR_16, VAR_11->sess.dhcomp_len);
 if (FUNC_5(&VAR_11->sess, VAR_22, VAR_23, VAR_21) < 0) {
  FUNC_16(VAR_16);
  FUNC_15(VAR_9, "EAP-EKE: Failed to build DHComponent_P");
  FUNC_11(VAR_22, sizeof(VAR_22));
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }
 FUNC_11(VAR_22, sizeof(VAR_22));

 FUNC_13(VAR_8, "EAP-EKE: DHComponent_P",
      VAR_21, VAR_11->sess.dhcomp_len);

 if (FUNC_12(VAR_11->nonce_p, VAR_11->sess.nonce_len)) {
  FUNC_16(VAR_16);
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }
 FUNC_14(VAR_8, "EAP-EKE: Nonce_P",
   VAR_11->nonce_p, VAR_11->sess.nonce_len);
 VAR_20 = FUNC_21(VAR_16);
 if (FUNC_6(&VAR_11->sess, VAR_11->nonce_p, VAR_11->sess.nonce_len,
    FUNC_18(VAR_16, 0), &VAR_20) < 0) {
  FUNC_16(VAR_16);
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }
 FUNC_13(VAR_8, "EAP-EKE: PNonce_P",
      FUNC_18(VAR_16, 0), VAR_20);
 FUNC_18(VAR_16, VAR_20);



 if (FUNC_20(&VAR_11->msgs, FUNC_17(VAR_13) + FUNC_17(VAR_16))
     < 0) {
  FUNC_16(VAR_16);
  return FUNC_0(VAR_11, VAR_12, VAR_26,
       VAR_4);
 }
 FUNC_19(VAR_11->msgs, VAR_13);
 FUNC_19(VAR_11->msgs, VAR_16);

 FUNC_8(VAR_11, VAR_1);

 return VAR_16;
}
