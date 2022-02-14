
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Exception {int (* exception_cleanup ) (int ,struct _Unwind_Exception*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct _Unwind_Exception*) ;

void
FUNC_1 (struct _Unwind_Exception *VAR_1)
{
  if (VAR_1->exception_cleanup)
    (*VAR_1->exception_cleanup) (VAR_0, VAR_1);
}
