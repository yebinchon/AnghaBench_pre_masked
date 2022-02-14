
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int rp; } ;
typedef int _Unwind_Ptr ;



inline _Unwind_Ptr
FUNC_0 (struct _Unwind_Context *VAR_0, int *VAR_1)
{
  *VAR_1 = 0;
  return VAR_0->rp;
}
