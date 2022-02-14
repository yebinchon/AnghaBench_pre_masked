
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, u64 *VAR_2)
{
 int VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);
 struct ocfs2_dinode *VAR_5;

 VAR_3 = FUNC_5(VAR_1, &VAR_4);
 if (VAR_3) {
  FUNC_4(VAR_3);
  goto out;
 }

 FUNC_0(!(FUNC_1(VAR_1)->ip_dyn_features & VAR_0));

 VAR_5 = (struct ocfs2_dinode *)VAR_4->b_data;
 *VAR_2 = FUNC_3(VAR_5->i_refcount_loc);
 FUNC_2(VAR_4);
out:
 return VAR_3;
}
