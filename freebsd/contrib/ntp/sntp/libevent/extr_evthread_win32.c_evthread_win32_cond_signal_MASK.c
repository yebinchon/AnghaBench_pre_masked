
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evthread_win32_cond {int lock; int event; int generation; int n_to_wake; int n_waiting; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, int VAR_1)
{
 struct evthread_win32_cond *VAR_2 = VAR_0;
 FUNC_0(&VAR_2->lock);
 if (VAR_1)
  VAR_2->n_to_wake = VAR_2->n_waiting;
 else
  ++VAR_2->n_to_wake;
 VAR_2->generation++;
 FUNC_2(VAR_2->event);
 FUNC_1(&VAR_2->lock);
 return 0;
}
