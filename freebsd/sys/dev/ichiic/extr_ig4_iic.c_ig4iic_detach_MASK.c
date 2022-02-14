
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int call_lock; int io_lock; int * intr_handle; int * iicbus; int intr_res; int dev; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(ig4iic_softc_t *VAR_1)
{
 int VAR_2;

 if (FUNC_3(VAR_1->dev)) {
  VAR_2 = FUNC_0(VAR_1->dev);
  if (VAR_2)
   return (VAR_2);
 }
 if (VAR_1->iicbus)
  FUNC_2(VAR_1->dev, VAR_1->iicbus);
 if (VAR_1->intr_handle)
  FUNC_1(VAR_1->dev, VAR_1->intr_res, VAR_1->intr_handle);

 FUNC_8(&VAR_1->call_lock);

 VAR_1->iicbus = ((void*)0);
 VAR_1->intr_handle = ((void*)0);
 FUNC_5(VAR_1, VAR_0, 0);
 FUNC_6(VAR_1, 0);

 FUNC_9(&VAR_1->call_lock);

 FUNC_4(&VAR_1->io_lock);
 FUNC_7(&VAR_1->call_lock);

 return (0);
}
