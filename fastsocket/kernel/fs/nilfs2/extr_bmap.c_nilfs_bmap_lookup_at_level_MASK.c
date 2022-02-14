
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_bmap {int b_sem; TYPE_1__* b_ops; } ;
typedef int sector_t ;
typedef int __u64 ;
struct TYPE_2__ {int (* bop_lookup ) (struct nilfs_bmap*,int ,int,int *) ;} ;


 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct nilfs_bmap*,int ,int,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct nilfs_bmap *VAR_0, __u64 VAR_1, int VAR_2,
          __u64 *VAR_3)
{
 sector_t VAR_4;
 int VAR_5;

 FUNC_1(&VAR_0->b_sem);
 VAR_5 = VAR_0->b_ops->bop_lookup(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto out;
 if (FUNC_0(VAR_0)) {
  VAR_5 = FUNC_3(FUNC_2(VAR_0), *VAR_3,
       &VAR_4);
  if (!VAR_5)
   *VAR_3 = VAR_4;
 }

 out:
 FUNC_5(&VAR_0->b_sem);
 return VAR_5;
}
