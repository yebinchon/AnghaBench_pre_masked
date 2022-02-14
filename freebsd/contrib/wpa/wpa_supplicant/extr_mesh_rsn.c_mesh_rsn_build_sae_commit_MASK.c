
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int own_addr; } ;
struct wpa_ssid {char* sae_password; char* passphrase; int sae_password_id; } ;
struct sta_info {TYPE_2__* sae; int addr; } ;
struct TYPE_5__ {TYPE_1__* tmp; } ;
struct TYPE_4__ {scalar_t__ pw_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int ,int *,int ,int ,TYPE_2__*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_1,
         struct wpa_ssid *VAR_2,
         struct sta_info *VAR_3)
{
 const char *VAR_4;

 VAR_4 = VAR_2->sae_password;
 if (!VAR_4)
  VAR_4 = VAR_2->passphrase;
 if (!VAR_4) {
  FUNC_4(VAR_1, VAR_0, "SAE: No password available");
  return -1;
 }

 if (FUNC_0(VAR_1, VAR_3->sae) < 0) {
  FUNC_4(VAR_1, VAR_0, "SAE: Failed to select group");
  return -1;
 }

 if (VAR_3->sae->tmp && !VAR_3->sae->tmp->pw_id && VAR_2->sae_password_id) {
  VAR_3->sae->tmp->pw_id = FUNC_1(VAR_2->sae_password_id);
  if (!VAR_3->sae->tmp->pw_id)
   return -1;
 }
 return FUNC_3(VAR_1->own_addr, VAR_3->addr,
      (u8 *) VAR_4, FUNC_2(VAR_4),
      VAR_2->sae_password_id,
      VAR_3->sae);
}
