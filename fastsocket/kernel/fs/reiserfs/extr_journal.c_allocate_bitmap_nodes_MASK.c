
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {int j_free_bitmap_nodes; int j_bitmap_nodes; } ;
struct reiserfs_bitmap_node {int list; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 struct reiserfs_bitmap_node* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1)
{
 int VAR_2;
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_1);
 struct reiserfs_bitmap_node *VAR_4 = ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4) {
   FUNC_2(&VAR_4->list, &VAR_3->j_bitmap_nodes);
   VAR_3->j_free_bitmap_nodes++;
  } else {
   break;
  }
 }
}
