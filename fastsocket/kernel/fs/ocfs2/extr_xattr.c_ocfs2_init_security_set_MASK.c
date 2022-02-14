
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_security_xattr_info {int value_len; int value; int name; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct inode*,struct buffer_head*,int ,int ,int ,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;

int FUNC_1(handle_t *VAR_1,
       struct inode *VAR_2,
       struct buffer_head *VAR_3,
       struct ocfs2_security_xattr_info *VAR_4,
       struct ocfs2_alloc_context *VAR_5,
       struct ocfs2_alloc_context *VAR_6)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_0,
         VAR_4->name, VAR_4->value, VAR_4->value_len, 0,
         VAR_5, VAR_6);
}
