
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct inode* osb_tl_inode; struct buffer_head* osb_tl_bh; int osb_truncate_log_wq; int slot_num; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,int ,struct inode**,struct buffer_head**) ;
 int VAR_0 ;

int FUNC_5(struct ocfs2_super *VAR_1)
{
 int VAR_2;
 struct inode *VAR_3 = ((void*)0);
 struct buffer_head *VAR_4 = ((void*)0);

 FUNC_1();

 VAR_2 = FUNC_4(VAR_1,
          VAR_1->slot_num,
          &VAR_3,
          &VAR_4);
 if (VAR_2 < 0)
  FUNC_2(VAR_2);




 FUNC_0(&VAR_1->osb_truncate_log_wq,
     VAR_0);
 VAR_1->osb_tl_bh = VAR_4;
 VAR_1->osb_tl_inode = VAR_3;

 FUNC_3(VAR_2);
 return VAR_2;
}
