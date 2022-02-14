
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct semget_args {scalar_t__ nsems; int semflg; int key; } ;
struct linux_semget_args {scalar_t__ nsems; int semflg; int key; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,struct semget_args*) ;

int
FUNC_1(struct thread *VAR_1, struct linux_semget_args *VAR_2)
{
 struct semget_args VAR_3;





 if (VAR_2->nsems < 0)
  return (VAR_0);
 VAR_3.key = VAR_2->key;
 VAR_3.nsems = VAR_2->nsems;
 VAR_3.semflg = VAR_2->semflg;
 return (FUNC_0(VAR_1, &VAR_3));
}
