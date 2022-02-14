
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dev; int intr_handle; int intr_res; int * iicbus; int version; int call_lock; int io_lock; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ,int *,TYPE_1__*,int *) ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *,char*) ;

int
FUNC_10(ig4iic_softc_t *VAR_6)
{
 int VAR_7;

 FUNC_7(&VAR_6->io_lock, "IG4 I/O lock", ((void*)0), VAR_4);
 FUNC_9(&VAR_6->call_lock, "IG4 call lock");

 FUNC_5(VAR_6);

 VAR_7 = FUNC_6(VAR_6, FUNC_0(VAR_6->version));
 if (VAR_7)
  goto done;

 VAR_6->iicbus = FUNC_3(VAR_6->dev, "iicbus", -1);
 if (VAR_6->iicbus == ((void*)0)) {
  FUNC_4(VAR_6->dev, "iicbus driver not found\n");
  VAR_7 = VAR_0;
  goto done;
 }

 if (FUNC_8(VAR_6, VAR_1)) {
  FUNC_4(VAR_6->dev, "controller error during attach-2\n");
  VAR_7 = VAR_0;
  goto done;
 }
 if (FUNC_8(VAR_6, 0)) {
  FUNC_4(VAR_6->dev, "controller error during attach-3\n");
  VAR_7 = VAR_0;
  goto done;
 }
 VAR_7 = FUNC_2(VAR_6->dev, VAR_6->intr_res, VAR_3 | VAR_2,
          VAR_5, ((void*)0), VAR_6, &VAR_6->intr_handle);
 if (VAR_7) {
  FUNC_4(VAR_6->dev,
         "Unable to setup irq: error %d\n", VAR_7);
 }

 VAR_7 = FUNC_1(VAR_6->dev);
 if (VAR_7) {
  FUNC_4(VAR_6->dev,
         "failed to attach child: error %d\n", VAR_7);
 }

done:
 return (VAR_7);
}
