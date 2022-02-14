
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_cred {char** domain; size_t num_domain; char* provisioning_sp; struct wpa_cred* next; } ;
struct TYPE_2__ {struct wpa_cred* cred; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct wpa_cred* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_cred*) ;

__attribute__((used)) static int FUNC_6(struct wpa_supplicant *VAR_1,
       char *VAR_2)
{
 int VAR_3;
 struct wpa_cred *VAR_4, *VAR_5;



 if (FUNC_1(VAR_2, "all") == 0) {
  FUNC_4(VAR_0, "CTRL_IFACE: REMOVE_CRED all");
  VAR_4 = VAR_1->conf->cred;
  while (VAR_4) {
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->next;
   FUNC_5(VAR_1, VAR_5);
  }
  return 0;
 }

 if (FUNC_2(VAR_2, "sp_fqdn=", 8) == 0) {
  FUNC_4(VAR_0, "CTRL_IFACE: REMOVE_CRED SP FQDN '%s'",
      VAR_2 + 8);
  VAR_4 = VAR_1->conf->cred;
  while (VAR_4) {
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->next;
   if (VAR_5->domain) {
    size_t VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_5->num_domain; VAR_6++) {
     if (FUNC_1(VAR_5->domain[VAR_6], VAR_2 + 8)
         != 0)
      continue;
     FUNC_5(VAR_1, VAR_5);
     break;
    }
   }
  }
  return 0;
 }

 if (FUNC_2(VAR_2, "provisioning_sp=", 16) == 0) {
  FUNC_4(VAR_0, "CTRL_IFACE: REMOVE_CRED provisioning SP FQDN '%s'",
      VAR_2 + 16);
  VAR_4 = VAR_1->conf->cred;
  while (VAR_4) {
   VAR_5 = VAR_4;
   VAR_4 = VAR_4->next;
   if (VAR_5->provisioning_sp &&
       FUNC_1(VAR_5->provisioning_sp, VAR_2 + 16) == 0)
    FUNC_5(VAR_1, VAR_5);
  }
  return 0;
 }

 VAR_3 = FUNC_0(VAR_2);
 FUNC_4(VAR_0, "CTRL_IFACE: REMOVE_CRED id=%d", VAR_3);

 VAR_4 = FUNC_3(VAR_1->conf, VAR_3);
 return FUNC_5(VAR_1, VAR_4);
}
