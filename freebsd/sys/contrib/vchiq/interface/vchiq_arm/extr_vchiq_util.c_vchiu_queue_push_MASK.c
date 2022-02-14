
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write; int read; int size; int push; int ** storage; int pop; int initialized; } ;
typedef TYPE_1__ VCHIU_QUEUE_T ;
typedef int VCHIQ_HEADER_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void FUNC_5(VCHIU_QUEUE_T *VAR_1, VCHIQ_HEADER_T *VAR_2)
{
 if (!VAR_1->initialized)
  return;

 while (VAR_1->write == VAR_1->read + VAR_1->size) {
  if (FUNC_0(&VAR_1->pop) != 0) {
   FUNC_1(VAR_0);
  }
 }





 FUNC_2();

 VAR_1->storage[VAR_1->write & (VAR_1->size - 1)] = VAR_2;





 FUNC_3();

 VAR_1->write++;

 FUNC_4(&VAR_1->push);
}
