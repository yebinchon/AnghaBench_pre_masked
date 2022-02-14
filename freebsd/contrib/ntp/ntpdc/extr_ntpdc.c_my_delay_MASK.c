
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_5__ {int l_ui; int l_uf; } ;
struct TYPE_4__ {scalar_t__ ival; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_1,
 FILE *VAR_2
 )
{
 int VAR_3;
 u_long VAR_4;

 if (VAR_1->nargs == 0) {
  VAR_4 = VAR_0.l_ui * 1000 + VAR_0.l_uf / 4294967;
  (void) FUNC_1(VAR_2, "delay %lu ms\n", VAR_4);
 } else {
  if (VAR_1->argval[0].ival < 0) {
   VAR_3 = 1;
   VAR_4 = (u_long)(-VAR_1->argval[0].ival);
  } else {
   VAR_3 = 0;
   VAR_4 = (u_long)VAR_1->argval[0].ival;
  }

  VAR_0.l_ui = VAR_4 / 1000;
  VAR_4 %= 1000;
  VAR_0.l_uf = VAR_4 * 4294967;

  if (VAR_3)
      FUNC_0(&VAR_0);
 }
}
