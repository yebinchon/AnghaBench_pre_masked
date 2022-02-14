
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int lock; int * irq_handler; int irq_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int *) ;
 struct pvscsi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pvscsi_softc*) ;
 int FUNC_6 (struct pvscsi_softc*) ;
 int FUNC_7 (struct pvscsi_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
 struct pvscsi_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_7(VAR_1);
 FUNC_5(VAR_1);

 if (VAR_1->irq_handler != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1->irq_res, VAR_1->irq_handler);
 }

 FUNC_3(&VAR_1->lock);
 FUNC_6(VAR_1);
 FUNC_4(&VAR_1->lock);

 FUNC_2(&VAR_1->lock);

 return (0);
}
