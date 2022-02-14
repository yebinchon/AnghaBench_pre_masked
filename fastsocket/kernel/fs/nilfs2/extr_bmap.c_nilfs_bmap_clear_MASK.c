
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {int b_sem; TYPE_1__* b_ops; } ;
struct TYPE_2__ {int (* bop_clear ) (struct nilfs_bmap*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_bmap*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nilfs_bmap *VAR_0)
{
 FUNC_0(&VAR_0->b_sem);
 if (VAR_0->b_ops->bop_clear != ((void*)0))
  VAR_0->b_ops->bop_clear(VAR_0);
 FUNC_2(&VAR_0->b_sem);
}
