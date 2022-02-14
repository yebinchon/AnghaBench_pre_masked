
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
 int VAR_3 ;
 int FUNC_0 (struct varlist*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct varlist*,int ) ;
 int FUNC_3 (struct varlist*) ;
 int FUNC_4 (struct varlist*,scalar_t__,int ,int,int *) ;

__attribute__((used)) static void
FUNC_5(
 struct parse *VAR_4,
 FILE *VAR_5
 )
{
 associd_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 int VAR_9;
 struct varlist VAR_10[VAR_1];



 if (VAR_4->nargs == 0 || VAR_4->argval[0].uval == 0)
  VAR_6 = 0;
 else if ((VAR_6 = FUNC_1(VAR_4->argval[0].uval)) == 0)
  return;

 FUNC_0(VAR_10);
 if (VAR_4->nargs > 1) {
  VAR_7 = VAR_4->nargs - 1;
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   FUNC_2(VAR_10, VAR_4->argval[1 + VAR_8].string);
 }

 VAR_9 = (0 == VAR_6)
     ? VAR_3
     : VAR_2;
 FUNC_4(VAR_10, VAR_6, VAR_0, VAR_9, VAR_5);

 FUNC_3(VAR_10);
}
