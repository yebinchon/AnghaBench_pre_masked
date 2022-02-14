
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ dirty; int * local_alloc_copy; int slot_num; struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_super*) ;
 int FUNC_1 (struct ocfs2_journal*,int ,int *,int *,int *) ;
 int FUNC_2 (struct ocfs2_super*) ;
 int FUNC_3 (struct ocfs2_super*,int ) ;
 int FUNC_4 (struct ocfs2_super*,int ) ;

void FUNC_5(struct ocfs2_super *VAR_1)
{
 struct ocfs2_journal *VAR_2 = VAR_1->journal;



 FUNC_1(VAR_2, VAR_1->slot_num,
     VAR_1->local_alloc_copy, ((void*)0), ((void*)0));
 FUNC_4(VAR_1, 0);

 VAR_1->local_alloc_copy = ((void*)0);
 VAR_1->dirty = 0;


 FUNC_3(VAR_1, VAR_0);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
