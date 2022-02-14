
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {scalar_t__ fw_state; int flags; } ;
struct ieee80211com {struct iwi_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwi_softc*) ;
 int VAR_3 ;
 int FUNC_1 (struct iwi_softc*) ;
 int FUNC_2 (struct iwi_softc*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_4)
{
 struct iwi_softc *VAR_5 = VAR_4->ic_softc;
 VAR_3;

 FUNC_0(VAR_5);
 VAR_5->flags &= ~VAR_1;

 if (VAR_5->fw_state == VAR_2)
  FUNC_2(VAR_5, VAR_0, ((void*)0), 0);
 FUNC_1(VAR_5);
}
