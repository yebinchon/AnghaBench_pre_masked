
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kthread_create_info {int (* threadfn ) (void*) ;int done; TYPE_1__* result; void* data; } ;
struct kthread {scalar_t__ should_stop; int exited; } ;
struct TYPE_2__ {int * vfork_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{

 struct kthread_create_info *VAR_4 = VAR_3;
 int (*VAR_5)(void *VAR_6) = VAR_4->threadfn;
 void *VAR_7 = VAR_4->data;
 struct kthread VAR_8;
 int VAR_9;

 VAR_8.should_stop = 0;
 FUNC_3(&VAR_8.exited);
 VAR_2->vfork_done = &VAR_8.exited;


 FUNC_0(VAR_1);
 VAR_4->result = VAR_2;
 FUNC_1(&VAR_4->done);
 FUNC_4();

 VAR_9 = -VAR_0;
 if (!VAR_8.should_stop)
  VAR_9 = VAR_5(VAR_7);


 FUNC_2(VAR_9);
}
