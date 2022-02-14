
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int devname; } ;
typedef TYPE_1__ devid_nmlist_t ;
typedef int ddi_devid_t ;


 int FUNC_0 (char*,int ,char*,TYPE_1__**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,int *,char**) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_0)
{
 ddi_devid_t VAR_1;
 char *VAR_2;
 char *VAR_3;
 devid_nmlist_t *VAR_4 = ((void*)0);
 int VAR_5;

 if (FUNC_3(VAR_0, &VAR_1, &VAR_2) != 0)
  return (((void*)0));

 VAR_5 = FUNC_0("/dev", VAR_1, VAR_2, &VAR_4);

 FUNC_4(VAR_2);
 FUNC_1(VAR_1);

 if (VAR_5 != 0)
  return (((void*)0));




 VAR_3 = FUNC_5(VAR_4[0].devname);

 FUNC_2(VAR_4);

 return (VAR_3);
}
