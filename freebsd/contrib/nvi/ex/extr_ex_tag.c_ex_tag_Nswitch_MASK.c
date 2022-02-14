
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_23__ {struct TYPE_23__* nextdisp; int argv; int cargv; TYPE_10__* frp; TYPE_12__* ep; int gp; } ;
struct TYPE_22__ {TYPE_10__* frp; int fname; } ;
struct TYPE_21__ {int refcnt; } ;
struct TYPE_20__ {int name; int flags; } ;
typedef TYPE_1__ TAG ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 TYPE_10__* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_12__*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_10__*,int *,int) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_2__*,int ) ;

int
FUNC_10(SCR *VAR_3, TAG *VAR_4, int VAR_5)
{
 SCR *VAR_6;


 if (VAR_4->frp == ((void*)0) && (VAR_4->frp = FUNC_3(VAR_3, VAR_4->fname)) == ((void*)0))
  return (1);


 if (FUNC_7(VAR_3->gp, VAR_3, &VAR_6))
  return (1);
 if (FUNC_9(VAR_3, VAR_6, 0)) {
  (void)FUNC_4(VAR_6, VAR_6->ep, 1);
  (void)FUNC_6(VAR_6);
  return (1);
 }


 if (VAR_4->frp == VAR_3->frp) {

  VAR_6->ep = VAR_3->ep;
  ++VAR_6->ep->refcnt;

  VAR_6->frp = VAR_4->frp;
  VAR_6->frp->flags = VAR_3->frp->flags;
 } else if (FUNC_5(VAR_6, VAR_4->frp, ((void*)0), VAR_5)) {
  (void)FUNC_8(VAR_6, ((void*)0));
  (void)FUNC_6(VAR_6);
  return (1);
 }


 VAR_6->cargv = VAR_6->argv = FUNC_2(VAR_3, ((void*)0), VAR_4->frp->name);


 FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_0);


 VAR_3->nextdisp = VAR_6;
 FUNC_1(VAR_3, VAR_2);

 return (0);
}
