
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_vap {int dummy; } ;
struct iwm_softc {int dummy; } ;
struct iwm_mac_power_cmd {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,struct iwm_vap*,struct iwm_mac_power_cmd*) ;
 int FUNC_1 (struct iwm_softc*,struct iwm_mac_power_cmd*) ;
 int FUNC_2 (struct iwm_softc*,int ,int ,int,struct iwm_mac_power_cmd*) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_1, struct iwm_vap *VAR_2)
{
 struct iwm_mac_power_cmd VAR_3 = {};

 FUNC_0(VAR_1, VAR_2, &VAR_3);
 FUNC_1(VAR_1, &VAR_3);

 return FUNC_2(VAR_1, VAR_0, 0,
     sizeof(VAR_3), &VAR_3);
}
