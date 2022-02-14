
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct inode* osb_tl_inode; } ;
struct inode {int i_mutex; } ;


 int FUNC_0 (struct ocfs2_super*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ocfs2_super *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = VAR_0->osb_tl_inode;

 FUNC_1(&VAR_2->i_mutex);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_2->i_mutex);

 return VAR_1;
}
