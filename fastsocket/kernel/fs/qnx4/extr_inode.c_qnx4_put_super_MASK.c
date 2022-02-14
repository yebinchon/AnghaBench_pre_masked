
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct qnx4_sb_info {struct qnx4_sb_info* BitMap; } ;


 int FUNC_0 (struct qnx4_sb_info*) ;
 struct qnx4_sb_info* FUNC_1 (struct super_block*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0)
{
 struct qnx4_sb_info *VAR_1 = FUNC_1(VAR_0);
 FUNC_0( VAR_1->BitMap );
 FUNC_0( VAR_1 );
 VAR_0->s_fs_info = ((void*)0);
 return;
}
