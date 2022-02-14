
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _Unwind_Ptr ;
struct TYPE_4__ {int fnstart; } ;
struct TYPE_5__ {TYPE_1__ pr_cache; } ;
typedef TYPE_2__ _Unwind_Control_Block ;
typedef int _Unwind_Context ;


 TYPE_2__* FUNC_0 (int *) ;

_Unwind_Ptr
FUNC_1 (_Unwind_Context * VAR_0)
{
  _Unwind_Control_Block *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  return (_Unwind_Ptr) VAR_1->pr_cache.fnstart;
}
