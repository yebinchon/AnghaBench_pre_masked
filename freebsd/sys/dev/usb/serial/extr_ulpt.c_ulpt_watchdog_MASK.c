
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpt_softc {scalar_t__ sc_fflags; int sc_watchdog; int * sc_xfer; int sc_mtx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct ulpt_softc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct ulpt_softc *VAR_4 = VAR_3;

 FUNC_0(&VAR_4->sc_mtx, VAR_0);





 if (VAR_4->sc_fflags == 0)
  FUNC_2(VAR_4->sc_xfer[VAR_1]);

 FUNC_1(&VAR_4->sc_watchdog,
     VAR_2, &FUNC_3, VAR_4);
}
