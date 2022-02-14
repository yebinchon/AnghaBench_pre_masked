
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct TYPE_4__ {size_t pnonce_ps_len; size_t prf_len; int nonce_len; } ;
struct eap_eke_data {TYPE_1__ sess; int msgs; int nonce_s; int nonce_p; int peerid_len; int peerid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int ,int *) ;
 struct wpabuf* FUNC_1 (struct eap_eke_data*,int ) ;
 struct wpabuf* FUNC_2 (struct eap_eke_data*,int ,size_t,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct eap_eke_data*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int,int *,size_t*) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*,int *,size_t) ;
 int FUNC_9 (int ,char*,int ,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct wpabuf*) ;
 int * FUNC_12 (struct wpabuf*,size_t) ;
 size_t FUNC_13 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_14(struct eap_sm *VAR_4,
          struct eap_eke_data *VAR_5, u8 VAR_6)
{
 struct wpabuf *VAR_7;
 size_t VAR_8, VAR_9;
 u8 VAR_10[2 * VAR_2];
 u8 *VAR_11;

 FUNC_10(VAR_3, "EAP-EKE: Request/Confirm");

 VAR_8 = VAR_5->sess.pnonce_ps_len + VAR_5->sess.prf_len;
 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_8, VAR_0);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_5, VAR_1);
  return FUNC_1(VAR_5, VAR_6);
 }

 if (FUNC_7(VAR_5->nonce_s, VAR_5->sess.nonce_len)) {
  FUNC_11(VAR_7);
  FUNC_4(VAR_5, VAR_1);
  return FUNC_1(VAR_5, VAR_6);
 }
 FUNC_9(VAR_3, "EAP-EKE: Nonce_S",
   VAR_5->nonce_s, VAR_5->sess.nonce_len);

 FUNC_6(VAR_10, VAR_5->nonce_p, VAR_5->sess.nonce_len);
 FUNC_6(VAR_10 + VAR_5->sess.nonce_len, VAR_5->nonce_s,
    VAR_5->sess.nonce_len);
 VAR_9 = FUNC_13(VAR_7);
 if (FUNC_5(&VAR_5->sess, VAR_10, 2 * VAR_5->sess.nonce_len,
    FUNC_12(VAR_7, 0), &VAR_9) < 0) {
  FUNC_11(VAR_7);
  FUNC_4(VAR_5, VAR_1);
  return FUNC_1(VAR_5, VAR_6);
 }
 FUNC_12(VAR_7, VAR_9);

 if (FUNC_3(&VAR_5->sess,
         VAR_4->server_id, VAR_4->server_id_len,
         VAR_5->peerid, VAR_5->peerid_len,
         VAR_5->nonce_p, VAR_5->nonce_s) < 0) {
  FUNC_11(VAR_7);
  FUNC_4(VAR_5, VAR_1);
  return FUNC_1(VAR_5, VAR_6);
 }

 VAR_11 = FUNC_12(VAR_7, VAR_5->sess.prf_len);
 if (FUNC_0(&VAR_5->sess, "EAP-EKE server", VAR_5->msgs, VAR_11) < 0) {
  FUNC_11(VAR_7);
  FUNC_4(VAR_5, VAR_1);
  return FUNC_1(VAR_5, VAR_6);
 }
 FUNC_8(VAR_3, "EAP-EKE: Auth_S", VAR_11, VAR_5->sess.prf_len);

 return VAR_7;
}
