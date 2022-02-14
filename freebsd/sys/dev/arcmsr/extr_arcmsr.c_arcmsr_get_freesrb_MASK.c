
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct CommandControlBlock {int dummy; } ;
struct AdapterControlBlock {size_t workingsrb_doneindex; size_t workingsrb_startindex; int srb_lock; struct CommandControlBlock** srbworkingQ; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;

__attribute__((used)) static struct CommandControlBlock *FUNC_2(struct AdapterControlBlock *VAR_1)
{
 struct CommandControlBlock *VAR_2 = ((void*)0);
 u_int32_t VAR_3, VAR_4;

 FUNC_0(&VAR_1->srb_lock);
 VAR_4 = VAR_1->workingsrb_doneindex;
 VAR_3 = VAR_1->workingsrb_startindex;
 VAR_2 = VAR_1->srbworkingQ[VAR_3];
 VAR_3++;
 VAR_3 %= VAR_0;
 if(VAR_4 != VAR_3) {
  VAR_1->workingsrb_startindex = VAR_3;
 } else {
  VAR_2 = ((void*)0);
 }
 FUNC_1(&VAR_1->srb_lock);
 return(VAR_2);
}
