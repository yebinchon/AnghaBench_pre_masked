
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_orphan_scan {int os_lock; int os_orphan_scan_work; int os_state; } ;
struct ocfs2_super {struct ocfs2_orphan_scan osb_orphan_scan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ocfs2_super *VAR_2)
{
 struct ocfs2_orphan_scan *VAR_3;

 VAR_3 = &VAR_2->osb_orphan_scan;
 if (FUNC_0(&VAR_3->os_state) == VAR_0) {
  FUNC_1(&VAR_3->os_state, VAR_1);
  FUNC_3(&VAR_3->os_lock);
  FUNC_2(&VAR_3->os_orphan_scan_work);
  FUNC_4(&VAR_3->os_lock);
 }
}
