
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_4__ {TYPE_1__ run_list; scalar_t__ time_slice; } ;
struct task_struct {scalar_t__ policy; TYPE_2__ rt; } ;
struct rq {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rq*,struct task_struct*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (struct rq*,struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct rq *VAR_2, struct task_struct *VAR_3, int VAR_4)
{
 FUNC_2(VAR_2);

 FUNC_3(VAR_2, VAR_3);





 if (VAR_3->policy != VAR_0)
  return;

 if (--VAR_3->rt.time_slice)
  return;

 VAR_3->rt.time_slice = VAR_1;





 if (VAR_3->rt.run_list.prev != VAR_3->rt.run_list.next) {
  FUNC_0(VAR_2, VAR_3, 0);
  FUNC_1(VAR_3);
 }
}
