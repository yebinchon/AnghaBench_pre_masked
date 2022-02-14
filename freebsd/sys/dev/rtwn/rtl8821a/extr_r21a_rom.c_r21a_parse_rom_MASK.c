
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ic_macaddr; } ;
struct rtwn_softc {TYPE_1__ sc_ic; struct r12a_softc* sc_priv; } ;
struct r12a_softc {int bt_coex; int bt_ant_num; void* ext_lna_5g; void* ext_lna_2g; int ext_pa_5g; int ext_pa_2g; } ;
struct r12a_rom {int rf_bt_opt; int macaddr_21a; int lna_type_5g; int lna_type_2g; int pa_type; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct rtwn_softc*) ;
 int FUNC_6 (struct rtwn_softc*) ;
 int FUNC_7 (struct rtwn_softc*,int *) ;
 int FUNC_8 (struct rtwn_softc*,int ) ;

void
FUNC_9(struct rtwn_softc *VAR_3, uint8_t *VAR_4)
{
 struct r12a_softc *VAR_5 = VAR_3->sc_priv;
 struct r12a_rom *VAR_6 = (struct r12a_rom *)VAR_4;
 uint8_t VAR_7, VAR_8, VAR_9;


 VAR_7 = FUNC_4(VAR_6->pa_type, 0);
 VAR_8 = FUNC_4(VAR_6->lna_type_2g, 0);
 VAR_9 = FUNC_4(VAR_6->lna_type_5g, 0);

 VAR_5->ext_pa_2g = FUNC_2(VAR_7);
 VAR_5->ext_pa_5g = FUNC_3(VAR_7);
 VAR_5->ext_lna_2g = FUNC_1(VAR_8);
 VAR_5->ext_lna_5g = FUNC_1(VAR_9);

 FUNC_5(VAR_3);
 VAR_5->bt_coex =
     !!(FUNC_8(VAR_3, VAR_2) & VAR_1);
 FUNC_6(VAR_3);
 VAR_5->bt_ant_num = (VAR_6->rf_bt_opt & VAR_0);


 FUNC_0(VAR_3->sc_ic.ic_macaddr, VAR_6->macaddr_21a);


 FUNC_7(VAR_3, VAR_4);
}
