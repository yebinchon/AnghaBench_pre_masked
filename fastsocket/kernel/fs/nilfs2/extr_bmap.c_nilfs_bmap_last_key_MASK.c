
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {int b_sem; TYPE_1__* b_ops; } ;
typedef unsigned long __u64 ;
struct TYPE_2__ {int (* bop_last_key ) (struct nilfs_bmap*,unsigned long*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_bmap*,unsigned long*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nilfs_bmap *VAR_0, unsigned long *VAR_1)
{
 __u64 VAR_2;
 int VAR_3;

 FUNC_0(&VAR_0->b_sem);
 VAR_3 = VAR_0->b_ops->bop_last_key(VAR_0, &VAR_2);
 if (!VAR_3)
  *VAR_1 = VAR_2;
 FUNC_2(&VAR_0->b_sem);
 return VAR_3;
}
