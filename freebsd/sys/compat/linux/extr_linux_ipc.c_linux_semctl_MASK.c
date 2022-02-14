
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union semun {void* array; struct semid_ds* buf; int val; } ;
struct thread {int * td_retval; } ;
struct semid_ds {int dummy; } ;
struct TYPE_4__ {int array; int buf; int val; } ;
struct linux_semctl_args {int cmd; int semnum; int semid; TYPE_1__ arg; } ;
struct l_seminfo {int semmns; int semmap; int semmni; } ;
struct l_semid64_ds {int semmns; int semmap; int semmni; } ;
typedef int register_t ;
typedef int linux_seminfo ;
typedef int linux_semid64 ;
struct TYPE_5__ {int semmni; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 void* FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (struct semid_ds*,struct l_seminfo*) ;
 int FUNC_3 (struct l_seminfo*,void*,int) ;
 int FUNC_4 (struct thread*,int ,int ,int,union semun*,int *) ;
 int FUNC_5 (struct thread*,char*,int) ;
 int FUNC_6 (int,struct l_seminfo*,void*) ;
 int FUNC_7 (int,struct l_seminfo*,void*) ;
 int FUNC_8 (struct l_seminfo*,struct semid_ds*) ;
 int FUNC_9 (struct l_seminfo*,int ,int) ;
 TYPE_2__ VAR_13 ;

int
FUNC_10(struct thread *VAR_14, struct linux_semctl_args *VAR_15)
{
 struct l_semid64_ds VAR_16;
 struct l_seminfo VAR_17;
 struct semid_ds VAR_18;
 union semun VAR_19;
 register_t VAR_20;
 int VAR_21, VAR_22;

 FUNC_9(&VAR_17, 0, sizeof(VAR_17));
 FUNC_9(&VAR_16, 0, sizeof(VAR_16));

 switch (VAR_15->cmd & ~VAR_9) {
 case 134:
  VAR_21 = VAR_6;
  break;
 case 139:
  VAR_21 = VAR_2;
  break;
 case 138:
  VAR_21 = VAR_3;
  break;
 case 137:
  VAR_21 = VAR_4;
  break;
 case 136:
  VAR_21 = VAR_5;
  break;
 case 128:
  VAR_21 = VAR_12;
  VAR_19.val = VAR_15->arg.val;
  break;
 case 133:
  VAR_21 = VAR_7;
  VAR_22 = FUNC_6(VAR_15->cmd & VAR_9,
      &VAR_16, FUNC_0(VAR_15->arg.buf));
  if (VAR_22 != 0)
   return (VAR_22);
  FUNC_8(&VAR_16, &VAR_18);
  VAR_19.buf = &VAR_18;
  return (FUNC_4(VAR_14, VAR_15->semid, VAR_15->semnum, VAR_21, &VAR_19,
      VAR_14->td_retval));
 case 132:
  VAR_21 = VAR_8;
  VAR_19.buf = &VAR_18;
  VAR_22 = FUNC_4(VAR_14, VAR_15->semid, VAR_15->semnum, VAR_21, &VAR_19,
      &VAR_20);
  if (VAR_22 != 0)
   return (VAR_22);
  FUNC_2(&VAR_18, &VAR_16);
  return (FUNC_7(VAR_15->cmd & VAR_9,
      &VAR_16, FUNC_0(VAR_15->arg.buf)));
 case 130:
  VAR_21 = VAR_10;
  VAR_19.buf = &VAR_18;
  VAR_22 = FUNC_4(VAR_14, VAR_15->semid, VAR_15->semnum, VAR_21, &VAR_19,
      &VAR_20);
  if (VAR_22 != 0)
   return (VAR_22);
  FUNC_2(&VAR_18, &VAR_16);
  VAR_22 = FUNC_7(VAR_15->cmd & VAR_9,
      &VAR_16, FUNC_0(VAR_15->arg.buf));
  if (VAR_22 == 0)
   VAR_14->td_retval[0] = VAR_20;
  return (VAR_22);
 case 135:
 case 131:
  FUNC_1(&VAR_13, &VAR_17.semmni, sizeof(VAR_17) -
      sizeof(VAR_17.semmap) );






  VAR_17.semmap = VAR_17.semmns;






  VAR_22 = FUNC_3(&VAR_17,
      FUNC_0(VAR_15->arg.buf), sizeof(VAR_17));
  if (VAR_22 != 0)
   return (VAR_22);



  VAR_14->td_retval[0] = VAR_13.semmni;
  return (0);
 case 140:
  VAR_21 = VAR_1;
  VAR_19.array = FUNC_0(VAR_15->arg.array);
  break;
 case 129:
  VAR_21 = VAR_11;
  VAR_19.array = FUNC_0(VAR_15->arg.array);
  break;
 default:
  FUNC_5(VAR_14, "ipc type %d is not implemented",
    VAR_15->cmd & ~VAR_9);
  return (VAR_0);
 }
 return (FUNC_4(VAR_14, VAR_15->semid, VAR_15->semnum, VAR_21, &VAR_19,
     VAR_14->td_retval));
}
