
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_pwd_id {int dummy; } ;
struct eap_pwd_data {int id_server_len; int password_len; int * id_server; int * outbuf; int password_prep; int token; int group_num; scalar_t__ password_hash; scalar_t__ salt_len; int salt; int password; scalar_t__ out_frag_pos; } ;


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
 int FUNC_0 (struct eap_pwd_data*,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(struct eap_sm *VAR_10, struct eap_pwd_data *VAR_11,
     u8 VAR_12)
{
 FUNC_4(VAR_8, "EAP-pwd: ID/Request");



 if (VAR_11->out_frag_pos)
  return;

 VAR_11->outbuf = FUNC_5(sizeof(struct eap_pwd_id) +
        VAR_11->id_server_len);
 if (VAR_11->outbuf == ((void*)0)) {
  FUNC_0(VAR_11, VAR_7);
  return;
 }

 if (FUNC_1((u8 *) &VAR_11->token, sizeof(VAR_11->token)) < 0) {
  FUNC_6(VAR_11->outbuf);
  VAR_11->outbuf = ((void*)0);
  FUNC_0(VAR_11, VAR_7);
  return;
 }

 FUNC_3(VAR_8, "EAP-pwd (server): password",
   VAR_11->password, VAR_11->password_len);
 if (VAR_11->salt_len)
  FUNC_2(VAR_8, "EAP-pwd (server): salt",
       VAR_11->salt, VAR_11->salt_len);





 if (VAR_11->salt_len) {
  switch (VAR_11->password_len) {
  case 20:
   VAR_11->password_prep = VAR_4;
   break;
  case 32:
   VAR_11->password_prep = VAR_5;
   break;
  case 64:
   VAR_11->password_prep = VAR_6;
   break;
  default:
   FUNC_4(VAR_9,
       "EAP-pwd (server): bad size %d for salted password",
       (int) VAR_11->password_len);
   FUNC_0(VAR_11, VAR_7);
   return;
  }
 } else {

  VAR_11->password_prep = VAR_11->password_hash ? VAR_2 :
   VAR_3;
 }

 FUNC_7(VAR_11->outbuf, VAR_11->group_num);
 FUNC_9(VAR_11->outbuf, VAR_1);
 FUNC_9(VAR_11->outbuf, VAR_0);
 FUNC_8(VAR_11->outbuf, &VAR_11->token, sizeof(VAR_11->token));
 FUNC_9(VAR_11->outbuf, VAR_11->password_prep);
 FUNC_8(VAR_11->outbuf, VAR_11->id_server, VAR_11->id_server_len);
}
