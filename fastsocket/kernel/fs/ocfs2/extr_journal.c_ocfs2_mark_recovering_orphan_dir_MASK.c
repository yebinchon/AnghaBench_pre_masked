
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; int osb_wipe_event; scalar_t__* osb_orphan_wipes; int osb_recovering_orphan_dirs; } ;


 int FUNC_0 (struct ocfs2_super*,int *,int) ;
 int FUNC_1 (struct ocfs2_super*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_super *VAR_0,
          int VAR_1)
{
 FUNC_2(&VAR_0->osb_lock);


 FUNC_0(VAR_0, &VAR_0->osb_recovering_orphan_dirs, VAR_1);
 while (VAR_0->osb_orphan_wipes[VAR_1]) {



  FUNC_3(&VAR_0->osb_lock);
  FUNC_4(VAR_0->osb_wipe_event,
      FUNC_1(VAR_0, VAR_1));
  FUNC_2(&VAR_0->osb_lock);
 }
 FUNC_3(&VAR_0->osb_lock);
}
