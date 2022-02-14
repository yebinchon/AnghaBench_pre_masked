
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int ra; } ;
typedef int _Unwind_Ptr ;


 int FUNC_0 (struct _Unwind_Context*) ;

inline _Unwind_Ptr
FUNC_1 (struct _Unwind_Context *VAR_0, int *VAR_1)
{
  *VAR_1 = FUNC_0 (VAR_0);
  return (_Unwind_Ptr) VAR_0->ra;
}
