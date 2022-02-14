
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vdisk_size; int vdisk_sectorsz; } ;
typedef TYPE_3__ vdisk_info_t ;
typedef int uint64_t ;
typedef int u_long ;
typedef int u_int ;
struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_5__ {TYPE_2__* d_dev; } ;
struct disk_devdesc {TYPE_1__ dd; } ;
struct devdesc {int dummy; } ;
struct TYPE_6__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct disk_devdesc*,int ,void*) ;
 TYPE_3__* FUNC_1 (struct devdesc*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_3, u_long VAR_4, void *VAR_5)
{
 struct disk_devdesc *VAR_6;
 vdisk_info_t *VAR_7;
 int VAR_8;

 VAR_6 = (struct disk_devdesc *)(VAR_3->f_devdata);
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_7 = FUNC_1((struct devdesc *)VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 if (VAR_6->dd.d_dev->dv_type == VAR_0) {
  VAR_8 = FUNC_0(VAR_6, VAR_4, VAR_5);
  if (VAR_8 != VAR_2)
   return (VAR_8);
 }

 switch (VAR_4) {
 case 128:
  *(u_int *)VAR_5 = VAR_7->vdisk_sectorsz;
  break;
 case 129:
  *(uint64_t *)VAR_5 = VAR_7->vdisk_size;
  break;
 default:
  return (VAR_2);
 }
 return (0);
}
