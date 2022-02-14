
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int bsp; } ;
typedef int _Unwind_Word ;
typedef int _Unwind_Ptr ;



_Unwind_Word
FUNC_0 (struct _Unwind_Context *VAR_0)
{
  return (_Unwind_Ptr) VAR_0->bsp;
}
