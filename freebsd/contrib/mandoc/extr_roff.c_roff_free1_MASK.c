
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff {scalar_t__ mstackpos; int rstackpos; TYPE_1__* xtab; int * xmbtab; int * rentab; int * strtab; int * regtab; scalar_t__ rstacksz; TYPE_1__* rstack; scalar_t__ last; int * eqn; int last_eqn; int * tbl; int last_tbl; int first_tbl; } ;
struct TYPE_2__ {struct TYPE_2__* p; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct roff*) ;
 int FUNC_5 (struct roff*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct roff *VAR_0)
{
 int VAR_1;

 FUNC_6(VAR_0->first_tbl);
 VAR_0->first_tbl = VAR_0->last_tbl = *(VAR_0->tbl = ((void*)0));

 FUNC_0(VAR_0->last_eqn);
 VAR_0->last_eqn = *(VAR_0->eqn = ((void*)0));

 while (VAR_0->mstackpos >= 0)
  FUNC_4(VAR_0);

 while (VAR_0->last)
  FUNC_5(VAR_0);

 FUNC_1 (VAR_0->rstack);
 VAR_0->rstack = ((void*)0);
 VAR_0->rstacksz = 0;
 VAR_0->rstackpos = -1;

 FUNC_2(VAR_0->regtab);
 VAR_0->regtab = ((void*)0);

 FUNC_3(VAR_0->strtab);
 FUNC_3(VAR_0->rentab);
 FUNC_3(VAR_0->xmbtab);
 VAR_0->strtab = VAR_0->rentab = VAR_0->xmbtab = ((void*)0);

 if (VAR_0->xtab)
  for (VAR_1 = 0; VAR_1 < 128; VAR_1++)
   FUNC_1(VAR_0->xtab[VAR_1].p);
 FUNC_1(VAR_0->xtab);
 VAR_0->xtab = ((void*)0);
}
