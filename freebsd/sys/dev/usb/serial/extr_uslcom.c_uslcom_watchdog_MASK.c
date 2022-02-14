
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uslcom_softc {int sc_watchdog; int * sc_xfer; int sc_mtx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,void (*) (void*),struct uslcom_softc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct uslcom_softc *VAR_4 = VAR_3;

 FUNC_0(&VAR_4->sc_mtx, VAR_0);

 FUNC_2(VAR_4->sc_xfer[VAR_1]);

 FUNC_1(&VAR_4->sc_watchdog,
     VAR_2 / 4, &FUNC_3, VAR_4);
}
