
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int mutex; int lock; int parent_ctx; } ;
struct perf_event {struct perf_event_context* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct perf_event *VAR_1)
{
 struct perf_event_context *VAR_2 = VAR_1->ctx;

 FUNC_0(VAR_2->parent_ctx);
 FUNC_2(&VAR_2->mutex, VAR_0);
 FUNC_6(&VAR_2->lock);
 FUNC_4(VAR_1);
 FUNC_7(&VAR_2->lock);
 FUNC_5(VAR_1);
 FUNC_3(&VAR_2->mutex);

 FUNC_1(VAR_1);

 return 0;
}
