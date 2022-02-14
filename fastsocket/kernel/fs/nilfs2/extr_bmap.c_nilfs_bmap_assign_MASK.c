
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nilfs_binfo {int dummy; } nilfs_binfo ;
struct nilfs_bmap {int b_sem; TYPE_1__* b_ops; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int (* bop_assign ) (struct nilfs_bmap*,struct buffer_head**,unsigned long,union nilfs_binfo*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_bmap*,struct buffer_head**,unsigned long,union nilfs_binfo*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nilfs_bmap *VAR_0,
        struct buffer_head **VAR_1,
        unsigned long VAR_2,
        union nilfs_binfo *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->b_sem);
 VAR_4 = VAR_0->b_ops->bop_assign(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->b_sem);
 return VAR_4;
}
