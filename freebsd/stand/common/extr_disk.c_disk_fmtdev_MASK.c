
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* d_dev; int d_unit; } ;
struct disk_devdesc {scalar_t__ d_slice; scalar_t__ d_partition; TYPE_2__ dd; } ;
struct TYPE_3__ {char* dv_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__,...) ;
 int FUNC_1 (char*,char*) ;

char*
FUNC_2(struct disk_devdesc *VAR_3)
{
 static char VAR_4[128];
 char *VAR_5;

 VAR_5 = VAR_4 + FUNC_0(VAR_4, "%s%d", VAR_3->dd.d_dev->dv_name, VAR_3->dd.d_unit);
 if (VAR_3->d_slice > VAR_2) {
 }
 if (VAR_3->d_partition > VAR_1)
  VAR_5 += FUNC_0(VAR_5, "%c", VAR_3->d_partition + 'a');
 FUNC_1(VAR_5, ":");
 return (VAR_4);
}
