
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct shmat_args {int shmflg; int shmaddr; int shmid; } ;
struct linux_shmat_args {int shmflg; int shmaddr; int shmid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,struct shmat_args*) ;

int
FUNC_2(struct thread *VAR_0, struct linux_shmat_args *VAR_1)
{
 struct shmat_args VAR_2;





 VAR_2.shmid = VAR_1->shmid;
 VAR_2.shmaddr = FUNC_0(VAR_1->shmaddr);
 VAR_2.shmflg = VAR_1->shmflg;
 return (FUNC_1(VAR_0, &VAR_2));
}
