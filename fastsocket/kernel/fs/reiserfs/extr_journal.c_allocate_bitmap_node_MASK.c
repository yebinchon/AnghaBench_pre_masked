
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct reiserfs_bitmap_node {int list; int id; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct reiserfs_bitmap_node*) ;
 struct reiserfs_bitmap_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static struct reiserfs_bitmap_node *FUNC_4(struct super_block
        *VAR_1)
{
 struct reiserfs_bitmap_node *VAR_2;
 static int VAR_3;

 VAR_2 = FUNC_2(sizeof(struct reiserfs_bitmap_node), VAR_0);
 if (!VAR_2) {
  return ((void*)0);
 }
 VAR_2->data = FUNC_3(VAR_1->s_blocksize, VAR_0);
 if (!VAR_2->data) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 VAR_2->id = VAR_3++;
 FUNC_0(&VAR_2->list);
 return VAR_2;
}
