
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_6__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_2__ dd; } ;
struct devdesc {int dummy; } ;
struct TYPE_7__ {scalar_t__ pd_open; int * pd_bcache; int * pd_blkio; } ;
typedef TYPE_3__ pdinfo_t ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct disk_devdesc*) ;
 TYPE_3__* FUNC_2 (struct devdesc*) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_2)
{
 struct disk_devdesc *VAR_3;
 pdinfo_t *VAR_4;

 VAR_3 = (struct disk_devdesc *)(VAR_2->f_devdata);
 if (VAR_3 == ((void*)0))
  return (VAR_1);

 VAR_4 = FUNC_2((struct devdesc *)VAR_3);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_4->pd_open--;
 if (VAR_4->pd_open == 0) {
  VAR_4->pd_blkio = ((void*)0);
  FUNC_0(VAR_4->pd_bcache);
  VAR_4->pd_bcache = ((void*)0);
 }
 if (VAR_3->dd.d_dev->dv_type == VAR_0)
  return (FUNC_1(VAR_3));
 return (0);
}
