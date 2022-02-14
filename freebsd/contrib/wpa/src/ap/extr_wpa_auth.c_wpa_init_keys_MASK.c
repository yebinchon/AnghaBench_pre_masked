
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {scalar_t__ wpa_group_state; int GInit; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct wpa_authenticator *VAR_3)
{
 struct wpa_group *VAR_4 = VAR_3->group;

 FUNC_1(VAR_1, "WPA: Start group state machine to set initial "
     "keys");
 FUNC_0(VAR_3, VAR_4);
 VAR_4->GInit = VAR_0;
 FUNC_0(VAR_3, VAR_4);
 if (VAR_4->wpa_group_state == VAR_2)
  return -1;
 return 0;
}
