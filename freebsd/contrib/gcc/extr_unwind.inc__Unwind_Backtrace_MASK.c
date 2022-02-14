
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int dummy; } ;
typedef scalar_t__ (* _Unwind_Trace_Fn ) (struct _Unwind_Context*,void*) ;
typedef scalar_t__ _Unwind_Reason_Code ;
typedef int _Unwind_FrameState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct _Unwind_Context*,void*) ;
 scalar_t__ FUNC_1 (struct _Unwind_Context*,int *) ;
 int FUNC_2 (struct _Unwind_Context*) ;
 int FUNC_3 (struct _Unwind_Context*,int *) ;

_Unwind_Reason_Code
FUNC_4(_Unwind_Trace_Fn VAR_3, void * VAR_4)
{
  struct _Unwind_Context VAR_5;
  _Unwind_Reason_Code VAR_6;

  FUNC_2 (&VAR_5);

  while (1)
    {
      _Unwind_FrameState VAR_7;


      VAR_6 = FUNC_1 (&VAR_5, &VAR_7);
      if (VAR_6 != VAR_2 && VAR_6 != VAR_0)
 return VAR_1;


      if ((*VAR_3) (&VAR_5, VAR_4) != VAR_2)
 return VAR_1;


      if (VAR_6 == VAR_0)
 break;


      FUNC_3 (&VAR_5, &VAR_7);
    }

  return VAR_6;
}
