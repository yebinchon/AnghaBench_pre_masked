
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uchcom_softc {int sc_mtx; int sc_super_ucom; } ;


 int FUNC_0 (struct uchcom_softc*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct uchcom_softc *VAR_0)
{
 if (FUNC_2(&VAR_0->sc_super_ucom)) {
  FUNC_1(&VAR_0->sc_mtx);
  FUNC_0(VAR_0);
 }
}
