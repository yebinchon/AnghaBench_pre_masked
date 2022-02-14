
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int _uw ;
struct TYPE_7__ {int data; int* next; int bytes_left; int words_left; } ;
typedef TYPE_2__ __gnu_unwind_state ;
typedef int _Unwind_Reason_Code ;
struct TYPE_6__ {scalar_t__ ehtp; } ;
struct TYPE_8__ {TYPE_1__ pr_cache; } ;
typedef TYPE_3__ _Unwind_Control_Block ;
typedef int _Unwind_Context ;


 int FUNC_0 (int *,TYPE_2__*) ;

_Unwind_Reason_Code
FUNC_1 (_Unwind_Control_Block * VAR_0, _Unwind_Context * VAR_1)
{
  _uw *VAR_2;
  __gnu_unwind_state VAR_3;

  VAR_2 = (_uw *) VAR_0->pr_cache.ehtp;

  VAR_2++;

  VAR_3.data = (*VAR_2) << 8;
  VAR_3.next = VAR_2 + 1;
  VAR_3.bytes_left = 3;
  VAR_3.words_left = ((*VAR_2) >> 24) & 0xff;

  return FUNC_0 (VAR_1, &VAR_3);
}
