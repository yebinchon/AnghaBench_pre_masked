
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int alloc; } ;
struct TYPE_3__ {int num_mgms; int num_amgms; } ;
struct mthca_dev {TYPE_2__ mcg_table; TYPE_1__ limits; } ;


 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mthca_dev *VAR_0)
{
 int VAR_1;
 int VAR_2 = VAR_0->limits.num_mgms + VAR_0->limits.num_amgms;

 VAR_1 = FUNC_0(&VAR_0->mcg_table.alloc,
          VAR_2,
          VAR_2 - 1,
          VAR_0->limits.num_mgms);
 if (VAR_1)
  return VAR_1;

 FUNC_1(&VAR_0->mcg_table.mutex);

 return 0;
}
