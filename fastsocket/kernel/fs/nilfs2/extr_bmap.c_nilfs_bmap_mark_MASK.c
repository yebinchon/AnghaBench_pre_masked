
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {int b_sem; TYPE_1__* b_ops; } ;
typedef int __u64 ;
struct TYPE_2__ {int (* bop_mark ) (struct nilfs_bmap*,int ,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_bmap*,int ,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nilfs_bmap *VAR_0, __u64 VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0->b_ops->bop_mark == ((void*)0))
  return 0;

 FUNC_0(&VAR_0->b_sem);
 VAR_3 = VAR_0->b_ops->bop_mark(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->b_sem);
 return VAR_3;
}
