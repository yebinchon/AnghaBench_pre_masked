
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct run_softc {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_opmode; TYPE_1__* iv_ic; } ;
struct TYPE_2__ {struct run_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct run_softc*,int,char*) ;
 int FUNC_1 (struct run_softc*,int ) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct run_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_6)
{
 struct ieee80211vap *VAR_7 = VAR_6;
 struct run_softc *VAR_8 = VAR_7->iv_ic->ic_softc;

 FUNC_1(VAR_8, VAR_3);

 if(VAR_7->iv_state == VAR_1 &&
     VAR_7->iv_opmode != VAR_0)
  FUNC_3(VAR_8);
 else if (VAR_7->iv_state == VAR_2) {
  FUNC_0(VAR_8, VAR_5 | VAR_4,
      "timeout caused by scan\n");

  FUNC_2(VAR_7);
 } else
  FUNC_0(VAR_8, VAR_5 | VAR_4,
      "timeout by unknown cause\n");
}
