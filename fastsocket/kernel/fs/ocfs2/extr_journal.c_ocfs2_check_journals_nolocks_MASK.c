
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {unsigned int max_slots; int * slot_recovery_generations; } ;
struct TYPE_3__ {int ij_flags; } ;
struct TYPE_4__ {TYPE_1__ journal1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int FUNC_4 (struct ocfs2_super*,unsigned int,struct buffer_head**,int *) ;

int FUNC_5(struct ocfs2_super *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;
 struct buffer_head *VAR_5 = ((void*)0);
 struct ocfs2_dinode *VAR_6;
 int VAR_7 = 0;

 for(VAR_4 = 0; VAR_4 < VAR_2->max_slots; VAR_4++) {
  VAR_3 = FUNC_4(VAR_2, VAR_4, &VAR_5, ((void*)0));
  if (VAR_3) {
   FUNC_2(VAR_3);
   goto out;
  }

  VAR_6 = (struct ocfs2_dinode *) VAR_5->b_data;

  VAR_2->slot_recovery_generations[VAR_4] =
     FUNC_3(VAR_6);

  if (FUNC_1(VAR_6->id1.journal1.ij_flags) &
      VAR_1)
   VAR_7 = 1;

  FUNC_0(VAR_5);
  VAR_5 = ((void*)0);
 }

out:
 if (VAR_7)
  VAR_3 = -VAR_0;
 return VAR_3;
}
