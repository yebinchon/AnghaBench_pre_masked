
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_11__ {struct TYPE_11__* nextdisp; TYPE_1__* gp; } ;
struct TYPE_10__ {int dq; } ;
typedef TYPE_2__ SCR ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int VAR_4 ;

int
FUNC_5(SCR *VAR_5, VICMD *VAR_6)
{






 if (FUNC_0(VAR_5, VAR_1)) {
  FUNC_4(VAR_5, VAR_0,
      "308|Enter <CR> to execute a command, :q to exit");
  return (1);
 }





 if (FUNC_3(VAR_5, VAR_4) != ((void*)0))
  VAR_5->nextdisp = FUNC_3(VAR_5, VAR_4);
 else if (FUNC_2(VAR_5->gp->dq) == VAR_5) {
  FUNC_4(VAR_5, VAR_0, "187|No other screen to switch to");
  return (1);
 } else
  VAR_5->nextdisp = FUNC_2(VAR_5->gp->dq);

 FUNC_1(VAR_5->nextdisp, VAR_3);
 FUNC_1(VAR_5, VAR_2 | VAR_3);
 return (0);
}
