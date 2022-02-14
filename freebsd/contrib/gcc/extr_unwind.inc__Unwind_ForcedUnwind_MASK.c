
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Exception {void* private_2; void* private_1; } ;
struct _Unwind_Context {int dummy; } ;
typedef scalar_t__ _Unwind_Stop_Fn ;
typedef scalar_t__ _Unwind_Reason_Code ;
typedef void* _Unwind_Ptr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct _Unwind_Exception*,struct _Unwind_Context*) ;
 int FUNC_1 (struct _Unwind_Context*) ;
 int FUNC_2 (struct _Unwind_Context*,struct _Unwind_Context*) ;

_Unwind_Reason_Code
FUNC_3 (struct _Unwind_Exception *VAR_1,
        _Unwind_Stop_Fn VAR_2, void * VAR_3)
{
  struct _Unwind_Context VAR_4, VAR_5;
  _Unwind_Reason_Code VAR_6;

  FUNC_1 (&VAR_4);
  VAR_5 = VAR_4;

  VAR_1->private_1 = (_Unwind_Ptr) VAR_2;
  VAR_1->private_2 = (_Unwind_Ptr) VAR_3;

  VAR_6 = FUNC_0 (VAR_1, &VAR_5);
  if (VAR_6 != VAR_0)
    return VAR_6;

  FUNC_2 (&VAR_4, &VAR_5);
}
