
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int character; } ;
typedef TYPE_1__ VICMD ;
struct TYPE_9__ {int csearchdir; int lastckey; } ;
typedef int SCR ;





 TYPE_7__* FUNC_0 (int *) ;
 int FUNC_1 () ;

 int FUNC_2 (int *) ;

 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

int
FUNC_7(SCR *VAR_0, VICMD *VAR_1)
{
 VAR_1->character = FUNC_0(VAR_0)->lastckey;

 switch (FUNC_0(VAR_0)->csearchdir) {
 case 132:
  FUNC_2(VAR_0);
  return (1);
 case 131:
  return (FUNC_3(VAR_0, VAR_1));
 case 129:
  return (FUNC_5(VAR_0, VAR_1));
 case 130:
  return (FUNC_4(VAR_0, VAR_1));
 case 128:
  return (FUNC_6(VAR_0, VAR_1));
 default:
  FUNC_1();
 }

}
