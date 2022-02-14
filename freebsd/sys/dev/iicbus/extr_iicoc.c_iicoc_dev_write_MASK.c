
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicoc_softc {int reg_shift; int mem_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 struct iicoc_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct iicoc_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_3->mem_res, VAR_1<<VAR_3->reg_shift, VAR_2);
}
