
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_direct {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nilfs_direct*,int ) ;

__attribute__((used)) static int FUNC_1(const struct nilfs_bmap *VAR_3,
          __u64 VAR_4, int VAR_5, __u64 *VAR_6)
{
 struct nilfs_direct *VAR_7;
 __u64 VAR_8;

 VAR_7 = (struct nilfs_direct *)VAR_3;
 if ((VAR_4 > VAR_2) ||
     (VAR_5 != 1) ||
     ((VAR_8 = FUNC_0(VAR_7, VAR_4)) ==
      VAR_1))
  return -VAR_0;

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;
 return 0;
}
