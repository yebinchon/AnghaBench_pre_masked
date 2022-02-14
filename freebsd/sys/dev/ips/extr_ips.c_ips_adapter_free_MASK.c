
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; scalar_t__ device_file; scalar_t__ command_dmatag; scalar_t__ sg_dmatag; int timer; int dev; } ;
typedef TYPE_1__ ips_softc_t ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(ips_softc_t *VAR_2)
{
 int VAR_3 = 0;
 if(VAR_2->state & VAR_1)
  return VAR_0;
 if((VAR_3 = FUNC_6(VAR_2)))
  return VAR_3;
 if(FUNC_5(VAR_2)){
  FUNC_4(VAR_2->dev,
       "trying to exit when command queue is not empty!\n");
  return VAR_0;
 }
 FUNC_0(1, VAR_2->dev, "free\n");
 FUNC_2(&VAR_2->timer);

 if(VAR_2->sg_dmatag)
  FUNC_1(VAR_2->sg_dmatag);
 if(VAR_2->command_dmatag)
  FUNC_1(VAR_2->command_dmatag);
 if(VAR_2->device_file)
         FUNC_3(VAR_2->device_file);
        return 0;
}
