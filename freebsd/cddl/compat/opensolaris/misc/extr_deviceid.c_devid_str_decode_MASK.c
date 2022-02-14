
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int devid; } ;
typedef TYPE_1__ ddi_devid_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(char *VAR_2, ddi_devid_t *VAR_3, char **VAR_4)
{

 if (FUNC_1(VAR_3->devid, VAR_2, sizeof(VAR_3->devid)) >=
     sizeof(VAR_3->devid)) {
  return (VAR_0);
 }
 *VAR_4 = FUNC_0("");
 if (*VAR_4 == ((void*)0))
  return (VAR_1);
 return (0);
}
