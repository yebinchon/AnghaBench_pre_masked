
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_wipe_event; int osb_lock; int * osb_orphan_wipes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_super *VAR_0,
      int VAR_1)
{
 FUNC_0(&VAR_0->osb_lock);
 VAR_0->osb_orphan_wipes[VAR_1]--;
 FUNC_1(&VAR_0->osb_lock);

 FUNC_2(&VAR_0->osb_wipe_event);
}
