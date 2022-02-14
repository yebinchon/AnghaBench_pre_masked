
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct shmdt_args {int shmaddr; } ;
struct linux_shmdt_args {int shmaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,struct shmdt_args*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_shmdt_args *VAR_1)
{
 struct shmdt_args VAR_2;



 VAR_2.shmaddr = FUNC_0(VAR_1->shmaddr);
 return (FUNC_1(VAR_0, &VAR_2));
}
