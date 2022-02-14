
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_mtx; int ps_refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct sigacts*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(struct sigacts *VAR_1)
{

 if (FUNC_2(&VAR_1->ps_refcnt) == 0)
  return;
 FUNC_1(&VAR_1->ps_mtx);
 FUNC_0(VAR_1, VAR_0);
}
