
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {int b_sem; TYPE_1__* b_ops; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int (* bop_propagate ) (struct nilfs_bmap*,struct buffer_head*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_bmap*,struct buffer_head*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nilfs_bmap *VAR_0, struct buffer_head *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->b_sem);
 VAR_2 = VAR_0->b_ops->bop_propagate(VAR_0, VAR_1);
 FUNC_2(&VAR_0->b_sem);
 return VAR_2;
}
