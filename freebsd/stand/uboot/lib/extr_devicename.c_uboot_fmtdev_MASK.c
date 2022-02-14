
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* d_dev; int d_unit; } ;
struct uboot_devdesc {TYPE_2__ dd; } ;
struct TYPE_3__ {int dv_type; char* dv_name; } ;





 char* FUNC_0 (void*) ;
 int FUNC_1 (char*,char*,char*,int ) ;
 int FUNC_2 (char*,char*) ;

char *
FUNC_3(void *VAR_0)
{
 struct uboot_devdesc *VAR_1 = (struct uboot_devdesc *)VAR_0;
 static char VAR_2[128];

 switch(VAR_1->dd.d_dev->dv_type) {
 case 128:
  FUNC_2(VAR_2, "(no device)");
  break;

 case 130:




 case 129:
  FUNC_1(VAR_2, "%s%d:", VAR_1->dd.d_dev->dv_name, VAR_1->dd.d_unit);
  break;
 }
 return(VAR_2);
}
