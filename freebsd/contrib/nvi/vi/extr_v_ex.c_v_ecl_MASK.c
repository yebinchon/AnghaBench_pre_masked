
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* ccl_sp; } ;
struct TYPE_20__ {int lno; struct TYPE_20__* nextdisp; struct TYPE_20__* ccl_parent; TYPE_3__* frp; TYPE_1__* ep; TYPE_5__* gp; } ;
struct TYPE_19__ {int flags; } ;
struct TYPE_18__ {TYPE_3__* frp; TYPE_1__* ep; } ;
struct TYPE_17__ {int refcnt; } ;
typedef TYPE_4__ SCR ;
typedef TYPE_5__ GS ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int*) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_4__*,TYPE_4__**) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_4)
{
 GS *VAR_5;
 SCR *VAR_6;


 VAR_5 = VAR_4->gp;
 if (VAR_5->ccl_sp == ((void*)0) && FUNC_6(VAR_4))
  return (1);


 if (FUNC_5(VAR_5, VAR_4, &VAR_6))
  return (1);
 if (FUNC_7(VAR_4, VAR_6, 1)) {
  (void)FUNC_4(VAR_6);
  return (1);
 }


 VAR_6->ep = VAR_5->ccl_sp->ep;
 ++VAR_6->ep->refcnt;

 VAR_6->frp = VAR_5->ccl_sp->frp;
 VAR_6->frp->flags = VAR_4->frp->flags;


 (void)FUNC_2(VAR_6, &VAR_6->lno);
 if (VAR_6->lno == 0)
  VAR_6->lno = 1;


 VAR_4->ccl_parent = VAR_4;


 FUNC_0(VAR_6, VAR_2);







 VAR_4->nextdisp = VAR_6;
 FUNC_0(VAR_4, VAR_3);
 return (0);
}
