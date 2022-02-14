
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
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int **,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(ips_softc_t *VAR_1)
{
 ips_command_t *VAR_2;

 FUNC_1(VAR_1->dev, "syncing config\n");
 if (FUNC_2(VAR_1, &VAR_2, VAR_0)){
  FUNC_1(VAR_1->dev, "ERROR: unable to get a command! can't sync cache!\n");
  return 1;
 }
 FUNC_3(VAR_2);
 if(FUNC_0(VAR_2)){
  FUNC_1(VAR_1->dev, "ERROR: cache sync command failed!\n");
  return 1;
 }

 FUNC_1(VAR_1->dev, "clearing error table\n");
 if(FUNC_2(VAR_1, &VAR_2, VAR_0)){
  FUNC_1(VAR_1->dev, "ERROR: unable to get a command! can't sync cache!\n");
  return 1;
 }
 FUNC_4(VAR_2);
 if(FUNC_0(VAR_2)){
  FUNC_1(VAR_1->dev, "ERROR: etable command failed!\n");
  return 1;
 }

 return 0;
}
