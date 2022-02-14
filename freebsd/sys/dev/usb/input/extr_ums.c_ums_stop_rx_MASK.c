
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ums_softc {int sc_callout; int * sc_xfer; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ums_softc *VAR_1)
{
 FUNC_1(VAR_1->sc_xfer[VAR_0]);
 FUNC_0(&VAR_1->sc_callout);
}
