
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_slot_info* slot_info; int osb_lock; } ;
struct ocfs2_slot_info {int dummy; } ;


 int FUNC_0 (struct ocfs2_slot_info*,int) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_slot_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ocfs2_super *VAR_0, int VAR_1)
{
 struct ocfs2_slot_info *VAR_2 = VAR_0->slot_info;

 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_2(&VAR_0->osb_lock);
 FUNC_0(VAR_2, VAR_1);
 FUNC_3(&VAR_0->osb_lock);

 return FUNC_1(VAR_0, VAR_0->slot_info, VAR_1);
}
