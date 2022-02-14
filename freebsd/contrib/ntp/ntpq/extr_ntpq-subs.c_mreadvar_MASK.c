
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct varlist {int dummy; } ;
struct parse {int nargs; TYPE_1__* argval; } ;
struct TYPE_4__ {int assid; } ;
struct TYPE_3__ {int string; int uval; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct varlist*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct varlist*,int ) ;
 int FUNC_2 (struct varlist*) ;
 int FUNC_3 (struct varlist*,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int*,int*,int *) ;
 struct varlist* VAR_4 ;

__attribute__((used)) static void
FUNC_5(
 struct parse *VAR_5,
 FILE *VAR_6
 )
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct varlist VAR_10[VAR_1];
 struct varlist *VAR_11;

 if (!FUNC_4(VAR_5->argval[0].uval, VAR_5->argval[1].uval,
    &VAR_8, &VAR_9, VAR_6))
  return;

 FUNC_0(VAR_10);
 if (VAR_5->nargs >= 3) {
  FUNC_1(VAR_10, VAR_5->argval[2].string);
  VAR_11 = VAR_10;
 } else {
  VAR_11 = VAR_4;
 }

 for (VAR_7 = VAR_8; VAR_7 <= VAR_9; VAR_7++) {
  if (!FUNC_3(VAR_11, VAR_3[VAR_7].assid, VAR_0,
       VAR_2, VAR_6))
   break;
 }

 if (VAR_11 == VAR_10)
  FUNC_2(VAR_10);

 return;
}
