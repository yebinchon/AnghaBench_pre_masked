
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_cpuset; } ;
struct cpuset_args {int setid; } ;
struct cpuset {int cs_id; int cs_mask; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct cpuset**,struct cpuset*,int *) ;
 struct cpuset* FUNC_2 (int ) ;
 int FUNC_3 (struct cpuset*) ;
 int FUNC_4 (int,struct cpuset*,int *,int *) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

int
FUNC_7(struct thread *VAR_0, struct cpuset_args *VAR_1)
{
 struct cpuset *VAR_2;
 struct cpuset *VAR_3;
 int VAR_4;

 FUNC_5(VAR_0);
 VAR_2 = FUNC_2(VAR_0->td_cpuset);
 FUNC_6(VAR_0);
 VAR_4 = FUNC_1(&VAR_3, VAR_2, &VAR_2->cs_mask);
 FUNC_3(VAR_2);
 if (VAR_4)
  return (VAR_4);
 VAR_4 = FUNC_0(&VAR_3->cs_id, VAR_1->setid, sizeof(VAR_3->cs_id));
 if (VAR_4 == 0)
  VAR_4 = FUNC_4(-1, VAR_3, ((void*)0), ((void*)0));
 FUNC_3(VAR_3);
 return (VAR_4);
}
