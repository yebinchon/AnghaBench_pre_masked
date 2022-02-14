
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (int *,int ,int ,int ,struct inode*,int ,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;

__attribute__((used)) static inline int FUNC_1(handle_t *VAR_0,
      struct dentry *VAR_1,
      struct inode *VAR_2, u64 VAR_3,
      struct buffer_head *VAR_4,
      struct ocfs2_dir_lookup_result *VAR_5)
{
 return FUNC_0(VAR_0, VAR_1->d_parent->d_inode,
     VAR_1->d_name.name, VAR_1->d_name.len,
     VAR_2, VAR_3, VAR_4, VAR_5);
}
