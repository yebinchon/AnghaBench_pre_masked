
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {int string; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_2,
 FILE *VAR_3
 )
{
 if (VAR_2->nargs == 0) {
  if (VAR_0)
      (void) FUNC_1(VAR_3, "hostnames being shown\n");
  else
      (void) FUNC_1(VAR_3, "hostnames not being shown\n");
 } else {
  if (FUNC_0(VAR_2->argval[0].string, "yes"))
      VAR_0 = 1;
  else if (FUNC_0(VAR_2->argval[0].string, "no"))
      VAR_0 = 0;
  else
      (void)FUNC_1(VAR_1, "What?\n");
 }
}
