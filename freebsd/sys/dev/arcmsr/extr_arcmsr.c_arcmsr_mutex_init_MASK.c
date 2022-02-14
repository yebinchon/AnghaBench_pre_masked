
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int qbuffer_lock; int postDone_lock; int srb_lock; int isr_lock; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_0)
{
 FUNC_0(&VAR_0->isr_lock, "arcmsr isr lock");
 FUNC_0(&VAR_0->srb_lock, "arcmsr srb lock");
 FUNC_0(&VAR_0->postDone_lock, "arcmsr postQ lock");
 FUNC_0(&VAR_0->qbuffer_lock, "arcmsr RW buffer lock");
}
