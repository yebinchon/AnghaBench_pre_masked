
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ufs_sb_private_info {int s_fmask; int s_fshift; } ;
struct ufs_buffer_head {int fragment; int count; int ** bh; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 struct ufs_buffer_head* FUNC_0 (struct ufs_sb_private_info*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct super_block*,int) ;

struct ufs_buffer_head * FUNC_3 (struct ufs_sb_private_info * VAR_1,
 struct super_block *VAR_2, u64 VAR_3, u64 VAR_4)
{
 unsigned VAR_5, VAR_6;
 u64 VAR_7 = 0;
 if (VAR_4 & ~VAR_1->s_fmask)
  return ((void*)0);
 VAR_7 = VAR_4 >> VAR_1->s_fshift;
 if (VAR_7 <= 0 || VAR_7 > VAR_0)
  return ((void*)0);
 FUNC_0(VAR_1)->fragment = VAR_3;
 FUNC_0(VAR_1)->count = VAR_7;
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  if (!(FUNC_0(VAR_1)->bh[VAR_5] = FUNC_2(VAR_2, VAR_3 + VAR_5)))
   goto failed;
 for (; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(VAR_1)->bh[VAR_5] = ((void*)0);
 return FUNC_0(VAR_1);
failed:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_1 (FUNC_0(VAR_1)->bh[VAR_6]);
 return ((void*)0);
}
