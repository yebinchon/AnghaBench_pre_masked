
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct shmget_args {int shmflg; int size; int key; } ;
struct linux_shmget_args {int shmflg; int size; int key; } ;


 int FUNC_0 (struct thread*,struct shmget_args*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_shmget_args *VAR_1)
{
 struct shmget_args VAR_2;





 VAR_2.key = VAR_1->key;
 VAR_2.size = VAR_1->size;
 VAR_2.shmflg = VAR_1->shmflg;
 return (FUNC_0(VAR_0, &VAR_2));
}
