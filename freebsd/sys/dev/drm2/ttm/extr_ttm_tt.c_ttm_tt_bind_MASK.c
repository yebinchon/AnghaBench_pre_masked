
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; TYPE_3__* func; TYPE_2__* bdev; } ;
struct ttm_mem_reg {int dummy; } ;
struct TYPE_6__ {int (* bind ) (struct ttm_tt*,struct ttm_mem_reg*) ;} ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* ttm_tt_populate ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_tt*) ;
 int FUNC_1 (struct ttm_tt*,struct ttm_mem_reg*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ttm_tt *VAR_2, struct ttm_mem_reg *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->state == VAR_1)
  return 0;

 VAR_4 = VAR_2->bdev->driver->ttm_tt_populate(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_2->func->bind(VAR_2, VAR_3);
 if (FUNC_2(VAR_4 != 0))
  return VAR_4;

 VAR_2->state = VAR_1;

 return 0;
}
