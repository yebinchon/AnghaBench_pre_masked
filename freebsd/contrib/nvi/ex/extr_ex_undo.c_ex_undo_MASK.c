
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int lundo; } ;
struct TYPE_14__ {int cno; int lno; } ;
struct TYPE_13__ {int cno; int lno; TYPE_3__* ep; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ MARK ;
typedef TYPE_3__ EXF ;
typedef int EXCMD ;


 int VAR_0 ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_1 ;

 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,TYPE_2__*,int) ;

int
FUNC_6(SCR *VAR_2, EXCMD *VAR_3)
{
 EXF *VAR_4;
 MARK VAR_5;





 VAR_5.lno = VAR_2->lno;
 VAR_5.cno = VAR_2->cno;
 if (FUNC_5(VAR_2, VAR_0, &VAR_5, 1))
  return (1);







 VAR_4 = VAR_2->ep;
 if (!FUNC_0(VAR_4, VAR_1)) {
  FUNC_1(VAR_4, VAR_1);
  VAR_4->lundo = 129;
 }
 switch (VAR_4->lundo) {
 case 130:
  if (FUNC_4(VAR_2, &VAR_5))
   return (1);
  VAR_4->lundo = 129;
  break;
 case 129:
  if (FUNC_3(VAR_2, &VAR_5))
   return (1);
  VAR_4->lundo = 130;
  break;
 case 128:
  FUNC_2();
 }
 VAR_2->lno = VAR_5.lno;
 VAR_2->cno = VAR_5.cno;
 return (0);
}
