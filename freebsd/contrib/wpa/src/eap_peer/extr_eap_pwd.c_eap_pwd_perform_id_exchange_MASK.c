
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pwd_id {scalar_t__ random_function; scalar_t__ prf; scalar_t__ prep; int token; int identity; int group_num; } ;
struct eap_pwd_data {scalar_t__ state; scalar_t__ prep; size_t id_server_len; int id_peer_len; int id_peer; int * outbuf; int group_num; int * grp; int * id_server; int * token; scalar_t__ password_hash; } ;
struct eap_method_ret {void* ignore; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct eap_pwd_data*,int ) ;
 int FUNC_2 (struct eap_pwd_data*,int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,char*,int *,int) ;
 int FUNC_7 (int ,char*,...) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct eap_sm *VAR_13, struct eap_pwd_data *VAR_14,
       struct eap_method_ret *VAR_15,
       const struct wpabuf *VAR_16,
       const u8 *VAR_17, size_t VAR_18)
{
 struct eap_pwd_id *VAR_19;

 if (VAR_14->state != VAR_11) {
  VAR_15->ignore = VAR_12;
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 if (VAR_18 < sizeof(struct eap_pwd_id)) {
  VAR_15->ignore = VAR_12;
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 VAR_19 = (struct eap_pwd_id *) VAR_17;
 VAR_14->group_num = FUNC_0(VAR_19->group_num);
 FUNC_7(VAR_8,
     "EAP-PWD: Server EAP-pwd-ID proposal: group=%u random=%u prf=%u prep=%u",
     VAR_14->group_num, VAR_19->random_function, VAR_19->prf, VAR_19->prep);
 if (VAR_19->random_function != VAR_1 ||
     VAR_19->prf != VAR_0 ||
     !FUNC_1(VAR_14, VAR_14->group_num)) {
  FUNC_7(VAR_9,
      "EAP-pwd: Unsupported or disabled proposal");
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 if (VAR_19->prep != VAR_3 &&
     VAR_19->prep != VAR_2 &&
     VAR_19->prep != VAR_4 &&
     VAR_19->prep != VAR_5 &&
     VAR_19->prep != VAR_6) {
  FUNC_7(VAR_8,
      "EAP-PWD: Unsupported password pre-processing technique (Prep=%u)",
      VAR_19->prep);
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 if (VAR_19->prep == VAR_3 && VAR_14->password_hash) {
  FUNC_7(VAR_8,
      "EAP-PWD: Unhashed password not available");
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 FUNC_7(VAR_8, "EAP-PWD (peer): using group %d",
     VAR_14->group_num);

 VAR_14->prep = VAR_19->prep;
 FUNC_5(VAR_14->token, VAR_19->token, sizeof(VAR_19->token));

 if (VAR_14->id_server || VAR_14->grp) {
  FUNC_7(VAR_9, "EAP-pwd: data was already allocated");
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 VAR_14->id_server = FUNC_4(VAR_18 - sizeof(struct eap_pwd_id));
 if (VAR_14->id_server == ((void*)0)) {
  FUNC_7(VAR_9, "EAP-PWD: memory allocation id fail");
  FUNC_2(VAR_14, VAR_7);
  return;
 }
 VAR_14->id_server_len = VAR_18 - sizeof(struct eap_pwd_id);
 FUNC_5(VAR_14->id_server, VAR_19->identity, VAR_14->id_server_len);
 FUNC_6(VAR_9, "EAP-PWD (peer): server sent id of",
     VAR_14->id_server, VAR_14->id_server_len);

 VAR_14->grp = FUNC_3(VAR_14->group_num);
 if (VAR_14->grp == ((void*)0)) {
  FUNC_7(VAR_9, "EAP-PWD: failed to allocate memory for "
      "group");
  FUNC_2(VAR_14, VAR_7);
  return;
 }

 VAR_14->outbuf = FUNC_8(sizeof(struct eap_pwd_id) +
        VAR_14->id_peer_len);
 if (VAR_14->outbuf == ((void*)0)) {
  FUNC_2(VAR_14, VAR_7);
  return;
 }
 FUNC_9(VAR_14->outbuf, VAR_14->group_num);
 FUNC_11(VAR_14->outbuf, VAR_1);
 FUNC_11(VAR_14->outbuf, VAR_0);
 FUNC_10(VAR_14->outbuf, VAR_19->token, sizeof(VAR_19->token));
 FUNC_11(VAR_14->outbuf, VAR_19->prep);
 FUNC_10(VAR_14->outbuf, VAR_14->id_peer, VAR_14->id_peer_len);

 FUNC_2(VAR_14, VAR_10);
}
