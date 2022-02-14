
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* exception_cleanup ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ _Unwind_Exception ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1 (_Unwind_Exception * VAR_1)
{
  if (VAR_1->exception_cleanup)
    (*VAR_1->exception_cleanup) (VAR_0, VAR_1);
}
