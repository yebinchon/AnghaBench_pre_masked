
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
struct TYPE_6__ {int sectorsize; int mediasize; } ;
struct TYPE_5__ {char* dv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct disk_devdesc*) ;
 scalar_t__ FUNC_1 (struct disk_devdesc*,int ,int ) ;
 int FUNC_2 (struct disk_devdesc*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(int VAR_5)
{
 struct disk_devdesc VAR_6;
 char VAR_7[80];
 int VAR_8, VAR_9 = 0;

 if (VAR_4 == 0)
  return (0);

 FUNC_4("%s devices:", VAR_3.dv_name);
 if ((VAR_9 = FUNC_3("\n")) != 0)
  return (VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_5(VAR_7, sizeof(VAR_7),
      "    disk%d:   Guest drive image\n", VAR_8);
  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9 != 0)
   break;
  VAR_6.dd.d_dev = &VAR_3;
  VAR_6.dd.d_unit = VAR_8;
  VAR_6.d_slice = VAR_1;
  VAR_6.d_partition = VAR_0;
  if (FUNC_1(&VAR_6, VAR_2[VAR_8].mediasize,
      VAR_2[VAR_8].sectorsize) == 0) {
   FUNC_5(VAR_7, sizeof(VAR_7), "    disk%d", VAR_8);
   VAR_9 = FUNC_2(&VAR_6, VAR_7, VAR_5);
   FUNC_0(&VAR_6);
   if (VAR_9 != 0)
    break;
  }
 }
 return (VAR_9);
}
