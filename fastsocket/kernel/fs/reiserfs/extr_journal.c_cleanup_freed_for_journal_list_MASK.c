
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_list_bitmap {int * journal_list; } ;
struct reiserfs_journal_list {struct reiserfs_list_bitmap* j_list_bitmap; } ;


 int FUNC_0 (struct super_block*,struct reiserfs_list_bitmap*) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_0,
        struct reiserfs_journal_list *VAR_1)
{

 struct reiserfs_list_bitmap *VAR_2 = VAR_1->j_list_bitmap;
 if (VAR_2) {
  FUNC_0(VAR_0, VAR_2);
 }
 VAR_1->j_list_bitmap->journal_list = ((void*)0);
 VAR_1->j_list_bitmap = ((void*)0);
}
