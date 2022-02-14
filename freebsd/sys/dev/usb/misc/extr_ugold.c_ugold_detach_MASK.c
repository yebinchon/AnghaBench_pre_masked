
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ugold_softc {int sc_mtx; int sc_xfer; int sc_udev; int * sc_readout_msg; int sc_callout; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ugold_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct ugold_softc *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->sc_callout);

 FUNC_3(VAR_2->sc_udev);
 FUNC_4(VAR_2->sc_udev,
     &VAR_2->sc_readout_msg[0], &VAR_2->sc_readout_msg[1]);
 FUNC_5(VAR_2->sc_udev);

 FUNC_6(VAR_2->sc_xfer, VAR_0);

 FUNC_2(&VAR_2->sc_mtx);

 return (0);
}
