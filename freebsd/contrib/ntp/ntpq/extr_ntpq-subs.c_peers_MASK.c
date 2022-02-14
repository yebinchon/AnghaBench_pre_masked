
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
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct parse*,int *) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_4,
 FILE *VAR_5
 )
{
 if (VAR_3 == VAR_2) {
  FUNC_0(VAR_4, VAR_5);
 } else {
  int VAR_6 = 0;

  if (VAR_4->nargs == 1) {
   if (VAR_4->argval->ival == 6)
    VAR_6 = VAR_1;
   else
    VAR_6 = VAR_0;
  }
  FUNC_1(0, VAR_5, VAR_6);
 }
}
