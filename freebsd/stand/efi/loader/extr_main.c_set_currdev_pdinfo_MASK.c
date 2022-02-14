
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int d_unit; TYPE_5__* d_dev; } ;
struct disk_devdesc {int d_partition; int d_slice; TYPE_1__ dd; } ;
struct devdesc {int dummy; } ;
struct TYPE_8__ {int pd_unit; TYPE_5__* pd_devsw; TYPE_2__* pd_parent; } ;
typedef TYPE_3__ pdinfo_t ;
struct TYPE_9__ {scalar_t__ dv_type; } ;
struct TYPE_7__ {int pd_unit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devdesc*) ;
 int FUNC_1 (TYPE_5__*,int ) ;

__attribute__((used)) static void
FUNC_2(pdinfo_t *VAR_4)
{






 if (VAR_4->pd_devsw->dv_type == VAR_0) {
  struct disk_devdesc VAR_5;

  VAR_5.dd.d_dev = VAR_4->pd_devsw;
  if (VAR_4->pd_parent == ((void*)0)) {
   VAR_5.dd.d_unit = VAR_4->pd_unit;
   VAR_5.d_slice = VAR_3;
   VAR_5.d_partition = VAR_2;
  } else {
   VAR_5.dd.d_unit = VAR_4->pd_parent->pd_unit;
   VAR_5.d_slice = VAR_4->pd_unit;
   VAR_5.d_partition = VAR_1;
  }
  FUNC_0((struct devdesc *)&VAR_5);
 } else {
  FUNC_1(VAR_4->pd_devsw, VAR_4->pd_unit);
 }
}
