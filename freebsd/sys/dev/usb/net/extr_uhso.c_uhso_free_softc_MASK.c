
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhso_softc {int sc_mtx; int sc_ucom; int sc_tty; int sc_super_ucom; } ;


 int VAR_0 ;
 int FUNC_0 (struct uhso_softc*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct uhso_softc *VAR_1)
{
 if (FUNC_3(&VAR_1->sc_super_ucom)) {
  FUNC_1(VAR_1->sc_tty, VAR_0);
  FUNC_1(VAR_1->sc_ucom, VAR_0);
  FUNC_2(&VAR_1->sc_mtx);
  FUNC_0(VAR_1);
 }
}
