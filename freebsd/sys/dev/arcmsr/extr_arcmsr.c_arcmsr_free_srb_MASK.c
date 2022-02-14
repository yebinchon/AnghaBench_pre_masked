
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CommandControlBlock {scalar_t__ srb_flags; int srb_state; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {size_t workingsrb_doneindex; int srb_lock; struct CommandControlBlock** srbworkingQ; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct CommandControlBlock *VAR_2)
{
 struct AdapterControlBlock *VAR_3;

 VAR_3 = VAR_2->acb;
 FUNC_0(&VAR_3->srb_lock);
 VAR_2->srb_state = VAR_1;
 VAR_2->srb_flags = 0;
 VAR_3->srbworkingQ[VAR_3->workingsrb_doneindex] = VAR_2;
 VAR_3->workingsrb_doneindex++;
 VAR_3->workingsrb_doneindex %= VAR_0;
 FUNC_1(&VAR_3->srb_lock);
}
