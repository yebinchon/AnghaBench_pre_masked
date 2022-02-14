
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* nvlist_prtctl_t ;
struct TYPE_3__ {int nvprt_indent_mode; int nvprt_indentinc; int nvprt_fp; int nvprt_indent; } ;




 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_1(nvlist_prtctl_t VAR_0, int VAR_1)
{
 int VAR_2;

 switch (VAR_0->nvprt_indent_mode) {
 case 129:
  (void) FUNC_0(VAR_0->nvprt_fp, "%*s",
      VAR_0->nvprt_indent + VAR_1 * VAR_0->nvprt_indentinc, "");
  break;

 case 128:
  VAR_2 = VAR_0->nvprt_indent + VAR_1;
  while (VAR_2-- > 0)
   (void) FUNC_0(VAR_0->nvprt_fp, "\t");
 }
}
