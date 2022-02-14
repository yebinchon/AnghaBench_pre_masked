
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa_portals_softc {TYPE_1__* sc_dp; int * sc_rres; } ;
struct TYPE_2__ {int dp_regs_mapped; int dp_ci_size; int dp_ci_pa; int dp_ce_size; int dp_ce_pa; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int ) ;

void
FUNC_5(struct dpaa_portals_softc *VAR_3)
{
 unsigned int VAR_4;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3->sc_dp[VAR_4].dp_regs_mapped)
  goto out;

 FUNC_4(FUNC_1(VAR_3->sc_rres[0]),
     VAR_3->sc_dp[VAR_4].dp_ce_pa, VAR_3->sc_dp[VAR_4].dp_ce_size,
     VAR_1);
 FUNC_4(FUNC_1(VAR_3->sc_rres[1]),
     VAR_3->sc_dp[VAR_4].dp_ci_pa, VAR_3->sc_dp[VAR_4].dp_ci_size,
     VAR_0);

 VAR_3->sc_dp[VAR_4].dp_regs_mapped = 1;

out:
 FUNC_3();
}
