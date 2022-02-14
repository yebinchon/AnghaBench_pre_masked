
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msgget_args {int msgflg; int key; } ;
struct linux_msgget_args {int msgflg; int key; } ;


 int FUNC_0 (struct thread*,struct msgget_args*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_msgget_args *VAR_1)
{
 struct msgget_args VAR_2;




 VAR_2.key = VAR_1->key;
 VAR_2.msgflg = VAR_1->msgflg;
 return (FUNC_0(VAR_0, &VAR_2));
}
