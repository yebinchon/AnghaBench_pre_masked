
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct clock_getres_args {int * tp; int clock_id; } ;


 int FUNC_0 (struct timespec*,int *,int) ;
 int FUNC_1 (struct thread*,int ,struct timespec*) ;

int
FUNC_2(struct thread *VAR_0, struct clock_getres_args *VAR_1)
{
 struct timespec VAR_2;
 int VAR_3;

 if (VAR_1->tp == ((void*)0))
  return (0);

 VAR_3 = FUNC_1(VAR_0, VAR_1->clock_id, &VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(&VAR_2, VAR_1->tp, sizeof(VAR_2));
 return (VAR_3);
}
