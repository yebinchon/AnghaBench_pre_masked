
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {scalar_t__ s_forced_ro; } ;
struct super_block {int s_dirt; } ;


 int VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_1, int *VAR_2, char *VAR_3)
{
 struct sysv_sb_info *VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 if (VAR_4->s_forced_ro)
  *VAR_2 |= VAR_0;
 if (!(*VAR_2 & VAR_0))
  VAR_1->s_dirt = 1;
 FUNC_2(VAR_1);
 return 0;
}
