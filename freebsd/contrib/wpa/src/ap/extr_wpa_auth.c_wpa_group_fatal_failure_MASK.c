
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int wpa_group_state; int changed; } ;
struct wpa_authenticator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_authenticator*,int ,struct wpa_group*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct wpa_authenticator *VAR_4,
        struct wpa_group *VAR_5)
{
 FUNC_1(VAR_0, "WPA: group state machine entering state FATAL_FAILURE");
 VAR_5->changed = VAR_1;
 VAR_5->wpa_group_state = VAR_2;
 FUNC_0(VAR_4, VAR_3, VAR_5);
}
