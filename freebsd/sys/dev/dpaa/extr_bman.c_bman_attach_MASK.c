
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ t_Error ;
struct TYPE_6__ {int minorRev; int majorRev; } ;
typedef TYPE_1__ t_BmRevisionInfo ;
struct TYPE_7__ {int totalNumOfBuffers; uintptr_t errIrq; int partNumOfPools; scalar_t__ partBpidBase; struct bman_softc* h_App; int f_Exception; int baseAddress; int guestId; } ;
typedef TYPE_2__ t_BmParam ;
struct bman_softc {int * sc_bh; int * sc_ires; int * sc_rres; scalar_t__ sc_irid; int sc_dev; scalar_t__ sc_rrid; } ;
typedef int device_t ;
typedef int bp ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 struct bman_softc* VAR_11 ;
 int * FUNC_6 (int ,int ,scalar_t__*,int) ;
 int * FUNC_7 (int ,int ,scalar_t__*,int ,int) ;
 struct bman_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (int *) ;

int
FUNC_12(device_t VAR_12)
{
 struct bman_softc *VAR_13;
 t_BmRevisionInfo VAR_14;
 t_Error VAR_15;
 t_BmParam VAR_16;

 VAR_13 = FUNC_8(VAR_12);
 VAR_13->sc_dev = VAR_12;
 VAR_11 = VAR_13;


 if (FUNC_4() != VAR_4)
  return (VAR_3);


 VAR_13->sc_rrid = 0;
 VAR_13->sc_rres = FUNC_7(VAR_12, VAR_9,
     &VAR_13->sc_rrid, VAR_0, VAR_6);
 if (VAR_13->sc_rres == ((void*)0))
  return (VAR_3);

 VAR_13->sc_irid = 0;
 VAR_13->sc_ires = FUNC_6(VAR_13->sc_dev, VAR_8,
     &VAR_13->sc_irid, VAR_6 | VAR_7);
 if (VAR_13->sc_ires == ((void*)0))
  goto err;


 FUNC_10(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.guestId = VAR_5;
 VAR_16.baseAddress = FUNC_11(VAR_13->sc_rres);
 VAR_16.totalNumOfBuffers = VAR_1;
 VAR_16.f_Exception = VAR_10;
 VAR_16.h_App = VAR_13;
 VAR_16.errIrq = (uintptr_t)VAR_13->sc_ires;
 VAR_16.partBpidBase = 0;
 VAR_16.partNumOfPools = VAR_2;

 VAR_13->sc_bh = FUNC_0(&VAR_16);
 if (VAR_13->sc_bh == ((void*)0))
  goto err;


 VAR_15 = FUNC_1(VAR_13->sc_bh, (VAR_1 / 8) / 20);
 if (VAR_15 != VAR_4)
  goto err;

 VAR_15 = FUNC_3(VAR_13->sc_bh);
 if (VAR_15 != VAR_4)
  goto err;

 VAR_15 = FUNC_2(VAR_13->sc_bh, &VAR_14);
 if (VAR_15 != VAR_4)
  goto err;

 FUNC_9(VAR_12, "Hardware version: %d.%d.\n",
     VAR_14.majorRev, VAR_14.minorRev);

 return (0);

err:
 FUNC_5(VAR_12);
 return (VAR_3);
}
