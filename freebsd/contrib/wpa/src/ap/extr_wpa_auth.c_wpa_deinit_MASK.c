
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {struct wpa_group* next; struct wpa_group* group; struct wpa_group* wpa_ie; int ip_pool; int * ft_pmk_cache; int pmksa; } ;
struct wpa_authenticator {struct wpa_authenticator* next; struct wpa_authenticator* group; struct wpa_authenticator* wpa_ie; int ip_pool; int * ft_pmk_cache; int pmksa; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct wpa_group*,int *) ;
 int FUNC_2 (struct wpa_group*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wpa_group*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(struct wpa_authenticator *VAR_2)
{
 struct wpa_group *VAR_3, *VAR_4;

 FUNC_1(VAR_0, VAR_2, ((void*)0));
 FUNC_1(VAR_1, VAR_2, ((void*)0));

 FUNC_3(VAR_2->pmksa);
 FUNC_2(VAR_2->wpa_ie);

 VAR_3 = VAR_2->group;
 while (VAR_3) {
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
  FUNC_2(VAR_4);
 }

 FUNC_2(VAR_2);
}
