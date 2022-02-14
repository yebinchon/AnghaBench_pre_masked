
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_softc {int * irq_res; int * irq_h; } ;
typedef int device_t ;


 int FUNC_0 (struct as3722_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 struct as3722_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct as3722_softc *VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2->irq_h != ((void*)0))
  FUNC_3(VAR_1, VAR_2->irq_res, VAR_2->irq_h);
 if (VAR_2->irq_res != ((void*)0))
  FUNC_2(VAR_1, VAR_0, 0, VAR_2->irq_res);
 FUNC_0(VAR_2);

 return (FUNC_1(VAR_1));
}
