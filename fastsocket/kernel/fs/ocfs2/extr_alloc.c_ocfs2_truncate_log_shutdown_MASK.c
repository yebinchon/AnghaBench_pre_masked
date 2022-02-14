
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct inode* osb_tl_inode; int osb_tl_bh; int osb_truncate_log_wq; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ocfs2_super*) ;
 int VAR_0 ;

void FUNC_8(struct ocfs2_super *VAR_1)
{
 int VAR_2;
 struct inode *VAR_3 = VAR_1->osb_tl_inode;

 FUNC_4();

 if (VAR_3) {
  FUNC_1(&VAR_1->osb_truncate_log_wq);
  FUNC_2(VAR_0);

  VAR_2 = FUNC_7(VAR_1);
  if (VAR_2 < 0)
   FUNC_5(VAR_2);

  FUNC_0(VAR_1->osb_tl_bh);
  FUNC_3(VAR_1->osb_tl_inode);
 }

 FUNC_6();
}
