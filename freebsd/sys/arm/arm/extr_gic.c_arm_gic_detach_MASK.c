
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_gic_softc {int gic_res; int * gic_irqs; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct arm_gic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(device_t VAR_2)
{
 struct arm_gic_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->gic_irqs != ((void*)0))
  FUNC_2(VAR_3->gic_irqs, VAR_0);

 FUNC_0(VAR_2, VAR_1, VAR_3->gic_res);

 return (0);
}
