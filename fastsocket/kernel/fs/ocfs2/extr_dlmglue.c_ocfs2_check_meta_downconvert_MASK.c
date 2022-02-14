
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct ocfs2_lock_res*,int) ;
 struct inode* FUNC_2 (struct ocfs2_lock_res*) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_lock_res *VAR_0,
     int VAR_1)
{
 struct inode *VAR_2 = FUNC_2(VAR_0);

 return FUNC_1(FUNC_0(VAR_2), VAR_0, VAR_1);
}
