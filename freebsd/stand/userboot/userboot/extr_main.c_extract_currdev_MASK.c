
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev ;
struct devdesc {scalar_t__ d_unit; TYPE_1__* d_dev; } ;
struct zfs_devdesc {struct devdesc dd; } ;
struct disk_devdesc {struct devdesc dd; int d_partition; int d_slice; } ;
struct TYPE_4__ {scalar_t__ (* dv_open ) (int *,struct disk_devdesc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct zfs_devdesc*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,struct disk_devdesc*) ;
 TYPE_1__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct devdesc*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_5 (struct zfs_devdesc*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct disk_devdesc VAR_13;
 struct devdesc *VAR_14;
 if (VAR_9 > 0) {
  VAR_13.dd.d_dev = &VAR_8;
  VAR_13.dd.d_unit = 0;
  VAR_13.d_slice = VAR_3;
  VAR_13.d_partition = VAR_1;




  if (VAR_13.dd.d_dev->dv_open(((void*)0), &VAR_13)) {
   VAR_13.d_slice = VAR_2;
   VAR_13.d_partition = VAR_0;
  }
  VAR_14 = &VAR_13.dd;
 } else {
  VAR_13.dd.d_dev = &VAR_7;
  VAR_13.dd.d_unit = 0;
  VAR_14 = &VAR_13.dd;
 }

 FUNC_1("currdev", VAR_4, FUNC_4(VAR_14),
     VAR_10, VAR_6);
 FUNC_1("loaddev", VAR_4, FUNC_4(VAR_14),
     VAR_5, VAR_6);
}
