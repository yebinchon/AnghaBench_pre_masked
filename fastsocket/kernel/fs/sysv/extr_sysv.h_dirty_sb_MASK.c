
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {scalar_t__ s_bh1; scalar_t__ s_bh2; } ;
struct super_block {int s_dirt; } ;


 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct super_block *VAR_0)
{
 struct sysv_sb_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->s_bh1);
 if (VAR_1->s_bh1 != VAR_1->s_bh2)
  FUNC_1(VAR_1->s_bh2);
 VAR_0->s_dirt = 1;
}
