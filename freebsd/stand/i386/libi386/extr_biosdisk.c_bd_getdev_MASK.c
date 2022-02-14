
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i386_devdesc {int dummy; } ;
struct TYPE_7__ {TYPE_1__* d_dev; int d_unit; } ;
struct disk_devdesc {int d_slice; int d_partition; TYPE_4__ dd; } ;
struct TYPE_6__ {int bd_sectors; int bd_sectorsize; scalar_t__ bd_type; } ;
typedef TYPE_2__ bdinfo_t ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct i386_devdesc*) ;
 int FUNC_4 (struct disk_devdesc*) ;
 scalar_t__ FUNC_5 (struct disk_devdesc*,int,int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char**,int ) ;

int
FUNC_8(struct i386_devdesc *VAR_7)
{
 struct disk_devdesc *VAR_8;
 bdinfo_t *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;


 VAR_17 = 0;
 VAR_18 = 0;

 VAR_8 = (struct disk_devdesc *)VAR_7;
 VAR_9 = FUNC_2(&VAR_8->dd);
 if (VAR_9 == ((void*)0))
  return (-1);

 VAR_10 = FUNC_3(VAR_7);
 FUNC_0("unit %d BIOS device %d", VAR_8->dd.d_unit, VAR_10);
 if (VAR_10 == -1)
  return (-1);

 if (VAR_8->dd.d_dev->dv_type == VAR_2) {
  if (FUNC_5(VAR_8, VAR_9->bd_sectors * VAR_9->bd_sectorsize,
      VAR_9->bd_sectorsize) != 0)
   return (-1);
  else
   FUNC_4(VAR_8);
  VAR_17 = VAR_8->d_slice + 1;
  VAR_18 = VAR_8->d_partition;
 }

 if (VAR_10 < 0x80) {

  if (VAR_9->bd_type == VAR_3) {

   VAR_11 = VAR_6;
  } else {

   VAR_11 = VAR_4;
  }
 } else {

  VAR_11 = VAR_5;
 }

 VAR_16 = VAR_10 & 0x7f;

 if (VAR_8->dd.d_dev->dv_type == VAR_1) {
  VAR_11 = VAR_0;
  VAR_16 = 0;
 }


 if ((VAR_13 = FUNC_6("root_disk_unit")) != ((void*)0)) {
  VAR_15 = FUNC_7(VAR_13, &VAR_14, 0);

  if ((VAR_14 != VAR_13) && (*VAR_14 == 0))
   VAR_16 = VAR_15;
 }

 VAR_12 = FUNC_1(VAR_11, VAR_17, VAR_16, VAR_18);
 FUNC_0("dev is 0x%x\n", VAR_12);
 return (VAR_12);
}
