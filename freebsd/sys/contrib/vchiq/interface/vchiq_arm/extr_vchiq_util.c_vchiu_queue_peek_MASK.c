
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write; int read; int size; int ** storage; int push; } ;
typedef TYPE_1__ VCHIU_QUEUE_T ;
typedef int VCHIQ_HEADER_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

VCHIQ_HEADER_T *FUNC_4(VCHIU_QUEUE_T *VAR_1)
{
 while (VAR_1->write == VAR_1->read) {
  if (FUNC_0(&VAR_1->push) != 0) {
   FUNC_1(VAR_0);
  }
 }

 FUNC_3(&VAR_1->push);





 FUNC_2();

 return VAR_1->storage[VAR_1->read & (VAR_1->size - 1)];
}
