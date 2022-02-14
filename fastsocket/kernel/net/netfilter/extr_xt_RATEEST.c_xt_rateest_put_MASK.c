
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateest {scalar_t__ refcnt; int rstats; int bstats; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xt_rateest*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct xt_rateest *VAR_1)
{
 FUNC_3(&VAR_0);
 if (--VAR_1->refcnt == 0) {
  FUNC_1(&VAR_1->list);
  FUNC_0(&VAR_1->bstats, &VAR_1->rstats);
  FUNC_2(VAR_1);
 }
 FUNC_4(&VAR_0);
}
