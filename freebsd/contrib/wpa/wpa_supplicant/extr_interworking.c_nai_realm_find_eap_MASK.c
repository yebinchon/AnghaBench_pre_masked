
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wpa_supplicant {int dummy; } ;
struct wpa_cred {char* username; char* password; char* private_key; } ;
struct nai_realm_eap {int dummy; } ;
struct nai_realm {size_t eap_count; struct nai_realm_eap* eap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,struct nai_realm_eap*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,struct nai_realm_eap*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,char*,char*,char*) ;

__attribute__((used)) static struct nai_realm_eap * FUNC_3(struct wpa_supplicant *VAR_1,
       struct wpa_cred *VAR_2,
       struct nai_realm *VAR_3)
{
 u8 VAR_4;

 if (VAR_2->username == ((void*)0) ||
     VAR_2->username[0] == '\0' ||
     ((VAR_2->password == ((void*)0) ||
       VAR_2->password[0] == '\0') &&
      (VAR_2->private_key == ((void*)0) ||
       VAR_2->private_key[0] == '\0'))) {
  FUNC_2(VAR_1, VAR_0,
   "nai-realm-find-eap: incomplete cred info: username: %s  password: %s private_key: %s",
   VAR_2->username ? VAR_2->username : "NULL",
   VAR_2->password ? VAR_2->password : "NULL",
   VAR_2->private_key ? VAR_2->private_key : "NULL");
  return ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->eap_count; VAR_4++) {
  struct nai_realm_eap *VAR_5 = &VAR_3->eap[VAR_4];
  if (VAR_2->password && VAR_2->password[0] &&
      FUNC_1(VAR_1, VAR_5))
   return VAR_5;
  if (VAR_2->private_key && VAR_2->private_key[0] &&
      FUNC_0(VAR_1, VAR_5))
   return VAR_5;
 }

 return ((void*)0);
}
