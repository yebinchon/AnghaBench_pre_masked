
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct versatile_sic_softc {int mtx; int * irq_res; int * mem_res; scalar_t__ intrh; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 struct versatile_sic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct versatile_sic_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->intrh)
  FUNC_1(VAR_2, VAR_3->irq_res, VAR_3->intrh);

 if (VAR_3->mem_res == ((void*)0))
  FUNC_0(VAR_2, VAR_1,
   FUNC_4(VAR_3->mem_res), VAR_3->mem_res);

 if (VAR_3->irq_res == ((void*)0))
  FUNC_0(VAR_2, VAR_0,
   FUNC_4(VAR_3->irq_res), VAR_3->irq_res);

 FUNC_3(&VAR_3->mtx);

 return (0);

}
