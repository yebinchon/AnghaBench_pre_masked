
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtwn_softc {int ntxchains; } ;
struct r92ce_iq_cal_reg_vals {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*,int **,int **,int **,int **) ;
 int FUNC_1 (struct rtwn_softc*,int,int **,int **,struct r92ce_iq_cal_reg_vals*) ;
 int FUNC_2 (struct rtwn_softc*,int *,int *,int) ;

void
FUNC_3(struct rtwn_softc *VAR_1)
{
 struct r92ce_iq_cal_reg_vals VAR_2;
 uint16_t VAR_3[VAR_0][2][2], VAR_4[VAR_0][2][2];
 int VAR_5, VAR_6;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(VAR_1, VAR_5, VAR_3[VAR_5], VAR_4[VAR_5], &VAR_2);

  if (VAR_5 == 0)
   continue;


  VAR_6 = FUNC_0(VAR_1, VAR_3[VAR_5 - 1],
      VAR_4[VAR_5 - 1], VAR_3[VAR_5], VAR_4[VAR_5]);
  if (VAR_6)
   break;
 }

 if (VAR_6) {
  FUNC_2(VAR_1, VAR_3[VAR_5][0], VAR_4[VAR_5][0], 0);
  if (VAR_1->ntxchains > 1)
   FUNC_2(VAR_1, VAR_3[VAR_5][1], VAR_4[VAR_5][1], 1);
 }
}
