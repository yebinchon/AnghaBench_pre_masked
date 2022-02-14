
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct reiserfs_journal {scalar_t__ j_free_bitmap_nodes; int j_bitmap_nodes; int j_used_bitmap_nodes; } ;
struct reiserfs_bitmap_node {int list; struct reiserfs_bitmap_node* data; } ;


 scalar_t__ VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct reiserfs_bitmap_node*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static inline void FUNC_3(struct super_block *VAR_1,
        struct reiserfs_bitmap_node *VAR_2)
{
 struct reiserfs_journal *VAR_3 = FUNC_0(VAR_1);
 VAR_3->j_used_bitmap_nodes--;
 if (VAR_3->j_free_bitmap_nodes > VAR_0) {
  FUNC_1(VAR_2->data);
  FUNC_1(VAR_2);
 } else {
  FUNC_2(&VAR_2->list, &VAR_3->j_bitmap_nodes);
  VAR_3->j_free_bitmap_nodes++;
 }
}
