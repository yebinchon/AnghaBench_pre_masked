
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* d_dev; int d_unit; } ;
struct i386_devdesc {TYPE_2__ dd; } ;
struct TYPE_3__ {int dv_type; char* dv_name; } ;







 char* FUNC_0 (void*) ;
 int FUNC_1 (char*,char*,char*,int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (void*) ;

char *
FUNC_4(void *VAR_0)
{
    struct i386_devdesc *VAR_1 = (struct i386_devdesc *)VAR_0;
    static char VAR_2[128];

    switch(VAR_1->dd.d_dev->dv_type) {
    case 129:
 FUNC_2(VAR_2, "(no device)");
 break;

    case 132:
    case 130:
 FUNC_1(VAR_2, "%s%d:", VAR_1->dd.d_dev->dv_name, VAR_1->dd.d_unit);
 break;

    case 131:
 return (FUNC_0(VAR_0));

    case 128:
 return(FUNC_3(VAR_0));
    }
    return(VAR_2);
}
