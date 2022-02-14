
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {int nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {int ival; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int) ;

__attribute__((used)) static void
FUNC_1(
 struct parse *VAR_2,
 FILE *VAR_3
 )
{
 int VAR_4 = 0;

 if (VAR_2->nargs == 1) {
  if (VAR_2->argval->ival == 6)
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_0;
 }
 FUNC_0(1, VAR_3, VAR_4);
}
