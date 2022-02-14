
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msqid_ds {int dummy; } ;
struct msgctl_args {int msqid; int cmd; int buf; } ;
typedef int msqbuf ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct msqid_ds*,int) ;
 int FUNC_2 (struct msqid_ds*,int ,int) ;
 int FUNC_3 (struct thread*,int,int,struct msqid_ds*) ;

int
FUNC_4(struct thread *VAR_2, struct msgctl_args *VAR_3)
{
 int VAR_4 = VAR_3->msqid;
 int VAR_5 = VAR_3->cmd;
 struct msqid_ds VAR_6;
 int VAR_7;

 FUNC_0(("call to msgctl(%d, %d, %p)\n", VAR_4, VAR_5, VAR_3->buf));
 if (VAR_5 == VAR_0 &&
     (VAR_7 = FUNC_1(VAR_3->buf, &VAR_6, sizeof(VAR_6))) != 0)
  return (VAR_7);
 VAR_7 = FUNC_3(VAR_2, VAR_4, VAR_5, &VAR_6);
 if (VAR_5 == VAR_1 && VAR_7 == 0)
  VAR_7 = FUNC_2(&VAR_6, VAR_3->buf, sizeof(struct msqid_ds));
 return (VAR_7);
}
