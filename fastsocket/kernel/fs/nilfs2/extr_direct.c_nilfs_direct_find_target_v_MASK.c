
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_direct {int d_bmap; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static __u64
FUNC_2(const struct nilfs_direct *VAR_1, __u64 VAR_2)
{
 __u64 VAR_3;

 VAR_3 = FUNC_1(&VAR_1->d_bmap, VAR_2);
 if (VAR_3 != VAR_0)

  return VAR_3;
 else

  return FUNC_0(&VAR_1->d_bmap);
}
