
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue {struct task* tq_hint; int tq_queue; } ;
struct task {int ta_pending; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct task*,int ) ;
 int FUNC_2 (struct task*,int ,int ,struct task*) ;
 int FUNC_3 (struct taskqueue*,struct task*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct taskqueue *VAR_3)
{
 struct task VAR_4;

 if (FUNC_0(&VAR_3->tq_queue))
  return (0);
 FUNC_2(&VAR_4, VAR_0, VAR_2, &VAR_4);
 FUNC_1(&VAR_3->tq_queue, &VAR_4, VAR_1);
 VAR_3->tq_hint = &VAR_4;
 VAR_4.ta_pending = 1;





 while (VAR_4.ta_pending != 0)
  FUNC_3(VAR_3, &VAR_4, "tq_qdrain");
 return (1);
}
