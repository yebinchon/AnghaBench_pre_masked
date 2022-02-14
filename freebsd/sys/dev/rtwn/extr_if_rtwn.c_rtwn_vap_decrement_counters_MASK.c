
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {scalar_t__ ap_vaps; scalar_t__ bcn_vaps; scalar_t__ nvaps; scalar_t__ mon_vaps; scalar_t__ vaps_running; scalar_t__ monvaps_running; int ** vaps; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;






 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 scalar_t__ FUNC_2 (struct rtwn_softc*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct rtwn_softc *VAR_2,
    enum ieee80211_opmode VAR_3, int VAR_4)
{

 FUNC_1(VAR_2);

 if (VAR_4 != VAR_1) {
  FUNC_0(VAR_4 == 0 || VAR_4 == 1, ("wrong vap id %d!\n", VAR_4));
  FUNC_0(VAR_2->vaps[VAR_4] != ((void*)0), ("vap pointer is NULL\n"));
  VAR_2->vaps[VAR_4] = ((void*)0);
 }

 switch (VAR_3) {
 case 131:
  VAR_2->ap_vaps--;

 case 130:
  VAR_2->bcn_vaps--;

 case 128:
  VAR_2->nvaps--;
  break;
 case 129:
  VAR_2->mon_vaps--;
  break;
 default:
  FUNC_0(0, ("wrong opmode %d\n", VAR_3));
  break;
 }

 FUNC_0(VAR_2->vaps_running >= 0 && VAR_2->monvaps_running >= 0,
     ("number of running vaps is negative (vaps %d, monvaps %d)\n",
     VAR_2->vaps_running, VAR_2->monvaps_running));
 FUNC_0(VAR_2->vaps_running - VAR_2->monvaps_running <= VAR_0,
     ("number of running vaps is too big (vaps %d, monvaps %d)\n",
     VAR_2->vaps_running, VAR_2->monvaps_running));

 FUNC_0(VAR_2->nvaps >= 0 && VAR_2->nvaps <= VAR_0,
     ("wrong value %d for nvaps\n", VAR_2->nvaps));
 FUNC_0(VAR_2->mon_vaps >= 0, ("mon_vaps is negative (%d)\n",
     VAR_2->mon_vaps));
 FUNC_0(VAR_2->bcn_vaps >= 0 && ((FUNC_2(VAR_2) &&
     VAR_2->bcn_vaps <= VAR_0) || VAR_2->bcn_vaps <= 1),
     ("bcn_vaps value %d is wrong\n", VAR_2->bcn_vaps));
 FUNC_0(VAR_2->ap_vaps >= 0 && ((FUNC_2(VAR_2) &&
     VAR_2->ap_vaps <= VAR_0) || VAR_2->ap_vaps <= 1),
     ("ap_vaps value %d is wrong\n", VAR_2->ap_vaps));
}
