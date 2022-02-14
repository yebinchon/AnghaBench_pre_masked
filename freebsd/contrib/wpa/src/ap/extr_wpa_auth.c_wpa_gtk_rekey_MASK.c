
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int GM; int GN; int GM_igtk; int GN_igtk; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int FUNC_0 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;

void FUNC_2(struct wpa_authenticator *VAR_0)
{
 int VAR_1, VAR_2;
 struct wpa_group *VAR_3;

 if (VAR_0 == ((void*)0))
  return;

 VAR_3 = VAR_0->group;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_1 = VAR_3->GM;
  VAR_3->GM = VAR_3->GN;
  VAR_3->GN = VAR_1;





  FUNC_1(VAR_0, VAR_3);
  FUNC_0(VAR_0, VAR_3);
 }
}
