
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_cpuset; } ;
struct setlist {int dummy; } ;
struct proc {int dummy; } ;
struct domainset {int dummy; } ;
struct domainlist {int dummy; } ;
struct cpuset {int dummy; } ;
typedef int lwpid_t ;
typedef int cpuset_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct setlist*) ;
 int FUNC_2 (struct setlist*,int) ;
 int FUNC_3 (struct cpuset*) ;
 int FUNC_4 (int ,struct cpuset**,int *,struct domainset*,struct setlist*,struct domainlist*) ;
 struct cpuset* FUNC_5 (struct thread*,struct cpuset*) ;
 int FUNC_6 (int ,int ,struct proc**,struct thread**,struct cpuset**) ;
 int FUNC_7 (struct domainlist*) ;
 int FUNC_8 (struct domainlist*,int ) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;

__attribute__((used)) static int
FUNC_11(lwpid_t VAR_1, cpuset_t *VAR_2, struct domainset *VAR_3)
{
 struct setlist VAR_4;
 struct domainlist VAR_5;
 struct cpuset *VAR_6;
 struct cpuset *VAR_7;
 struct thread *VAR_8;
 struct proc *VAR_9;
 int VAR_10;

 FUNC_2(&VAR_4, 1);
 FUNC_8(&VAR_5, VAR_3 != ((void*)0));
 VAR_10 = FUNC_6(VAR_0, VAR_1, &VAR_9, &VAR_8, &VAR_7);
 if (VAR_10)
  goto out;
 VAR_7 = ((void*)0);
 FUNC_9(VAR_8);
 VAR_10 = FUNC_4(VAR_8->td_cpuset, &VAR_6, VAR_2, VAR_3,
     &VAR_4, &VAR_5);
 if (VAR_10 == 0)
  VAR_7 = FUNC_5(VAR_8, VAR_6);
 FUNC_10(VAR_8);
 FUNC_0(VAR_9);
 if (VAR_7)
  FUNC_3(VAR_7);
out:
 FUNC_1(&VAR_4);
 FUNC_7(&VAR_5);
 return (VAR_10);
}
