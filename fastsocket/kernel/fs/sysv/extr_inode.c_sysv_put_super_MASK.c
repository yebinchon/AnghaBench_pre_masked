
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {scalar_t__ s_bh1; scalar_t__ s_bh2; } ;
struct super_block {int s_flags; scalar_t__ s_dirt; } ;


 int VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sysv_sb_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct super_block*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_1)
{
 struct sysv_sb_info *VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->s_dirt)
  FUNC_4(VAR_1);

 if (!(VAR_1->s_flags & VAR_0)) {

  FUNC_3(VAR_2->s_bh1);
  if (VAR_2->s_bh1 != VAR_2->s_bh2)
   FUNC_3(VAR_2->s_bh2);
 }

 FUNC_1(VAR_2->s_bh1);
 if (VAR_2->s_bh1 != VAR_2->s_bh2)
  FUNC_1(VAR_2->s_bh2);

 FUNC_2(VAR_2);
}
