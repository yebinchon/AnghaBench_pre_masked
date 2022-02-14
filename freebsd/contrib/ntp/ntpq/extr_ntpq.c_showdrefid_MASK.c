
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {int string; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(
 struct parse *VAR_3,
 FILE *VAR_4
 )
{
 if (VAR_3->nargs == 0) {
  (void) FUNC_1(VAR_4, "drefid value is %s\n", FUNC_2());
  return;
 } else if (FUNC_0(VAR_3->argval[0].string, "hash")) {
  VAR_2 = VAR_0;
 } else if (FUNC_0(VAR_3->argval[0].string, "ipv4")) {
  VAR_2 = VAR_1;
 } else {
  (void) FUNC_1(VAR_4, "What?\n");
  return;
 }
 (void) FUNC_1(VAR_4, "drefid value set to %s\n", FUNC_2());
}
