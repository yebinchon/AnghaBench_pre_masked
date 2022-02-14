
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int callout; scalar_t__ watchdog; int kbdc; int unit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct psm_softc*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct psm_softc*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct psm_softc *VAR_5;
 int VAR_6;

 VAR_5 = (struct psm_softc *)VAR_4;
 VAR_6 = FUNC_4();
 if (VAR_5->watchdog && FUNC_2(VAR_5->kbdc, VAR_2)) {
  FUNC_0(6, (VAR_1, "psm%d: lost interrupt?\n", VAR_5->unit));
  FUNC_3(VAR_5);
  FUNC_2(VAR_5->kbdc, VAR_0);
 }
 VAR_5->watchdog = VAR_2;
 FUNC_5(VAR_6);
 FUNC_1(&VAR_5->callout, VAR_3, FUNC_6, VAR_5);
}
