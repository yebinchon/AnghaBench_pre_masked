
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * taskqueue_callback_fn ;
struct taskqueue {void** tq_cb_contexts; int ** tq_callbacks; } ;
typedef enum taskqueue_callback_type { ____Placeholder_taskqueue_callback_type } taskqueue_callback_type ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct taskqueue *VAR_2,
    enum taskqueue_callback_type VAR_3, taskqueue_callback_fn VAR_4,
    void *VAR_5)
{

 FUNC_0(((VAR_3 >= VAR_1) &&
     (VAR_3 <= VAR_0)),
     ("Callback type %d not valid, must be %d-%d", VAR_3,
     VAR_1, VAR_0));
 FUNC_0((VAR_2->tq_callbacks[VAR_3] == ((void*)0)),
     ("Re-initialization of taskqueue callback?"));

 VAR_2->tq_callbacks[VAR_3] = VAR_4;
 VAR_2->tq_cb_contexts[VAR_3] = VAR_5;
}
