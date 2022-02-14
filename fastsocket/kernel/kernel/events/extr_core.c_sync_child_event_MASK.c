
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {int dummy; } ;
struct TYPE_4__ {scalar_t__ inherit_stat; } ;
struct perf_event {int child_mutex; int child_list; TYPE_1__* ctx; int child_total_time_running; int total_time_running; int child_total_time_enabled; int total_time_enabled; int child_count; TYPE_2__ attr; struct perf_event* parent; } ;
struct TYPE_3__ {int parent_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_event*,struct task_struct*) ;
 int FUNC_7 (struct perf_event*) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_0,
          struct task_struct *VAR_1)
{
 struct perf_event *VAR_2 = VAR_0->parent;
 u64 VAR_3;

 if (VAR_0->attr.inherit_stat)
  FUNC_6(VAR_0, VAR_1);

 VAR_3 = FUNC_5(VAR_0);




 FUNC_1(VAR_3, &VAR_2->child_count);
 FUNC_1(VAR_0->total_time_enabled,
       &VAR_2->child_total_time_enabled);
 FUNC_1(VAR_0->total_time_running,
       &VAR_2->child_total_time_running);




 FUNC_0(VAR_2->ctx->parent_ctx);
 FUNC_3(&VAR_2->child_mutex);
 FUNC_2(&VAR_0->child_list);
 FUNC_4(&VAR_2->child_mutex);





 FUNC_7(VAR_2);
}
