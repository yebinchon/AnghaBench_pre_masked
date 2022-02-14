
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
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,struct task_struct*,int ,unsigned long,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct rq *VAR_5, struct task_struct *VAR_6, int VAR_7)
{
 struct trace_array_cpu *VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_8(!VAR_2))
  return;

 FUNC_6(VAR_1);

 if (!VAR_4 || VAR_3)
  return;

 VAR_11 = FUNC_4();
 FUNC_3(VAR_9);
 VAR_10 = FUNC_5();
 VAR_8 = VAR_0->data[VAR_10];

 if (FUNC_1(!FUNC_0(&VAR_8->disabled)))
  FUNC_7(VAR_0, VAR_6, VAR_1,
        VAR_9, VAR_11);

 FUNC_2(VAR_9);
}
