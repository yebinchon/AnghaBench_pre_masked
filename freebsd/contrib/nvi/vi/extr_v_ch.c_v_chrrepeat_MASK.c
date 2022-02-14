
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cdir_t ;
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
 cdir_t VAR_2;
 int VAR_3;

 VAR_1->character = FUNC_0(VAR_0)->lastckey;
 VAR_2 = FUNC_0(VAR_0)->csearchdir;

 switch (FUNC_0(VAR_0)->csearchdir) {
 case 132:
  FUNC_2(VAR_0);
  return (1);
 case 131:
  VAR_3 = FUNC_5(VAR_0, VAR_1);
  break;
 case 129:
  VAR_3 = FUNC_3(VAR_0, VAR_1);
  break;
 case 130:
  VAR_3 = FUNC_6(VAR_0, VAR_1);
  break;
 case 128:
  VAR_3 = FUNC_4(VAR_0, VAR_1);
  break;
 default:
  FUNC_1();
 }
 FUNC_0(VAR_0)->csearchdir = VAR_2;
 return (VAR_3);
}
