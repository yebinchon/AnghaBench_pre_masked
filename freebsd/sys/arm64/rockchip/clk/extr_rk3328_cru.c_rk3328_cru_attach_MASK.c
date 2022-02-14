
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_cru_softc {int reset_offset; int reset_num; void* nclks; void* clks; void* ngates; void* gates; int dev; } ;
typedef int device_t ;


 struct rk_cru_softc* FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct rk_cru_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->dev = VAR_2;

 VAR_3->gates = VAR_1;
 VAR_3->ngates = FUNC_1(VAR_1);

 VAR_3->clks = VAR_0;
 VAR_3->nclks = FUNC_1(VAR_0);

 VAR_3->reset_offset = 0x300;
 VAR_3->reset_num = 184;

 return (FUNC_2(VAR_2));
}
