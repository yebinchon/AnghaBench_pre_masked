
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct radius_session {struct hostapd_radius_attr* accept_attr; scalar_t__ username; } ;
struct radius_server_data {int (* get_eap_user ) (int ,int *,int ,int ,struct eap_user*) ;int conf_ctx; } ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int authenticator; int identifier; } ;
struct radius_client {int shared_secret_len; scalar_t__ shared_secret; } ;
struct hostapd_radius_attr {int val; int type; struct hostapd_radius_attr* next; } ;
struct eap_user {int password_len; int * password; int macacl; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct eap_user*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct radius_msg*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct radius_msg*,struct radius_msg*,int ) ;
 scalar_t__ FUNC_7 (struct radius_msg*,int *,int ,int ) ;
 int FUNC_8 (struct radius_msg*) ;
 scalar_t__ FUNC_9 (struct radius_msg*,int ,int **,size_t*,int *) ;
 struct radius_hdr* FUNC_10 (struct radius_msg*) ;
 struct radius_msg* FUNC_11 (int,int ) ;
 int FUNC_12 (struct radius_msg*,int *,int ,int *,int ,int *,int) ;
 int FUNC_13 (int ,int *,int ,int ,struct eap_user*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static struct radius_msg *
FUNC_17(struct radius_server_data *VAR_5,
       struct radius_client *VAR_6,
       struct radius_session *VAR_7,
       struct radius_msg *VAR_8)
{
 struct radius_msg *VAR_9;
 int VAR_10;
 struct radius_hdr *VAR_11 = FUNC_10(VAR_8);
 u8 *VAR_12;
 size_t VAR_13;

 VAR_10 = VAR_3;

 if (FUNC_9(VAR_8, VAR_2, &VAR_12,
        &VAR_13, ((void*)0)) < 0) {
  FUNC_0("Could not get User-Password");
  VAR_10 = VAR_4;
 } else {
  int VAR_14;
  struct eap_user VAR_15;

  FUNC_3(&VAR_15, 0, sizeof(VAR_15));
  VAR_14 = VAR_5->get_eap_user(VAR_5->conf_ctx, (u8 *) VAR_7->username,
      FUNC_4(VAR_7->username), 0, &VAR_15);
  if (VAR_14 || !VAR_15.macacl || VAR_15.password == ((void*)0)) {
   FUNC_0("No MAC ACL user entry");
   FUNC_1(VAR_15.password, VAR_15.password_len);
   VAR_10 = VAR_4;
  } else {
   u8 VAR_16[128];
   VAR_14 = FUNC_12(
    VAR_8, VAR_15.password, VAR_15.password_len,
    (u8 *) VAR_6->shared_secret,
    VAR_6->shared_secret_len,
    VAR_16, sizeof(VAR_16));
   FUNC_1(VAR_15.password, VAR_15.password_len);

   if (VAR_14 < 0 || VAR_13 != (size_t) VAR_14 ||
       FUNC_2(VAR_12, VAR_16, VAR_14) != 0) {
    FUNC_0("Incorrect User-Password");
    VAR_10 = VAR_4;
   }
  }
 }

 VAR_9 = FUNC_11(VAR_10, VAR_11->identifier);
 if (VAR_9 == ((void*)0)) {
  FUNC_0("Failed to allocate reply message");
  return ((void*)0);
 }

 if (FUNC_6(VAR_9, VAR_8, VAR_1) < 0) {
  FUNC_0("Failed to copy Proxy-State attribute(s)");
  FUNC_8(VAR_9);
  return ((void*)0);
 }

 if (VAR_10 == VAR_3) {
  struct hostapd_radius_attr *VAR_17;
  for (VAR_17 = VAR_7->accept_attr; VAR_17; VAR_17 = VAR_17->next) {
   if (!FUNC_5(VAR_9, VAR_17->type,
       FUNC_15(VAR_17->val),
       FUNC_16(VAR_17->val))) {
    FUNC_14(VAR_0, "Could not add RADIUS attribute");
    FUNC_8(VAR_9);
    return ((void*)0);
   }
  }
 }

 if (FUNC_7(VAR_9, (u8 *) VAR_6->shared_secret,
      VAR_6->shared_secret_len,
      VAR_11->authenticator) < 0) {
  FUNC_0("Failed to add Message-Authenticator attribute");
 }

 return VAR_9;
}
