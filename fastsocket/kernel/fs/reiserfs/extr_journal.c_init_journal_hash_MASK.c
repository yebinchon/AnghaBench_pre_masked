
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal_cnode {int dummy; } ;
struct reiserfs_journal {int j_hash_table; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_1)
{
 struct reiserfs_journal *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2->j_hash_table, 0,
        VAR_0 * sizeof(struct reiserfs_journal_cnode *));
}
