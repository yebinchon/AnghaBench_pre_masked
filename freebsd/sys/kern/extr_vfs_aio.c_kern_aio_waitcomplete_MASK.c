
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct TYPE_6__ {int ru_msgrcv; int ru_msgsnd; int ru_inblock; int ru_oublock; } ;
struct thread {long* td_retval; TYPE_3__ td_ru; struct proc* td_proc; } ;
struct proc {struct kaioinfo* p_aioinfo; } ;
struct kaioinfo {int kaio_flags; int kaio_done; } ;
struct TYPE_4__ {long status; long error; } ;
struct TYPE_5__ {TYPE_1__ _aiocb_private; } ;
struct kaiocb {int jobflags; scalar_t__ msgrcv; scalar_t__ msgsnd; scalar_t__ inblock; scalar_t__ outblock; TYPE_2__ uaiocb; struct aiocb* ujob; } ;
struct aiocb_ops {int (* store_status ) (struct aiocb*,long) ;int (* store_error ) (struct aiocb*,long) ;int (* store_aiocb ) (struct aiocb**,struct aiocb*) ;} ;
struct aiocb {int dummy; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (struct kaioinfo*) ;
 long VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct kaiocb* FUNC_4 (int *) ;
 int FUNC_5 (struct timeval*,struct timespec*) ;
 int FUNC_6 (struct kaiocb*) ;
 int FUNC_7 (struct proc*) ;
 scalar_t__ FUNC_8 (struct timeval*) ;
 long FUNC_9 (struct kaioinfo**,int ,int,char*,int) ;
 int FUNC_10 (struct aiocb**,struct aiocb*) ;
 int FUNC_11 (struct aiocb**,struct aiocb*) ;
 int FUNC_12 (struct aiocb*,long) ;
 int FUNC_13 (struct aiocb*,long) ;
 int FUNC_14 (struct timeval*) ;

__attribute__((used)) static int
FUNC_15(struct thread *VAR_8, struct aiocb **VAR_9,
    struct timespec *VAR_10, struct aiocb_ops *VAR_11)
{
 struct proc *VAR_12 = VAR_8->td_proc;
 struct timeval VAR_13;
 struct kaioinfo *VAR_14;
 struct kaiocb *VAR_15;
 struct aiocb *VAR_16;
 long VAR_17, VAR_18;
 int VAR_19;

 VAR_11->store_aiocb(VAR_9, ((void*)0));

 if (VAR_10 == ((void*)0)) {
  VAR_19 = 0;
 } else if (VAR_10->tv_sec == 0 && VAR_10->tv_nsec == 0) {
  VAR_19 = -1;
 } else {
  if ((VAR_10->tv_nsec < 0) || (VAR_10->tv_nsec >= 1000000000))
   return (VAR_1);

  FUNC_5(&VAR_13, VAR_10);
  if (FUNC_8(&VAR_13))
   return (VAR_1);
  VAR_19 = FUNC_14(&VAR_13);
 }

 if (VAR_12->p_aioinfo == ((void*)0))
  FUNC_7(VAR_12);
 VAR_14 = VAR_12->p_aioinfo;

 VAR_17 = 0;
 VAR_15 = ((void*)0);
 FUNC_0(VAR_14);
 while ((VAR_15 = FUNC_4(&VAR_14->kaio_done)) == ((void*)0)) {
  if (VAR_19 == -1) {
   VAR_17 = VAR_3;
   break;
  }
  VAR_14->kaio_flags |= VAR_5;
  VAR_17 = FUNC_9(&VAR_12->p_aioinfo, FUNC_1(VAR_14), VAR_7 | VAR_6,
      "aiowc", VAR_19);
  if (VAR_19 && VAR_17 == VAR_2)
   VAR_17 = VAR_0;
  if (VAR_17)
   break;
 }

 if (VAR_15 != ((void*)0)) {
  FUNC_3(VAR_15->jobflags & VAR_4);
  VAR_16 = VAR_15->ujob;
  VAR_18 = VAR_15->uaiocb._aiocb_private.status;
  VAR_17 = VAR_15->uaiocb._aiocb_private.error;
  VAR_8->td_retval[0] = VAR_18;
  VAR_8->td_ru.ru_oublock += VAR_15->outblock;
  VAR_8->td_ru.ru_inblock += VAR_15->inblock;
  VAR_8->td_ru.ru_msgsnd += VAR_15->msgsnd;
  VAR_8->td_ru.ru_msgrcv += VAR_15->msgrcv;
  FUNC_6(VAR_15);
  FUNC_2(VAR_14);
  VAR_11->store_aiocb(VAR_9, VAR_16);
  VAR_11->store_error(VAR_16, VAR_17);
  VAR_11->store_status(VAR_16, VAR_18);
 } else
  FUNC_2(VAR_14);

 return (VAR_17);
}
