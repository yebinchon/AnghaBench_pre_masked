
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_11__ {int (* scr_attr ) (TYPE_1__*,int ,int ) ;scalar_t__ (* scr_screen ) (TYPE_1__*,int ) ;} ;
struct TYPE_10__ {struct TYPE_10__* frp; int cno; int lno; TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

int
FUNC_6(SCR *VAR_6, VICMD *VAR_7)
{
 GS *VAR_8;

 VAR_8 = VAR_6->gp;


 if (VAR_8->scr_screen(VAR_6, VAR_3)) {
  FUNC_3(VAR_6, VAR_1,
      "207|The Q command requires the ex terminal interface");
  return (1);
 }
 (void)VAR_8->scr_attr(VAR_6, VAR_2, 0);


 VAR_6->frp->lno = VAR_6->lno;
 VAR_6->frp->cno = VAR_6->cno;
 FUNC_1(VAR_6->frp, VAR_0);


 FUNC_0(VAR_6, VAR_5 | VAR_4);
 FUNC_1(VAR_6, VAR_3);


 (void)FUNC_2(VAR_6, "\n");

 return (0);
}
