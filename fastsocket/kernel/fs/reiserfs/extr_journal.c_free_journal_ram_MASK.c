
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {scalar_t__ j_header_bh; int j_list_bitmap; struct reiserfs_journal* j_cnode_free_orig; int j_num_lists; int j_current_jl; } ;


 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*,struct reiserfs_journal*) ;
 int FUNC_6 (struct reiserfs_journal*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 struct reiserfs_journal *VAR_1 = FUNC_0(VAR_0);
 FUNC_4(VAR_1->j_current_jl);
 VAR_1->j_num_lists--;

 FUNC_6(VAR_1->j_cnode_free_orig);
 FUNC_3(VAR_0, VAR_1->j_list_bitmap);
 FUNC_2(VAR_0);
 if (VAR_1->j_header_bh) {
  FUNC_1(VAR_1->j_header_bh);
 }



 FUNC_5(VAR_0, VAR_1);
 FUNC_6(VAR_1);
}
