
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {int GInit; int GTK_len; } ;
struct TYPE_2__ {int wpa_group; } ;
struct wpa_authenticator {TYPE_1__ conf; struct wpa_group* group; } ;
struct wpa_auth_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct wpa_auth_config*,int) ;
 scalar_t__ FUNC_1 (struct wpa_authenticator*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct wpa_authenticator *VAR_3,
   struct wpa_auth_config *VAR_4)
{
 struct wpa_group *VAR_5;
 if (VAR_3 == ((void*)0))
  return 0;

 FUNC_0(&VAR_3->conf, VAR_4, sizeof(*VAR_4));
 if (FUNC_1(VAR_3)) {
  FUNC_4(VAR_1, "Could not generate WPA IE.");
  return -1;
 }





 VAR_5 = VAR_3->group;
 VAR_5->GTK_len = FUNC_2(VAR_3->conf.wpa_group);
 VAR_5->GInit = VAR_2;
 FUNC_3(VAR_3, VAR_5);
 VAR_5->GInit = VAR_0;
 FUNC_3(VAR_3, VAR_5);

 return 0;
}
