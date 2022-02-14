
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reserved_pds; int num_pds; } ;
struct TYPE_3__ {int alloc; } ;
struct mthca_dev {TYPE_2__ limits; TYPE_1__ pd_table; } ;


 int FUNC_0 (int *,int ,int,int ) ;

int FUNC_1(struct mthca_dev *VAR_0)
{
 return FUNC_0(&VAR_0->pd_table.alloc,
    VAR_0->limits.num_pds,
    (1 << 24) - 1,
    VAR_0->limits.reserved_pds);
}
