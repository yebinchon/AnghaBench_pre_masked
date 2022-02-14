
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * eapol; int wpa; TYPE_1__* conf; } ;
struct TYPE_2__ {char* pkcs11_engine_path; char* pkcs11_module_path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*) ;

int FUNC_5(struct wpa_supplicant *VAR_0,
        const char *VAR_1,
        const char *VAR_2)
{
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);

 if (VAR_1 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3 == ((void*)0))
   return -1;
 }
 if (VAR_2 != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 == ((void*)0)) {
   FUNC_1(VAR_3);
   return -1;
  }
 }

 FUNC_1(VAR_0->conf->pkcs11_engine_path);
 FUNC_1(VAR_0->conf->pkcs11_module_path);
 VAR_0->conf->pkcs11_engine_path = VAR_3;
 VAR_0->conf->pkcs11_module_path = VAR_4;

 FUNC_3(VAR_0->wpa, ((void*)0));
 FUNC_0(VAR_0->eapol);
 VAR_0->eapol = ((void*)0);
 if (FUNC_4(VAR_0)) {

  if (VAR_1 != ((void*)0) && VAR_2 != ((void*)0))
   FUNC_5(VAR_0, ((void*)0),
              ((void*)0));

  return -1;
 }
 FUNC_3(VAR_0->wpa, VAR_0->eapol);

 return 0;
}
