
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {int dummy; } ;


 int FUNC_0 (struct ocfs2_slot_info*) ;

void FUNC_1(struct ocfs2_super *VAR_0)
{
 struct ocfs2_slot_info *VAR_1 = VAR_0->slot_info;

 VAR_0->slot_info = ((void*)0);
 FUNC_0(VAR_1);
}
