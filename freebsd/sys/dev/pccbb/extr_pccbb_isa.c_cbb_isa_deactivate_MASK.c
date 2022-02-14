
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int * base_res; int * irq_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct cbb_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2)
{
 struct cbb_softc *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->irq_res)
  FUNC_0(VAR_2, VAR_1, 0, VAR_3->irq_res);
 VAR_3->irq_res = ((void*)0);
 if (VAR_3->base_res)
  FUNC_0(VAR_2, VAR_0, 0, VAR_3->base_res);
 VAR_3->base_res = ((void*)0);
}
