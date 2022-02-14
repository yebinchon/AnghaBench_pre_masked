
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Exception {scalar_t__ private_1; } ;
struct _Unwind_Context {int dummy; } ;
typedef scalar_t__ _Unwind_Reason_Code ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct _Unwind_Exception*,struct _Unwind_Context*) ;
 scalar_t__ FUNC_1 (struct _Unwind_Exception*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct _Unwind_Context*) ;
 int FUNC_4 (struct _Unwind_Context*,struct _Unwind_Context*) ;

_Unwind_Reason_Code
FUNC_5 (struct _Unwind_Exception *VAR_1)
{
  struct _Unwind_Context VAR_2, VAR_3;
  _Unwind_Reason_Code VAR_4;



  if (VAR_1->private_1 == 0)
    return FUNC_1 (VAR_1);

  FUNC_3 (&VAR_2);
  VAR_3 = VAR_2;

  VAR_4 = FUNC_0 (VAR_1, &VAR_3);

  FUNC_2 (VAR_4 == VAR_0);

  FUNC_4 (&VAR_2, &VAR_3);
}
