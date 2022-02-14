
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int * quota_rec; int slot_num; int journal; } ;


 int FUNC_0 (int ,int ,int *,int *,int *) ;

void FUNC_1(struct ocfs2_super *VAR_0)
{
 if (VAR_0->quota_rec) {
  FUNC_0(VAR_0->journal,
      VAR_0->slot_num,
      ((void*)0),
      ((void*)0),
      VAR_0->quota_rec);
  VAR_0->quota_rec = ((void*)0);
 }
}
