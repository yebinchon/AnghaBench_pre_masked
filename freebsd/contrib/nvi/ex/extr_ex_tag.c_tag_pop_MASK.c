
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* current; } ;
struct TYPE_15__ {int tq; } ;
struct TYPE_14__ {struct TYPE_14__* frp; int cno; int lno; } ;
struct TYPE_13__ {TYPE_2__* frp; int cno; int lno; } ;
typedef int TAGQ ;
typedef TYPE_1__ TAG ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EX_PRIVATE ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int * FUNC_2 (int ) ;
 TYPE_9__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_7(SCR *VAR_6, TAGQ *VAR_7, int VAR_8)
{
 EX_PRIVATE *VAR_9;
 TAG *VAR_10;
 TAGQ *VAR_11;

 VAR_9 = FUNC_0(VAR_6);





 VAR_10 = FUNC_3(VAR_7, VAR_5)->current;
 if (VAR_10->frp == VAR_6->frp) {
  VAR_6->lno = VAR_10->lno;
  VAR_6->cno = VAR_10->cno;
 } else {
  if (FUNC_5(VAR_6, VAR_8, VAR_1 | VAR_2))
   return (1);

  VAR_10->frp->lno = VAR_10->lno;
  VAR_10->frp->cno = VAR_10->cno;
  FUNC_1(VAR_6->frp, VAR_0);
  if (FUNC_4(VAR_6, VAR_10->frp, ((void*)0), VAR_3))
   return (1);

  FUNC_1(VAR_6, VAR_4);
 }


 do {
  VAR_11 = FUNC_2(VAR_9->tq);
  if (FUNC_6(VAR_6, VAR_11))
   return (0);
 } while (VAR_11 != VAR_7);





 if (FUNC_3(FUNC_2(VAR_9->tq), VAR_5) == ((void*)0))
  FUNC_6(VAR_6, FUNC_2(VAR_9->tq));

 return (0);
}
