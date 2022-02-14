
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * perf_event_ctxp; } ;
struct perf_event_context {int lock; int refcount; } ;


 int FUNC_0 (int *) ;
 struct perf_event_context* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct perf_event_context *
FUNC_6(struct task_struct *VAR_0, int VAR_1, unsigned long *VAR_2)
{
 struct perf_event_context *VAR_3;

 FUNC_2();
retry:
 VAR_3 = FUNC_1(VAR_0->perf_event_ctxp[VAR_1]);
 if (VAR_3) {
  FUNC_4(&VAR_3->lock, *VAR_2);
  if (VAR_3 != FUNC_1(VAR_0->perf_event_ctxp[VAR_1])) {
   FUNC_5(&VAR_3->lock, *VAR_2);
   goto retry;
  }

  if (!FUNC_0(&VAR_3->refcount)) {
   FUNC_5(&VAR_3->lock, *VAR_2);
   VAR_3 = ((void*)0);
  }
 }
 FUNC_3();
 return VAR_3;
}
