
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ uval; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,int,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_4,
 FILE *VAR_5
 )
{
 associd_t VAR_6;
 int VAR_7;

 if (VAR_4->nargs == 0) {
  VAR_6 = 0;
 } else {

  if (VAR_4->argval[0].uval == 0)
   VAR_6 = 0;
  else if ((VAR_6 = FUNC_0(VAR_4->argval[0].uval)) == 0)
   return;
 }

 VAR_7 = (0 == VAR_6)
     ? VAR_2
     : VAR_1;
 FUNC_1(VAR_3, VAR_6, VAR_0, VAR_7, VAR_5);
}
