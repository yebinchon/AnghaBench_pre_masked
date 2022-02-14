
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_dev; } ;
struct r12a_fw_cmd_msrrpt {int macid; scalar_t__ macid_end; int msrb0; } ;
typedef int status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtwn_softc*,int ,struct r12a_fw_cmd_msrrpt*,int) ;

void
FUNC_2(struct rtwn_softc *VAR_4, int VAR_5)
{
 struct r12a_fw_cmd_msrrpt VAR_6;
 int VAR_7;

 if (VAR_5 & VAR_3)
  VAR_6.msrb0 = VAR_1;
 else
  VAR_6.msrb0 = VAR_2;

 VAR_6.macid = (VAR_5 & ~VAR_3);
 VAR_6.macid_end = 0;

 VAR_7 = FUNC_1(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6));
 if (VAR_7 != 0)
  FUNC_0(VAR_4->sc_dev, "cannot change media status!\n");
}
