
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d_unit; TYPE_2__* d_dev; } ;
struct disk_devdesc {int d_partition; int d_slice; TYPE_1__ dd; } ;
typedef int line ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {char* dv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ FUNC_0 (struct disk_devdesc*) ;
 int FUNC_1 (struct disk_devdesc*) ;
 int FUNC_2 (struct disk_devdesc*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*,int,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct disk_devdesc*) ;
 char* FUNC_8 (int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_9(int VAR_4)
{
 struct disk_devdesc VAR_5;
 static char VAR_6[80];
 int VAR_7, VAR_8 = 0;

 if (VAR_2 == 0)
  return (VAR_8);

 FUNC_4("%s devices:", VAR_3.dv_name);
 if ((VAR_8 = FUNC_3("\n")) != 0)
  return (VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5.dd.d_dev = &VAR_3;
  VAR_5.dd.d_unit = VAR_7;
  VAR_5.d_slice = VAR_1;
  VAR_5.d_partition = VAR_0;
  FUNC_5(VAR_6, sizeof(VAR_6), "\tdisk%d (%s)\n", VAR_7,
      FUNC_8(FUNC_0(&VAR_5).type));
  if ((VAR_8 = FUNC_3(VAR_6)) != 0)
   break;
  if (FUNC_7(&VAR_5) == 0) {
   FUNC_6(VAR_6, "\tdisk%d", VAR_7);
   VAR_8 = FUNC_2(&VAR_5, VAR_6, VAR_4);
   FUNC_1(&VAR_5);
   if (VAR_8 != 0)
    break;
  }
 }
 return (VAR_8);
}
