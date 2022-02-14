
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * ext_pw; int eapol; TYPE_1__* conf; } ;
struct TYPE_2__ {int ext_password_backend; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;

int FUNC_7(struct wpa_supplicant *VAR_1)
{
 char *VAR_2, *VAR_3;

 FUNC_1(VAR_1->ext_pw);
 VAR_1->ext_pw = ((void*)0);
 FUNC_0(VAR_1->eapol, ((void*)0));

 if (!VAR_1->conf->ext_password_backend)
  return 0;

 VAR_2 = FUNC_5(VAR_1->conf->ext_password_backend);
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_3 = FUNC_4(VAR_2, ':');
 if (VAR_3)
  *VAR_3++ = '\0';

 FUNC_6(VAR_0, "EXT PW: Initialize backend '%s'", VAR_2);

 VAR_1->ext_pw = FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2);
 if (VAR_1->ext_pw == ((void*)0)) {
  FUNC_6(VAR_0, "EXT PW: Failed to initialize backend");
  return -1;
 }
 FUNC_0(VAR_1->eapol, VAR_1->ext_pw);

 return 0;
}
