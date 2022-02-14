
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int alloc; } ;
struct TYPE_3__ {scalar_t__ reserved_uars; scalar_t__ num_uars; } ;
struct mthca_dev {TYPE_2__ uar_table; TYPE_1__ limits; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct mthca_dev*) ;

int FUNC_3(struct mthca_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->uar_table.alloc,
          VAR_0->limits.num_uars,
          VAR_0->limits.num_uars - 1,
          VAR_0->limits.reserved_uars + 1);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_0->uar_table.alloc);

 return VAR_1;
}
