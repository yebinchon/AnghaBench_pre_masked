
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpaa_portals_softc {int * sc_rres; TYPE_1__* sc_dp; } ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__** portal_ce_pa; void** portal_ci_va; void** portal_ce_va; int ** portal_intr; int ** portal_ci_size; int ** portal_ce_size; int ** portal_ci_pa; } ;
struct TYPE_3__ {scalar_t__ dp_ce_pa; int dp_intr_num; int dp_ci_size; int dp_ce_size; int dp_ci_pa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int ) ;
 struct dpaa_portals_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (int,int ,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;

void
FUNC_8(device_t VAR_6)
{
 char *VAR_7;
 struct dpaa_portals_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1, VAR_2 |
     VAR_3);

 VAR_11 = FUNC_5("bman-portals");

 FUNC_7(VAR_7, FUNC_0(VAR_6), VAR_11);

 if (FUNC_6(VAR_7, "bman-portals", VAR_11) && FUNC_6(VAR_7,
     "qman-portals", VAR_11))
  goto end;

 if (FUNC_6(VAR_7, "bman-portals", VAR_11) == 0)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_4;

 VAR_8 = FUNC_1(VAR_6);

 for (VAR_9 = 0; VAR_8->sc_dp[VAR_9].dp_ce_pa != 0; VAR_9++) {
  VAR_5.portal_ce_pa[VAR_10][VAR_9] = VAR_8->sc_dp[VAR_9].dp_ce_pa;
  VAR_5.portal_ci_pa[VAR_10][VAR_9] = VAR_8->sc_dp[VAR_9].dp_ci_pa;
  VAR_5.portal_ce_size[VAR_10][VAR_9] = VAR_8->sc_dp[VAR_9].dp_ce_size;
  VAR_5.portal_ci_size[VAR_10][VAR_9] = VAR_8->sc_dp[VAR_9].dp_ci_size;
  VAR_5.portal_intr[VAR_10][VAR_9] = VAR_8->sc_dp[VAR_9].dp_intr_num;
 }

 VAR_5.portal_ce_va[VAR_10] = FUNC_4(VAR_8->sc_rres[0]);
 VAR_5.portal_ci_va[VAR_10] = FUNC_4(VAR_8->sc_rres[1]);
end:
 FUNC_2(VAR_7, VAR_1);
}
