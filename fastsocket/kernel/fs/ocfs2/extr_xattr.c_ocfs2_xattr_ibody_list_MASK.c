
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_header {int dummy; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_dinode {int i_xattr_inline_size; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_blocksize; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct ocfs2_xattr_header*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1,
      struct ocfs2_dinode *VAR_2,
      char *VAR_3,
      size_t VAR_4)
{
 struct ocfs2_xattr_header *VAR_5 = ((void*)0);
 struct ocfs2_inode_info *VAR_6 = FUNC_0(VAR_1);
 int VAR_7 = 0;

 if (!(VAR_6->ip_dyn_features & VAR_0))
  return VAR_7;

 VAR_5 = (struct ocfs2_xattr_header *)
   ((void *)VAR_2 + VAR_1->i_sb->s_blocksize -
   FUNC_1(VAR_2->i_xattr_inline_size));

 VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_3, VAR_4);

 return VAR_7;
}
