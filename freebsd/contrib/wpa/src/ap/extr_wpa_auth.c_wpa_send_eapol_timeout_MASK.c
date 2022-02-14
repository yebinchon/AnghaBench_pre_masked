
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_state_machine {int TimeoutEvt; int addr; scalar_t__ pending_1_of_4_timeout; } ;
struct wpa_authenticator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_authenticator*,int ,int ,char*) ;
 int FUNC_1 (struct wpa_state_machine*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct wpa_authenticator *VAR_4 = VAR_2;
 struct wpa_state_machine *VAR_5 = VAR_3;

 VAR_5->pending_1_of_4_timeout = 0;
 FUNC_0(VAR_4, VAR_5->addr, VAR_0, "EAPOL-Key timeout");
 VAR_5->TimeoutEvt = VAR_1;
 FUNC_1(VAR_5);
}
