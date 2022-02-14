
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int context; int (* pfn_callback ) (int ) ;int events; int mutex; int cond; } ;
typedef TYPE_1__ cl_thread_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(void *VAR_1)
{
 cl_thread_pool_t *VAR_2 = (cl_thread_pool_t *) VAR_1;

 do {
  FUNC_3(&VAR_2->mutex);
  FUNC_1(VAR_0, VAR_2);
  while (!VAR_2->events)
   FUNC_2(&VAR_2->cond,
       &VAR_2->mutex);
  VAR_2->events--;
  FUNC_0(1);

  (*VAR_2->pfn_callback) (VAR_2->context);
 } while (1);

 return ((void*)0);
}
