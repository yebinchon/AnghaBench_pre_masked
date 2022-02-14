
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int slot_num; int osb_lock; struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (struct ocfs2_slot_info*,int) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_slot_info*,int) ;
 int FUNC_4 (struct ocfs2_slot_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ocfs2_super *VAR_1)
{
 int VAR_2, VAR_3;
 struct ocfs2_slot_info *VAR_4 = VAR_1->slot_info;

 if (!VAR_4)
  return;

 FUNC_5(&VAR_1->osb_lock);
 FUNC_4(VAR_4);

 VAR_3 = VAR_1->slot_num;
 FUNC_2(VAR_4, VAR_1->slot_num);
 VAR_1->slot_num = VAR_0;
 FUNC_6(&VAR_1->osb_lock);

 VAR_2 = FUNC_3(VAR_1, VAR_4, VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(VAR_2);
  goto bail;
 }

bail:
 FUNC_1(VAR_1);
}
