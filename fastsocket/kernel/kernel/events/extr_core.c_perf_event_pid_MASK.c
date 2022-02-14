
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct perf_event {int ns; struct perf_event* parent; } ;


 int FUNC_0 (struct task_struct*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct perf_event *VAR_0, struct task_struct *VAR_1)
{



 if (VAR_0->parent)
  VAR_0 = VAR_0->parent;

 return FUNC_0(VAR_1, VAR_0->ns);
}
