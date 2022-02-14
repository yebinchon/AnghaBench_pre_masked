
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* nvlist_prtctl_t ;
typedef enum nvlist_indent_mode { ____Placeholder_nvlist_indent_mode } nvlist_indent_mode ;
struct TYPE_3__ {int nvprt_indent_mode; int nvprt_indent; int nvprt_indentinc; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(nvlist_prtctl_t VAR_2, enum nvlist_indent_mode VAR_3,
    int VAR_4, int VAR_5)
{
 if (VAR_3 < VAR_0 || VAR_3 > VAR_1)
  VAR_3 = VAR_1;

 if (VAR_4 < 0)
  VAR_4 = 0;

 if (VAR_5 < 0)
  VAR_5 = 1;

 VAR_2->nvprt_indent_mode = VAR_3;
 VAR_2->nvprt_indent = VAR_4;
 VAR_2->nvprt_indentinc = VAR_5;
}
