
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_cred {struct wpa_cred* next; } ;
struct TYPE_2__ {struct wpa_cred* cred; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_cred*,struct wpabuf*) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_0,
    struct wpabuf *VAR_1)
{
 struct wpa_cred *VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0->conf->cred == ((void*)0))
  return -1;

 for (VAR_2 = VAR_0->conf->cred; VAR_2; VAR_2 = VAR_2->next) {
  int VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
