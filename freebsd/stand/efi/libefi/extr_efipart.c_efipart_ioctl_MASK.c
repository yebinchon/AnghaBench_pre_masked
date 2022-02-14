
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_long ;
typedef int u_int ;
struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_8__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_2__ dd; } ;
struct devdesc {int dummy; } ;
struct TYPE_11__ {TYPE_4__* pd_blkio; } ;
typedef TYPE_5__ pdinfo_t ;
struct TYPE_10__ {TYPE_3__* Media; } ;
struct TYPE_9__ {int BlockSize; int LastBlock; } ;
struct TYPE_7__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct disk_devdesc*,int ,void*) ;
 TYPE_5__* FUNC_1 (struct devdesc*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_3, u_long VAR_4, void *VAR_5)
{
 struct disk_devdesc *VAR_6;
 pdinfo_t *VAR_7;
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
  *(u_int *)VAR_5 = VAR_7->pd_blkio->Media->BlockSize;
  break;
 case 129:
  *(uint64_t *)VAR_5 = VAR_7->pd_blkio->Media->BlockSize *
      (VAR_7->pd_blkio->Media->LastBlock + 1);
  break;
 default:
  return (VAR_2);
 }

 return (0);
}
