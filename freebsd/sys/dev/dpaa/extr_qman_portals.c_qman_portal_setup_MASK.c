
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {unsigned int swPortalId; uintptr_t irq; struct qman_softc* h_App; int f_RejectedFrame; int f_DfltFrame; scalar_t__ fdLiodnOffset; int h_Qm; void* ciBaseAddress; void* ceBaseAddress; } ;
typedef TYPE_2__ t_QmPortalParam ;
typedef int * t_Handle ;
struct qman_softc {int sc_qh; } ;
struct dpaa_portals_softc {TYPE_1__* sc_dp; int * sc_rres; } ;
struct TYPE_4__ {int dp_ph; scalar_t__ dp_ires; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (uintptr_t*,int ,int) ;
 uintptr_t FUNC_6 (uintptr_t*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (uintptr_t*,uintptr_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct dpaa_portals_softc*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct dpaa_portals_softc* VAR_7 ;
 void* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

t_Handle
FUNC_16(struct qman_softc *VAR_8)
{
 struct dpaa_portals_softc *VAR_9;
 t_QmPortalParam VAR_10;
 unsigned int VAR_11;
 uintptr_t VAR_12;
 t_Handle VAR_13;


 if (VAR_7 == ((void*)0))
  return (((void*)0));

 VAR_9 = VAR_7;

 FUNC_12();
 VAR_13 = ((void*)0);
 VAR_11 = FUNC_0(VAR_3);


 while (FUNC_5((uintptr_t *)&VAR_9->sc_dp[VAR_11].dp_ph,
     0, -1) == 0) {
  VAR_12 = FUNC_6((uintptr_t *)&VAR_9->sc_dp[VAR_11].dp_ph);


  if (VAR_12 != 0 && VAR_12 != -1) {
   FUNC_13();
   return ((t_Handle)VAR_12);
  }


  FUNC_14(VAR_4);
  FUNC_10(VAR_2, ((void*)0));
  FUNC_15(VAR_4);
 }


 FUNC_9(VAR_9);


 VAR_10.ceBaseAddress = FUNC_11(VAR_9->sc_rres[0]);
 VAR_10.ciBaseAddress = FUNC_11(VAR_9->sc_rres[1]);
 VAR_10.h_Qm = VAR_8->sc_qh;
 VAR_10.swPortalId = VAR_11;
 VAR_10.irq = (uintptr_t)VAR_9->sc_dp[VAR_11].dp_ires;
 VAR_10.fdLiodnOffset = 0;
 VAR_10.f_DfltFrame = VAR_5;
 VAR_10.f_RejectedFrame = VAR_6;
 VAR_10.h_App = VAR_8;

 VAR_13 = FUNC_2(&VAR_10);
 if (VAR_13 == ((void*)0))
  goto err;

 if (FUNC_4(VAR_13) != VAR_0)
  goto err;

 if (FUNC_1(VAR_13, VAR_1) != VAR_0)
  goto err;

 FUNC_8((uintptr_t *)&VAR_9->sc_dp[VAR_11].dp_ph,
     (uintptr_t)VAR_13);
 FUNC_13();

 return (VAR_13);

err:
 if (VAR_13 != ((void*)0))
  FUNC_3(VAR_13);

 FUNC_7((uint32_t *)&VAR_9->sc_dp[VAR_11].dp_ph, 0);
 FUNC_13();

 return (((void*)0));
}
