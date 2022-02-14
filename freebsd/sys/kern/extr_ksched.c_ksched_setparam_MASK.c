
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sched_param {int dummy; } ;
struct ksched {int dummy; } ;


 int FUNC_0 (struct ksched*,struct thread*,int*) ;
 int FUNC_1 (struct ksched*,struct thread*,int,struct sched_param const*) ;

int
FUNC_2(struct ksched *VAR_0,
    struct thread *VAR_1, const struct sched_param *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_3 == 0)
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2);
 return (VAR_3);
}
