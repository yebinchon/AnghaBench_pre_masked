
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {int addr; } ;
struct wpa_authenticator {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_authenticator*,int ,int ,char*) ;
 int FUNC_1 (struct wpa_state_machine*) ;
 int FUNC_2 (struct wpa_state_machine*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct wpa_authenticator *VAR_3 = VAR_1;
 struct wpa_state_machine *VAR_4 = VAR_2;

 FUNC_0(VAR_3, VAR_4->addr, VAR_0, "rekeying PTK");
 FUNC_1(VAR_4);
 FUNC_2(VAR_4);
}
