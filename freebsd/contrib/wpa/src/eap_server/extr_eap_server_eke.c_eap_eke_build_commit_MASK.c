
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; TYPE_1__* user; } ;
struct TYPE_5__ {int dhcomp_len; int dhgroup; } ;
struct eap_eke_data {int msgs; TYPE_2__ sess; int key; int dh_priv; int peerid_len; int peerid; } ;
struct TYPE_4__ {int password_len; int * password; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wpabuf* FUNC_0 (struct eap_eke_data*,int ) ;
 struct wpabuf* FUNC_1 (struct eap_eke_data*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_5 (struct eap_eke_data*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int ) ;
 int FUNC_10 (int ,struct wpabuf*) ;
 scalar_t__ FUNC_11 (int *,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_12(struct eap_sm *VAR_6,
         struct eap_eke_data *VAR_7, u8 VAR_8)
{
 struct wpabuf *VAR_9;
 u8 VAR_10[VAR_3];

 FUNC_6(VAR_4, "EAP-EKE: Request/Commit");

 if (VAR_6->user == ((void*)0) || VAR_6->user->password == ((void*)0)) {
  FUNC_6(VAR_5, "EAP-EKE: Password with not configured");
  FUNC_5(VAR_7, VAR_1);
  return FUNC_0(VAR_7, VAR_8);
 }

 if (FUNC_2(&VAR_7->sess, VAR_6->user->password,
          VAR_6->user->password_len,
          VAR_6->server_id, VAR_6->server_id_len,
          VAR_7->peerid, VAR_7->peerid_len, VAR_7->key) < 0) {
  FUNC_6(VAR_5, "EAP-EKE: Failed to derive key");
  FUNC_5(VAR_7, VAR_2);
  return FUNC_0(VAR_7, VAR_8);
 }

 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_7->sess.dhcomp_len,
    VAR_0);
 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_7, VAR_2);
  return FUNC_0(VAR_7, VAR_8);
 }
 if (FUNC_3(VAR_7->sess.dhgroup, VAR_7->dh_priv, VAR_10) < 0) {
  FUNC_6(VAR_5, "EAP-EKE: Failed to initialize DH");
  FUNC_5(VAR_7, VAR_2);
  return FUNC_0(VAR_7, VAR_8);
 }

 if (FUNC_4(&VAR_7->sess, VAR_7->key, VAR_10,
      FUNC_9(VAR_9, VAR_7->sess.dhcomp_len))
     < 0) {
  FUNC_6(VAR_5, "EAP-EKE: Failed to build DHComponent_S");
  FUNC_7(VAR_9);
  FUNC_5(VAR_7, VAR_2);
  return FUNC_0(VAR_7, VAR_8);
 }

 if (FUNC_11(&VAR_7->msgs, FUNC_8(VAR_9)) < 0) {
  FUNC_7(VAR_9);
  FUNC_5(VAR_7, VAR_2);
  return FUNC_0(VAR_7, VAR_8);
 }
 FUNC_10(VAR_7->msgs, VAR_9);

 return VAR_9;
}
