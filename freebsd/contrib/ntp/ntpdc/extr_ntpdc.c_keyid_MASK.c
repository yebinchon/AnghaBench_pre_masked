
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {scalar_t__ uval; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(
 struct parse *VAR_2,
 FILE *VAR_3
 )
{
 if (VAR_2->nargs == 0) {
  if (VAR_0 == 0 && !VAR_1)
      (void) FUNC_0(VAR_3, "no keyid defined\n");
  else if (VAR_0 == 0 && VAR_1)
      (void) FUNC_0(VAR_3, "no keyid will be sent\n");
  else
      (void) FUNC_0(VAR_3, "keyid is %lu\n", (u_long)VAR_0);
 } else {
  VAR_0 = VAR_2->argval[0].uval;
  VAR_1 = 1;
 }
}
