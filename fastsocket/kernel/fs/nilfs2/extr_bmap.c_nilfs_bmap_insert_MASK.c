
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int b_sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_bmap*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct nilfs_bmap *VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->b_sem);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->b_sem);
 return VAR_3;
}
