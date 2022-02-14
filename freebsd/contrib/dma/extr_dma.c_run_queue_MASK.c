
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int queue; } ;
struct qitem {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct qitem*) ;
 struct qitem* FUNC_2 (struct queue*) ;

void
FUNC_3(struct queue *VAR_0)
{
 struct qitem *VAR_1;

 if (FUNC_0(&VAR_0->queue))
  return;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_1);

}
