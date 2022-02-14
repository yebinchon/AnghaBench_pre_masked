
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int ips_command_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int **,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(ips_softc_t *VAR_2)
{
 ips_command_t *VAR_3;
 int VAR_4 = 0;

 if (FUNC_2(VAR_2, &VAR_3, VAR_1) > 0){
  FUNC_1(VAR_2->dev, "unable to get adapter configuration\n");
  return VAR_0;
 }
 FUNC_3(VAR_3);
 if (FUNC_0(VAR_3)){
  VAR_4 = VAR_0;
 }
 return VAR_4;
}
