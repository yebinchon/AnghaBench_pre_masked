
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {struct wpa_group* next; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int FUNC_0 (struct wpa_authenticator*,struct wpa_group*) ;

void FUNC_1(struct wpa_authenticator *VAR_0)
{
 struct wpa_group *VAR_1;

 if (!VAR_0)
  return;
 for (VAR_1 = VAR_0->group; VAR_1; VAR_1 = VAR_1->next)
  FUNC_0(VAR_0, VAR_1);
}
