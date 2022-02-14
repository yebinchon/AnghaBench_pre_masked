
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trace_array_cpu {int disabled; } ;
struct task_struct {int dummy; } ;
struct rq {int dummy; } ;
struct TYPE_3__ {struct trace_array_cpu** data; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (TYPE_1__*,struct task_struct*,struct task_struct*,unsigned long,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct rq *VAR_4, struct task_struct *VAR_5,
   struct task_struct *VAR_6)
{
 struct trace_array_cpu *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;

 if (FUNC_8(!VAR_1))
  return;

 FUNC_6(VAR_5);
 FUNC_6(VAR_6);

 if (!VAR_3 || VAR_2)
  return;

 VAR_10 = FUNC_4();
 FUNC_3(VAR_8);
 VAR_9 = FUNC_5();
 VAR_7 = VAR_0->data[VAR_9];

 if (FUNC_1(!FUNC_0(&VAR_7->disabled)))
  FUNC_7(VAR_0, VAR_5, VAR_6, VAR_8, VAR_10);

 FUNC_2(VAR_8);
}
