
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__* td_retval; } ;
struct msqid_ds {int dummy; } ;
struct linux_msgctl_args {int cmd; int buf; int msqid; } ;
struct l_msqid64_ds {long msgpool; int msgseg; int msgtql; int msgssz; scalar_t__ msgmni; scalar_t__ msgmnb; int msgmax; scalar_t__ msgmap; } ;
struct l_msginfo {long msgpool; int msgseg; int msgtql; int msgssz; scalar_t__ msgmni; scalar_t__ msgmnb; int msgmax; scalar_t__ msgmap; } ;
typedef int linux_msqid64 ;
typedef int linux_msginfo ;
struct TYPE_2__ {scalar_t__ msgmni; int msgseg; int msgtql; int msgssz; scalar_t__ msgmnb; int msgmax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct msqid_ds*,struct l_msqid64_ds*) ;
 int FUNC_2 (struct l_msqid64_ds*,int ,int) ;
 int FUNC_3 (struct thread*,int ,int,struct msqid_ds*) ;
 int FUNC_4 (int,struct l_msqid64_ds*,int ) ;
 int FUNC_5 (int,struct l_msqid64_ds*,int ) ;
 int FUNC_6 (struct l_msqid64_ds*,struct msqid_ds*) ;
 int FUNC_7 (struct l_msqid64_ds*,int ,int) ;
 TYPE_1__ VAR_4 ;

int
FUNC_8(struct thread *VAR_5, struct linux_msgctl_args *VAR_6)
{
 int VAR_7, VAR_8;
 struct l_msqid64_ds VAR_9;
 struct msqid_ds VAR_10;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));

 VAR_8 = VAR_6->cmd & ~VAR_3;
 switch (VAR_8) {
 case 132:
 case 128: {
  struct l_msginfo VAR_11;

  FUNC_7(&VAR_11, 0, sizeof(VAR_11));




  VAR_11.msgpool = (long)VAR_4.msgmni *
      (long)VAR_4.msgmnb / 1024L;
  VAR_11.msgmap = VAR_4.msgmnb;
  VAR_11.msgmax = VAR_4.msgmax;
  VAR_11.msgmnb = VAR_4.msgmnb;
  VAR_11.msgmni = VAR_4.msgmni;
  VAR_11.msgssz = VAR_4.msgssz;
  VAR_11.msgtql = VAR_4.msgtql;
  VAR_11.msgseg = VAR_4.msgseg;
  VAR_7 = FUNC_2(&VAR_11, FUNC_0(VAR_6->buf),
      sizeof(VAR_11));
  if (VAR_7 == 0)
      VAR_5->td_retval[0] = VAR_4.msgmni;

  return (VAR_7);
 }





 case 129:

  break;

 case 130:
  VAR_7 = FUNC_4(VAR_6->cmd & VAR_3,
      &VAR_9, FUNC_0(VAR_6->buf));
  if (VAR_7 != 0)
   return (VAR_7);
  FUNC_6(&VAR_9, &VAR_10);
  break;

 case 131:

  break;

 default:
  return (VAR_1);
  break;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6->msqid, VAR_8, &VAR_10);
 if (VAR_7 != 0) {
  if (VAR_8 == 131 && VAR_7 == VAR_0)
   return (VAR_2);
  if (VAR_8 != 131 || VAR_7 != VAR_1)
   return (VAR_7);
 }

 if (VAR_8 == 129) {
  FUNC_1(&VAR_10, &VAR_9);
  return (FUNC_5(VAR_6->cmd & VAR_3,
      &VAR_9, FUNC_0(VAR_6->buf)));
 }

 return (0);
}
