
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; int call_lock; int version; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(ig4iic_softc_t *VAR_0)
{
 int VAR_1;

 FUNC_4(&VAR_0->call_lock);
 if (FUNC_3(VAR_0, FUNC_0(VAR_0->version)))
  FUNC_2(VAR_0->dev, "controller error during resume\n");
 FUNC_5(&VAR_0->call_lock);

 VAR_1 = FUNC_1(VAR_0->dev);

 return (VAR_1);
}
