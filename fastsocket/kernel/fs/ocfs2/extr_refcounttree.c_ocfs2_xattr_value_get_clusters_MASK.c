
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_xattr_value_root {int xr_list; } ;
struct ocfs2_cow_context {struct ocfs2_xattr_value_root* cow_object; struct inode* inode; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int ,int *,int *,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_cow_context *VAR_0,
       u32 VAR_1, u32 *VAR_2,
       u32 *VAR_3,
       unsigned int *VAR_4)
{
 struct inode *VAR_5 = VAR_0->inode;
 struct ocfs2_xattr_value_root *VAR_6 = VAR_0->cow_object;

 return FUNC_0(VAR_5, VAR_1, VAR_2,
     VAR_3, &VAR_6->xr_list,
     VAR_4);
}
