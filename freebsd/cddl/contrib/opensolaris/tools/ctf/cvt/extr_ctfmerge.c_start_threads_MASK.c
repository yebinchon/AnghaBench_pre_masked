
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wq_nthreads; int * wq_thread; } ;
typedef TYPE_1__ workqueue_t ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,void* (*) (void*),TYPE_1__*) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_6(workqueue_t *VAR_7)
{
 sigset_t VAR_8;
 int VAR_9;

 FUNC_3(&VAR_8);
 FUNC_2(&VAR_8, VAR_0);
 FUNC_2(&VAR_8, VAR_1);
 FUNC_2(&VAR_8, VAR_2);
 FUNC_1(VAR_3, &VAR_8, ((void*)0));

 for (VAR_9 = 0; VAR_9 < VAR_7->wq_nthreads; VAR_9++) {
  FUNC_0(&VAR_7->wq_thread[VAR_9], ((void*)0),
      (void *(*)(void *))VAR_6, VAR_7);
 }






 FUNC_4(VAR_0, VAR_5);
 FUNC_4(VAR_1, VAR_5);
 FUNC_4(VAR_2, VAR_5);

 FUNC_1(VAR_4, &VAR_8, ((void*)0));
}
