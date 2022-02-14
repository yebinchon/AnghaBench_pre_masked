
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {int string; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_1,
 FILE *VAR_2
 )
{
 if (VAR_1->nargs == 0) {
  (void) FUNC_1(VAR_2, "debug level is %d\n", VAR_0);
  return;
 } else if (FUNC_0(VAR_1->argval[0].string, "no")) {
  VAR_0 = 0;
 } else if (FUNC_0(VAR_1->argval[0].string, "more")) {
  VAR_0++;
 } else if (FUNC_0(VAR_1->argval[0].string, "less")) {
  VAR_0--;
 } else {
  (void) FUNC_1(VAR_2, "What?\n");
  return;
 }
 (void) FUNC_1(VAR_2, "debug level set to %d\n", VAR_0);
}
