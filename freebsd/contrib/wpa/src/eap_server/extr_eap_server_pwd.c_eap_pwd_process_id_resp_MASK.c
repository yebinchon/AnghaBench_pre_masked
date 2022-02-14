
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_pwd_id {scalar_t__ random_function; scalar_t__ prf; scalar_t__ prep; int identity; int token; int group_num; } ;
struct eap_pwd_data {scalar_t__ group_num; scalar_t__ password_prep; size_t id_peer_len; size_t password_len; TYPE_1__* grp; int token; int * id_peer; int id_server_len; int id_server; int * password; } ;
typedef int pwhashhash ;
struct TYPE_3__ {int group; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int const*,size_t,int ,int ,int *,size_t,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct eap_pwd_data*,int ) ;
 int FUNC_4 (int *,int) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int *,int ,size_t) ;
 int FUNC_10 (int ,char*,int *,size_t) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static void FUNC_12(struct eap_sm *VAR_7,
        struct eap_pwd_data *VAR_8,
        const u8 *VAR_9, size_t VAR_10)
{
 struct eap_pwd_id *VAR_11;
 const u8 *VAR_12;
 size_t VAR_13;
 u8 VAR_14[16];
 int VAR_15;

 if (VAR_10 < sizeof(struct eap_pwd_id)) {
  FUNC_11(VAR_5, "EAP-pwd: Invalid ID response");
  return;
 }

 VAR_11 = (struct eap_pwd_id *) VAR_9;
 if ((VAR_8->group_num != FUNC_0(VAR_11->group_num)) ||
     (VAR_11->random_function != VAR_1) ||
     (FUNC_8(VAR_11->token, (u8 *)&VAR_8->token, sizeof(VAR_8->token))) ||
     (VAR_11->prf != VAR_0) ||
     (VAR_11->prep != VAR_8->password_prep)) {
  FUNC_11(VAR_5, "EAP-pwd: peer changed parameters");
  FUNC_3(VAR_8, VAR_3);
  return;
 }
 if (VAR_8->id_peer || VAR_8->grp) {
  FUNC_11(VAR_5, "EAP-pwd: data was already allocated");
  return;
 }
 VAR_8->id_peer = FUNC_7(VAR_10 - sizeof(struct eap_pwd_id));
 if (VAR_8->id_peer == ((void*)0)) {
  FUNC_11(VAR_5, "EAP-PWD: memory allocation id fail");
  return;
 }
 VAR_8->id_peer_len = VAR_10 - sizeof(struct eap_pwd_id);
 FUNC_9(VAR_8->id_peer, VAR_11->identity, VAR_8->id_peer_len);
 FUNC_10(VAR_4, "EAP-PWD (server): peer sent id of",
     VAR_8->id_peer, VAR_8->id_peer_len);

 VAR_8->grp = FUNC_5(VAR_8->group_num);
 if (VAR_8->grp == ((void*)0)) {
  FUNC_11(VAR_5, "EAP-PWD: failed to allocate memory for "
      "group");
  return;
 }






 if (VAR_8->password_prep == VAR_2) {
  VAR_15 = FUNC_6(VAR_8->password, VAR_14);
  if (VAR_15)
   return;
  VAR_12 = VAR_14;
  VAR_13 = sizeof(VAR_14);
 } else {
  VAR_12 = VAR_8->password;
  VAR_13 = VAR_8->password_len;
 }

 VAR_15 = FUNC_1(VAR_8->grp, VAR_8->group_num,
           VAR_12, VAR_13,
           VAR_8->id_server, VAR_8->id_server_len,
           VAR_8->id_peer, VAR_8->id_peer_len,
           (u8 *) &VAR_8->token);
 FUNC_4(VAR_14, sizeof(VAR_14));
 if (VAR_15) {
  FUNC_11(VAR_5, "EAP-PWD (server): unable to compute "
      "PWE");
  return;
 }
 FUNC_11(VAR_4, "EAP-PWD (server): computed %d bit PWE...",
     (int) FUNC_2(VAR_8->grp->group));

 FUNC_3(VAR_8, VAR_6);
}
