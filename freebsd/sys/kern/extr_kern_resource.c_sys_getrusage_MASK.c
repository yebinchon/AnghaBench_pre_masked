
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rusage {int dummy; } ;
struct getrusage_args {int rusage; int who; } ;


 int FUNC_0 (struct rusage*,int ,int) ;
 int FUNC_1 (struct thread*,int ,struct rusage*) ;

int
FUNC_2(struct thread *VAR_0, struct getrusage_args *VAR_1)
{
 struct rusage VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->who, &VAR_2);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(&VAR_2, VAR_1->rusage, sizeof(struct rusage));
 return (VAR_3);
}
