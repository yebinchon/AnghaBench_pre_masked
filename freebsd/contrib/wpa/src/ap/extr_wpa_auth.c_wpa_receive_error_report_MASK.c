
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_state_machine {scalar_t__ pairwise; int dot11RSNAStatsTKIPRemoteMICFailures; int addr; } ;
struct TYPE_2__ {scalar_t__ wpa_group; } ;
struct wpa_authenticator {int dot11RSNAStatsTKIPRemoteMICFailures; TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_authenticator*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_authenticator*,int ) ;
 int FUNC_2 (struct wpa_authenticator*,int ,int ,char*,int) ;
 int FUNC_3 (struct wpa_state_machine*) ;

__attribute__((used)) static int FUNC_4(struct wpa_authenticator *VAR_2,
        struct wpa_state_machine *VAR_3, int VAR_4)
{

 FUNC_2(VAR_2, VAR_3->addr, VAR_0,
    "received EAPOL-Key Error Request "
    "(STA detected Michael MIC failure (group=%d))",
    VAR_4);

 if (VAR_4 && VAR_2->conf.wpa_group != VAR_1) {
  FUNC_0(VAR_2, VAR_3->addr, VAR_0,
    "ignore Michael MIC failure report since "
    "group cipher is not TKIP");
 } else if (!VAR_4 && VAR_3->pairwise != VAR_1) {
  FUNC_0(VAR_2, VAR_3->addr, VAR_0,
    "ignore Michael MIC failure report since "
    "pairwise cipher is not TKIP");
 } else {
  if (FUNC_1(VAR_2, VAR_3->addr) > 0)
   return 1;
  VAR_3->dot11RSNAStatsTKIPRemoteMICFailures++;
  VAR_2->dot11RSNAStatsTKIPRemoteMICFailures++;
 }





 FUNC_3(VAR_3);
 return 0;
}
