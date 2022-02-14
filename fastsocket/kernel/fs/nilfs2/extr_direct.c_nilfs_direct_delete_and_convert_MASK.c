
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_direct {int dummy; } ;
struct nilfs_bmap {TYPE_1__* b_ops; } ;
typedef int __u64 ;
typedef int __le64 ;
struct TYPE_2__ {int (* bop_delete ) (struct nilfs_bmap*,int) ;int (* bop_clear ) (struct nilfs_bmap*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct nilfs_direct*) ;
 int FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*,int) ;
 int FUNC_4 (struct nilfs_bmap*) ;

int FUNC_5(struct nilfs_bmap *VAR_2,
        __u64 VAR_3, __u64 *VAR_4, __u64 *VAR_5, int VAR_6)
{
 struct nilfs_direct *VAR_7;
 __le64 *VAR_8;
 int VAR_9, VAR_10, VAR_11;




 VAR_9 = VAR_2->b_ops->bop_delete(VAR_2, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_2->b_ops->bop_clear != ((void*)0))
  VAR_2->b_ops->bop_clear(VAR_2);


 VAR_7 = (struct nilfs_direct *)VAR_2;
 VAR_8 = FUNC_1(VAR_7);
 for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_1; VAR_10++) {
  if ((VAR_11 < VAR_6) && (VAR_10 == VAR_4[VAR_11])) {
   VAR_8[VAR_10] = (VAR_10 != VAR_3) ?
    FUNC_0(VAR_5[VAR_11]) :
    VAR_0;
   VAR_11++;
  } else
   VAR_8[VAR_10] = VAR_0;
 }

 FUNC_2(VAR_2);
 return 0;
}
