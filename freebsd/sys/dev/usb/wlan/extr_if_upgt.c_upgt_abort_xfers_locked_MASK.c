
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {int * sc_xfer; } ;


 int FUNC_0 (struct upgt_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct upgt_softc *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->sc_xfer[VAR_2]);
}
