
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_size_table {scalar_t__ refcnt; int list; } ;


 int FUNC_0 (struct qdisc_size_table*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct qdisc_size_table *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_2(&VAR_0);

 if (--VAR_1->refcnt == 0) {
  FUNC_1(&VAR_1->list);
  FUNC_0(VAR_1);
 }

 FUNC_3(&VAR_0);
}
