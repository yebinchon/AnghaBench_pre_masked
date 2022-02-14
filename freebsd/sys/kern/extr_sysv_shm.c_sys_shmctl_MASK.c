
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; } ;
struct shmid_ds {int dummy; } ;
struct shmctl_args {int cmd; int buf; int shmid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct shmid_ds*,int) ;
 int FUNC_1 (struct shmid_ds*,int ,size_t) ;
 int FUNC_2 (struct thread*,int ,int,void*,size_t*) ;

int
FUNC_3(struct thread *VAR_5, struct shmctl_args *VAR_6)
{
 int VAR_7;
 struct shmid_ds VAR_8;
 size_t VAR_9;






 if (VAR_6->cmd == VAR_1 || VAR_6->cmd == VAR_3 ||
     VAR_6->cmd == VAR_4)
  return (VAR_0);


 if (VAR_6->cmd == VAR_2) {
  if ((VAR_7 = FUNC_0(VAR_6->buf, &VAR_8, sizeof(struct shmid_ds))))
   goto done;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_6->shmid, VAR_6->cmd, (void *)&VAR_8, &VAR_9);
 if (VAR_7)
  goto done;


 switch (VAR_6->cmd) {
 case 128:
  VAR_7 = FUNC_1(&VAR_8, VAR_6->buf, VAR_9);
  break;
 }

done:
 if (VAR_7) {

  VAR_5->td_retval[0] = -1;
 }
 return (VAR_7);
}
