
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_ccung_softc {void* n_clk_init; void* clk_init; void* nclks; void* clks; void* ngates; void* gates; void* nresets; void* resets; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct aw_ccung_softc* FUNC_1 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct aw_ccung_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_4);

 VAR_5->resets = VAR_2;
 VAR_5->nresets = FUNC_2(VAR_2);
 VAR_5->gates = VAR_1;
 VAR_5->ngates = FUNC_2(VAR_1);
 VAR_5->clks = VAR_0;
 VAR_5->nclks = FUNC_2(VAR_0);
 VAR_5->clk_init = VAR_3;
 VAR_5->n_clk_init = FUNC_2(VAR_3);

 return (FUNC_0(VAR_4));
}
