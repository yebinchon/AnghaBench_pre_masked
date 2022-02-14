
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct elink_vars {scalar_t__ mac_type; int link_up; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct elink_params*,int *,int *) ;

void FUNC_2(struct elink_params *VAR_1, struct elink_vars *VAR_2,
    uint32_t VAR_3[2],
    uint32_t VAR_4[2])
{

 struct bxe_softc *VAR_5 = VAR_1->sc;

 FUNC_0(VAR_5, "pfc statistic\n");

 if (!VAR_2->link_up)
  return;

 if (VAR_2->mac_type == VAR_0) {
  FUNC_0(VAR_5, "About to read PFC stats from EMAC\n");
  FUNC_1(VAR_1, VAR_3,
     VAR_4);
 }
}
