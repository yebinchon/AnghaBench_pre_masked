
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct varlist {int dummy; } ;
struct parse {int nargs; TYPE_1__* argval; } ;
typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ uval; int string; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct varlist*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct varlist*,int ) ;
 int FUNC_3 (struct varlist*) ;
 int FUNC_4 (struct varlist*,scalar_t__,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(
 struct parse *VAR_3,
 FILE *VAR_4
 )
{
 associd_t VAR_5;
 struct varlist VAR_6[VAR_1];


 if (VAR_3->nargs == 0 || VAR_3->argval[0].uval == 0)
  VAR_5 = 0;
 else if ((VAR_5 = FUNC_1(VAR_3->argval[0].uval)) == 0)
  return;

 FUNC_0(VAR_6);
 if (VAR_3->nargs >= 2)
  FUNC_2(VAR_6, VAR_3->argval[1].string);

 FUNC_4(VAR_6, VAR_5, VAR_0, VAR_2, VAR_4);

 FUNC_3(VAR_6);
}
