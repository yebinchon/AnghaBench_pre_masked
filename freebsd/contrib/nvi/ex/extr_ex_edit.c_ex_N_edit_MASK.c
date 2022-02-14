
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {int iflags; int * cmd; } ;
struct TYPE_25__ {int name; int flags; } ;
struct TYPE_24__ {struct TYPE_24__* nextdisp; int argv; int cargv; int cno; int lno; TYPE_3__* frp; TYPE_1__* ep; int gp; } ;
struct TYPE_23__ {int refcnt; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ FREF ;
typedef TYPE_4__ EXCMD ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*,int *,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,TYPE_2__**) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_12(SCR *VAR_7, EXCMD *VAR_8, FREF *VAR_9, int VAR_10)
{
 SCR *VAR_11;


 if (FUNC_8(VAR_7->gp, VAR_7, &VAR_11))
  return (1);
 if ((VAR_8->cmd == &VAR_6[VAR_0] && FUNC_11(VAR_7, VAR_11)) ||
     (VAR_8->cmd != &VAR_6[VAR_0] && FUNC_10(VAR_7, VAR_11, 0))) {
  (void)FUNC_7(VAR_11);
  return (1);
 }


 if (VAR_10) {

  VAR_11->ep = VAR_7->ep;
  ++VAR_11->ep->refcnt;

  VAR_11->frp = VAR_9;
  VAR_11->frp->flags = VAR_7->frp->flags;

  VAR_11->lno = VAR_7->lno;
  VAR_11->cno = VAR_7->cno;







 } else if (FUNC_5(VAR_11, VAR_9, ((void*)0),
     (FUNC_0(VAR_8->iflags, VAR_1) ? VAR_2 : 0))) {
  (void)FUNC_9(VAR_11, ((void*)0));
  (void)FUNC_7(VAR_11);
  return (1);
 }


 VAR_11->cargv = VAR_11->argv = FUNC_4(VAR_7, ((void*)0), VAR_9->name);


 VAR_7->nextdisp = VAR_11;
 FUNC_1(VAR_7, VAR_5);

 return (0);
}
