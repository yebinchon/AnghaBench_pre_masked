
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {void (* function ) (unsigned long) ;unsigned long data; int mtx; int callout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct timer_list *VAR_1 = (struct timer_list *) VAR_0;
 void (*VAR_2)(unsigned long);

 FUNC_3(&VAR_1->mtx);
 if (FUNC_2(&VAR_1->callout)) {

  FUNC_4(&VAR_1->mtx);
  return;
 }
 if (!FUNC_0(&VAR_1->callout)) {

  FUNC_4(&VAR_1->mtx);
  return;
 }
 FUNC_1(&VAR_1->callout);

 VAR_2 = VAR_1->function;
 FUNC_4(&VAR_1->mtx);

 VAR_2(VAR_1->data);
}
