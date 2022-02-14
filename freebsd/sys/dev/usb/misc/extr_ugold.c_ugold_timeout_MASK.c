
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ugold_softc {int sc_callout; int sc_udev; int * sc_readout_msg; } ;


 int FUNC_0 (int *,int,void (*) (void*),struct ugold_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ugold_softc *VAR_2 = VAR_1;

 FUNC_1(VAR_2->sc_udev);
 (void)FUNC_2(VAR_2->sc_udev,
     &VAR_2->sc_readout_msg[0], &VAR_2->sc_readout_msg[1]);
 FUNC_3(VAR_2->sc_udev);

 FUNC_0(&VAR_2->sc_callout, 6 * VAR_0, &FUNC_4, VAR_2);
}
