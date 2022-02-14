
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ccung_softc {void* nclks; void* clks; void* ngates; void* gates; void* nresets; void* resets; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct aw_ccung_softc* FUNC_1 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct aw_ccung_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 VAR_4->resets = VAR_2;
 VAR_4->nresets = FUNC_2(VAR_2);
 VAR_4->gates = VAR_1;
 VAR_4->ngates = FUNC_2(VAR_1);
 VAR_4->clks = VAR_0;
 VAR_4->nclks = FUNC_2(VAR_0);

 return (FUNC_0(VAR_3));
}
