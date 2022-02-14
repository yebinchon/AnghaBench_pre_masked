
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct rtwn_vap {int id; } ;
struct rtwn_softc {int sc_flags; } ;
struct ieee80211vap {int iv_opmode; TYPE_1__* iv_ic; } ;
struct TYPE_2__ {struct rtwn_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int VAR_3 ;
 int FUNC_1 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct rtwn_softc*,struct ieee80211vap*,int) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211vap *VAR_4, u_long VAR_5)
{
 int VAR_6;

 switch (VAR_5) {

 case 132:
 case 131:
 {
  struct rtwn_softc *VAR_7 = VAR_4->iv_ic->ic_softc;
  struct rtwn_vap *VAR_8 = FUNC_2(VAR_4);

  if (VAR_4->iv_opmode == VAR_2 && VAR_8->id == 0) {
   FUNC_0(VAR_7);
   if (VAR_7->sc_flags & VAR_3)
    VAR_6 = FUNC_3(VAR_7, VAR_4, 1);
   else
    VAR_6 = 0;
   FUNC_1(VAR_7);
   if (VAR_6 != 0)
    VAR_6 = VAR_0;
  } else
   VAR_6 = VAR_1;
  break;
 }

 case 128:
 case 129:
 case 130:
 case 134:
 case 133:
  VAR_6 = 0;
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
