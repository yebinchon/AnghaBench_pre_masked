
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_sb_private_info {unsigned int s_fpb; } ;
struct super_block {int dummy; } ;
typedef int __fs32 ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int *,int) ;

__attribute__((used)) static inline void FUNC_2 (struct super_block * VAR_0, unsigned VAR_1,
 __fs32 * VAR_2, int VAR_3)
{
 struct ufs_sb_private_info * VAR_4;
 unsigned VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_0)->s_uspi;

 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->s_fpb; VAR_6++) {
  if (VAR_1 & (1 << VAR_6)) {
   VAR_5++;
  }
  else if (VAR_5 > 0) {
   FUNC_1(VAR_0, &VAR_2[VAR_5], VAR_3);
   VAR_5 = 0;
  }
 }
 if (VAR_5 > 0 && VAR_5 < VAR_4->s_fpb)
  FUNC_1(VAR_0, &VAR_2[VAR_5], VAR_3);
}
