
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; int ** tq; } ;


 int FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct adapter *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1->tq) && VAR_1->tq[VAR_2]; VAR_2++) {
  FUNC_3(VAR_1->tq[VAR_2]);
  VAR_1->tq[VAR_2] = ((void*)0);
 }

 VAR_1->flags &= ~VAR_0;

 return (0);
}
