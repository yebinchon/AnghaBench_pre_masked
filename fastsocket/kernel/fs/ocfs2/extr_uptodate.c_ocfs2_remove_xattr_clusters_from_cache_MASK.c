
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
typedef int sector_t ;


 unsigned int FUNC_0 (struct super_block*,int) ;
 struct super_block* FUNC_1 (struct ocfs2_caching_info*) ;
 int FUNC_2 (struct ocfs2_caching_info*,int ) ;

void FUNC_3(struct ocfs2_caching_info *VAR_0,
         sector_t VAR_1,
         u32 VAR_2)
{
 struct super_block *VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4, VAR_5 = FUNC_0(VAR_3, 1) * VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_1++)
  FUNC_2(VAR_0, VAR_1);
}
