
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_truncate_log_wq; scalar_t__ osb_tl_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct ocfs2_super *VAR_2,
           int VAR_3)
{
 if (VAR_2->osb_tl_inode) {


  if (VAR_3)
   FUNC_0(&VAR_2->osb_truncate_log_wq);

  FUNC_1(VAR_1, &VAR_2->osb_truncate_log_wq,
       VAR_0);
 }
}
