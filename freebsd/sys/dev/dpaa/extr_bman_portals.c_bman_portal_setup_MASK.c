
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * t_Handle ;
struct TYPE_5__ {unsigned int swPortalId; uintptr_t irq; int h_Bm; void* ciBaseAddress; void* ceBaseAddress; } ;
typedef TYPE_2__ t_BmPortalParam ;
struct dpaa_portals_softc {TYPE_1__* sc_dp; int * sc_rres; } ;
struct bman_softc {int sc_bh; } ;
struct TYPE_4__ {int dp_ph; scalar_t__ dp_ires; } ;


 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (uintptr_t*,int ,int) ;
 uintptr_t FUNC_5 (uintptr_t*) ;
 int FUNC_6 (uintptr_t*,uintptr_t) ;
 struct dpaa_portals_softc* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct dpaa_portals_softc*) ;
 int FUNC_8 (int ,int *) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

t_Handle
FUNC_14(struct bman_softc *VAR_5)
{
 struct dpaa_portals_softc *VAR_6;
 t_BmPortalParam VAR_7;
 t_Handle VAR_8;
 unsigned int VAR_9;
 uintptr_t VAR_10;


 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_6 = VAR_2;

 FUNC_10();
 VAR_8 = ((void*)0);
 VAR_9 = FUNC_3(VAR_3);


 while (FUNC_4((uintptr_t *)&VAR_6->sc_dp[VAR_9].dp_ph,
     0, -1) == 0) {
  VAR_10 = FUNC_5((uintptr_t *)&VAR_6->sc_dp[VAR_9].dp_ph);


  if (VAR_10 != 0 && VAR_10 != -1) {
   FUNC_11();
   return ((t_Handle)VAR_10);
  }


  FUNC_12(VAR_4);
  FUNC_8(VAR_1, ((void*)0));
  FUNC_13(VAR_4);
 }


 FUNC_7(VAR_6);


 VAR_7.ceBaseAddress = FUNC_9(VAR_6->sc_rres[0]);
 VAR_7.ciBaseAddress = FUNC_9(VAR_6->sc_rres[1]);
 VAR_7.h_Bm = VAR_5->sc_bh;
 VAR_7.swPortalId = VAR_9;
 VAR_7.irq = (uintptr_t)VAR_6->sc_dp[VAR_9].dp_ires;

 VAR_8 = FUNC_0(&VAR_7);
 if (VAR_8 == ((void*)0))
  goto err;

 if (FUNC_2(VAR_8) != VAR_0)
  goto err;

 FUNC_6((uintptr_t *)&VAR_6->sc_dp[VAR_9].dp_ph, (uintptr_t)VAR_8);

 FUNC_11();

 return (VAR_8);

err:
 if (VAR_8 != ((void*)0))
  FUNC_1(VAR_8);

 FUNC_6((uintptr_t *)&VAR_6->sc_dp[VAR_9].dp_ph, 0);
 FUNC_11();

 return (((void*)0));
}
