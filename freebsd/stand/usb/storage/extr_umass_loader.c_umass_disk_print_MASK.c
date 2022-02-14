
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk_devdesc {int d_partition; int d_slice; scalar_t__ d_unit; TYPE_1__* d_dev; } ;
typedef int dev ;
struct TYPE_2__ {char* dv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct disk_devdesc*) ;
 scalar_t__ FUNC_1 (struct disk_devdesc*,char*,int) ;
 int FUNC_2 (struct disk_devdesc*,int ,int) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_5 (struct disk_devdesc*) ;

__attribute__((used)) static int
FUNC_6(int VAR_4)
{
 struct disk_devdesc VAR_5;

 FUNC_4("%s devices:", VAR_3.dv_name);
 if (FUNC_3("\n") != 0)
  return (1);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_2 = FUNC_3("    umass0   UMASS device\n");
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_5.d_dev = &VAR_3;
 VAR_5.d_unit = 0;
 VAR_5.d_slice = VAR_1;
 VAR_5.d_partition = VAR_0;

 if (FUNC_5(&VAR_5) == 0) {
  VAR_2 = FUNC_1(&VAR_5, "    umass0", VAR_4);
  FUNC_0(&VAR_5);
 }
 return (VAR_2);
}
