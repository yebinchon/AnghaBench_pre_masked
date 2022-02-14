
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_sim {int dummy; } ;
struct AdapterControlBlock {int isr_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 scalar_t__ FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cam_sim *VAR_0)
{
 struct AdapterControlBlock *VAR_1;
 int VAR_2;

 VAR_1 = (struct AdapterControlBlock *)FUNC_3(VAR_0);
 VAR_2 = FUNC_4(&VAR_1->isr_lock);
 if( VAR_2 == 0 )
  FUNC_0(&VAR_1->isr_lock);
 FUNC_2(VAR_1);
 if( VAR_2 == 0 )
  FUNC_1(&VAR_1->isr_lock);
}
