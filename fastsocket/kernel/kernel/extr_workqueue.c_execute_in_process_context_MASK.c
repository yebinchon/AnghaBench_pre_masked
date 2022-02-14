
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* work_func_t ) (int *) ;
struct execute_work {int work; } ;


 int FUNC_0 (int *,int (*) (int *)) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

int FUNC_3(work_func_t VAR_0, struct execute_work *VAR_1)
{
 if (!FUNC_1()) {
  VAR_0(&VAR_1->work);
  return 0;
 }

 FUNC_0(&VAR_1->work, VAR_0);
 FUNC_2(&VAR_1->work);

 return 1;
}
