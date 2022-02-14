
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {scalar_t__ srboutstandingcount; int acb_flags; int num_resets; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->num_resets++;
 VAR_1->acb_flags |= VAR_0;
 while(VAR_1->srboutstandingcount != 0 && VAR_2 < 400) {
  FUNC_1(VAR_1);
  FUNC_0(25000);
  VAR_2++;
 }
 FUNC_2(VAR_1);
 VAR_1->acb_flags &= ~VAR_0;
}
