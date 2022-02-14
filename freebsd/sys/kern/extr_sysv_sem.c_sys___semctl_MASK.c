
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union semun {union semun* buf; int val; int array; } ;
struct thread {int * td_retval; } ;
struct semid_ds {struct semid_ds* buf; int val; int array; } ;
struct __semctl_args {int cmd; int semnum; int semid; union semun* arg; } ;
typedef int register_t ;
typedef int dsbuf ;
typedef int arg ;
 int FUNC_0 (union semun*,union semun*,int) ;
 int FUNC_1 (union semun*,union semun*,int) ;
 int FUNC_2 (struct thread*,int ,int ,int,union semun*,int *) ;

int
FUNC_3(struct thread *VAR_0, struct __semctl_args *VAR_1)
{
 struct semid_ds VAR_2;
 union semun VAR_3, VAR_4;
 register_t VAR_5;
 int VAR_6;

 switch (VAR_1->cmd) {
 case 130:
 case 132:
 case 131:
 case 133:
 case 128:
 case 129:
  VAR_6 = FUNC_0(VAR_1->arg, &VAR_3, sizeof(VAR_3));
  if (VAR_6)
   return (VAR_6);
  break;
 }

 switch (VAR_1->cmd) {
 case 130:
 case 131:
  VAR_4.buf = &VAR_2;
  break;
 case 132:
  VAR_6 = FUNC_0(VAR_3.buf, &VAR_2, sizeof(VAR_2));
  if (VAR_6)
   return (VAR_6);
  VAR_4.buf = &VAR_2;
  break;
 case 133:
 case 129:
  VAR_4.array = VAR_3.array;
  break;
 case 128:
  VAR_4.val = VAR_3.val;
  break;
 }

 VAR_6 = FUNC_2(VAR_0, VAR_1->semid, VAR_1->semnum, VAR_1->cmd, &VAR_4,
     &VAR_5);
 if (VAR_6)
  return (VAR_6);

 switch (VAR_1->cmd) {
 case 130:
 case 131:
  VAR_6 = FUNC_1(&VAR_2, VAR_3.buf, sizeof(VAR_2));
  break;
 }

 if (VAR_6 == 0)
  VAR_0->td_retval[0] = VAR_5;
 return (VAR_6);
}
