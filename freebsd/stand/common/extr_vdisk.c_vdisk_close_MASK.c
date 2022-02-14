
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vdisk_open; } ;
typedef TYPE_3__ vdisk_info_t ;
struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_6__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_2__ dd; } ;
struct devdesc {int dummy; } ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct disk_devdesc*) ;
 TYPE_3__* FUNC_1 (struct devdesc*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_2)
{
 struct disk_devdesc *VAR_3;
 vdisk_info_t *VAR_4;

 VAR_3 = (struct disk_devdesc *)(VAR_2->f_devdata);
 if (VAR_3 == ((void*)0))
  return (VAR_1);
 VAR_4 = FUNC_1((struct devdesc *)VAR_3);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_4->vdisk_open--;
 if (VAR_3->dd.d_dev->dv_type == VAR_0)
  return (FUNC_0(VAR_3));
 return (0);
}
