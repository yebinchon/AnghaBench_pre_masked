
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write; int read; int size; int pop; int ** storage; int push; } ;
typedef TYPE_1__ VCHIU_QUEUE_T ;
typedef int VCHIQ_HEADER_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

VCHIQ_HEADER_T *FUNC_5(VCHIU_QUEUE_T *VAR_1)
{
 VCHIQ_HEADER_T *VAR_2;

 while (VAR_1->write == VAR_1->read) {
  if (FUNC_0(&VAR_1->push) != 0) {
   FUNC_1(VAR_0);
  }
 }





 FUNC_3();

 VAR_2 = VAR_1->storage[VAR_1->read & (VAR_1->size - 1)];





 FUNC_2();

 VAR_1->read++;

 FUNC_4(&VAR_1->pop);

 return VAR_2;
}
