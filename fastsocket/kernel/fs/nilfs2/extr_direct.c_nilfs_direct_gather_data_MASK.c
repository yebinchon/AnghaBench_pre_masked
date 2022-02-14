
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_direct {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nilfs_direct*,int) ;

__attribute__((used)) static int FUNC_1(struct nilfs_bmap *VAR_2,
        __u64 *VAR_3, __u64 *VAR_4, int VAR_5)
{
 struct nilfs_direct *VAR_6;
 __u64 VAR_7;
 __u64 VAR_8;
 int VAR_9;

 VAR_6 = (struct nilfs_direct *)VAR_2;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  if (VAR_8 != VAR_0) {
   VAR_3[VAR_9] = VAR_7;
   VAR_4[VAR_9] = VAR_8;
   VAR_9++;
  }
 }
 return VAR_9;
}
