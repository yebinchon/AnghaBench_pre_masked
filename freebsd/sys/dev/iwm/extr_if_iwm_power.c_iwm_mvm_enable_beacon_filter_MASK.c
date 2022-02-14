
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_vap {int dummy; } ;
struct iwm_softc {int dummy; } ;
struct iwm_beacon_filter_cmd {int bf_enable_beacon_filter; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,struct iwm_vap*,struct iwm_beacon_filter_cmd*) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct iwm_softc *VAR_1, struct iwm_vap *VAR_2)
{
 struct iwm_beacon_filter_cmd VAR_3 = {
  VAR_0,
  .bf_enable_beacon_filter = FUNC_1(1),
 };

 return FUNC_0(VAR_1, VAR_2, &VAR_3);
}
