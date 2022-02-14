
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_inline_data {int id_count; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_next_free_rec; int l_count; } ;
struct TYPE_3__ {struct ocfs2_extent_list i_list; struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {TYPE_1__ id2; int i_size; } ;
struct inode {int i_sb; } ;
struct TYPE_4__ {unsigned int s_xattr_inline_size; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2,
     struct ocfs2_dinode *VAR_3)
{
 struct ocfs2_inode_info *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_2->i_sb)->s_xattr_inline_size;
 int VAR_6;

 if (VAR_5 < VAR_1)
  return 0;

 if (VAR_4->ip_dyn_features & VAR_0) {
  struct ocfs2_inline_data *VAR_7 = &VAR_3->id2.i_data;
  VAR_6 = FUNC_2(VAR_7->id_count) - FUNC_3(VAR_3->i_size);
 } else if (FUNC_5(VAR_2)) {
  VAR_6 = FUNC_4(VAR_2->i_sb) -
   FUNC_3(VAR_3->i_size);
 } else {
  struct ocfs2_extent_list *VAR_8 = &VAR_3->id2.i_list;
  VAR_6 = (FUNC_2(VAR_8->l_count) -
   FUNC_2(VAR_8->l_next_free_rec)) *
   sizeof(struct ocfs2_extent_rec);
 }
 if (VAR_6 >= VAR_5)
  return 1;

 return 0;
}
