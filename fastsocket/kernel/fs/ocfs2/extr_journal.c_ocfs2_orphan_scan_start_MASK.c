
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_orphan_scan {int os_orphan_scan_work; int os_state; int os_scantime; } ;
struct ocfs2_super {struct ocfs2_orphan_scan osb_orphan_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*) ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct ocfs2_super *VAR_3)
{
 struct ocfs2_orphan_scan *VAR_4;

 VAR_4 = &VAR_3->osb_orphan_scan;
 VAR_4->os_scantime = VAR_0;
 if (FUNC_1(VAR_3) || FUNC_2(VAR_3))
  FUNC_0(&VAR_4->os_state, VAR_2);
 else {
  FUNC_0(&VAR_4->os_state, VAR_1);
  FUNC_4(&VAR_4->os_orphan_scan_work,
          FUNC_3());
 }
}
