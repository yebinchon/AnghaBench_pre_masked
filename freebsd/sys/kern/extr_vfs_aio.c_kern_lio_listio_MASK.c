
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct sigevent {int dummy; } ;
struct proc {struct kaioinfo* p_aioinfo; } ;
struct kevent {int flags; uintptr_t ident; intptr_t data; int udata; int filter; } ;
struct kaioinfo {int kaio_liojoblist; int kaio_flags; } ;
struct TYPE_4__ {int sival_ptr; } ;
struct TYPE_5__ {scalar_t__ sigev_notify; int sigev_signo; int sigev_notify_kqueue; TYPE_1__ sigev_value; } ;
struct aioliojob {int lioj_flags; int lioj_count; int lioj_finished_count; int lioj_ksi; int klist; TYPE_2__ lioj_signal; } ;
struct aiocb_ops {int dummy; } ;
struct aiocb {int dummy; } ;
typedef int kev ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (struct kaioinfo*) ;
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
 int FUNC_3 (int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (int *,struct aioliojob*,int ) ;
 int FUNC_7 (int *,struct aioliojob*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct thread*,struct aiocb*,struct aioliojob*,int ,struct aiocb_ops*) ;
 int FUNC_10 (struct proc*) ;
 int FUNC_11 (struct proc*,TYPE_2__*,int *) ;
 int VAR_23 ;
 int FUNC_12 (struct sigevent*,TYPE_2__*,int) ;
 int VAR_24 ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ,struct kevent*,struct thread*,int ) ;
 int FUNC_16 (int *) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_17 (struct kevent*,int ,int) ;
 int FUNC_18 (struct kaioinfo**,int ,int,char*,int ) ;
 int FUNC_19 (int *) ;
 struct aioliojob* FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,struct aioliojob*) ;

__attribute__((used)) static int
FUNC_22(struct thread *VAR_27, int VAR_28, struct aiocb * const *VAR_29,
    struct aiocb **VAR_30, int VAR_31, struct sigevent *VAR_32,
    struct aiocb_ops *VAR_33)
{
 struct proc *VAR_34 = VAR_27->td_proc;
 struct aiocb *VAR_35;
 struct kaioinfo *VAR_36;
 struct aioliojob *VAR_37;
 struct kevent VAR_38;
 int VAR_39;
 int VAR_40, VAR_41;
 int VAR_42;

 if ((VAR_28 != VAR_14) && (VAR_28 != VAR_15))
  return (VAR_2);

 if (VAR_31 < 0 || VAR_31 > VAR_26)
  return (VAR_2);

 if (VAR_34->p_aioinfo == ((void*)0))
  FUNC_10(VAR_34);

 VAR_36 = VAR_34->p_aioinfo;

 VAR_37 = FUNC_20(VAR_23, VAR_16);
 VAR_37->lioj_flags = 0;
 VAR_37->lioj_count = 0;
 VAR_37->lioj_finished_count = 0;
 FUNC_14(&VAR_37->klist, FUNC_1(VAR_36));
 FUNC_16(&VAR_37->lioj_ksi);




 if (VAR_32 && (VAR_28 == VAR_14)) {
  FUNC_12(VAR_32, &VAR_37->lioj_signal, sizeof(VAR_37->lioj_signal));
  if (VAR_37->lioj_signal.sigev_notify == VAR_19) {

   FUNC_17(&VAR_38, 0, sizeof(VAR_38));
   VAR_38.filter = VAR_5;
   VAR_38.flags = VAR_6 | VAR_7 | VAR_8;
   VAR_38.ident = (uintptr_t)VAR_29;
   VAR_38.data = (intptr_t)VAR_37;

   VAR_38.udata = VAR_37->lioj_signal.sigev_value.sival_ptr;
   VAR_39 = FUNC_15(
       VAR_37->lioj_signal.sigev_notify_kqueue, &VAR_38, VAR_27,
       VAR_16);
   if (VAR_39) {
    FUNC_21(VAR_23, VAR_37);
    return (VAR_39);
   }
  } else if (VAR_37->lioj_signal.sigev_notify == VAR_20) {
   ;
  } else if (VAR_37->lioj_signal.sigev_notify == VAR_21 ||
      VAR_37->lioj_signal.sigev_notify == VAR_22) {
    if (!FUNC_8(VAR_37->lioj_signal.sigev_signo)) {
     FUNC_21(VAR_23, VAR_37);
     return VAR_2;
    }
    VAR_37->lioj_flags |= VAR_11;
  } else {
   FUNC_21(VAR_23, VAR_37);
   return VAR_2;
  }
 }

 FUNC_0(VAR_36);
 FUNC_6(&VAR_36->kaio_liojoblist, VAR_37, VAR_25);






 VAR_37->lioj_count = 1;
 FUNC_2(VAR_36);




 VAR_40 = 0;
 VAR_41 = 0;
 for (VAR_42 = 0; VAR_42 < VAR_31; VAR_42++) {
  VAR_35 = VAR_30[VAR_42];
  if (VAR_35 != ((void*)0)) {
   VAR_39 = FUNC_9(VAR_27, VAR_35, VAR_37, VAR_13, VAR_33);
   if (VAR_39 == VAR_0)
    VAR_40++;
   else if (VAR_39 != 0)
    VAR_41++;
  }
 }

 VAR_39 = 0;
 FUNC_0(VAR_36);
 if (VAR_28 == VAR_15) {
  while (VAR_37->lioj_count - 1 != VAR_37->lioj_finished_count) {
   VAR_36->kaio_flags |= VAR_9;
   VAR_39 = FUNC_18(&VAR_34->p_aioinfo, FUNC_1(VAR_36),
       VAR_18 | VAR_17, "aiospn", 0);
   if (VAR_39 == VAR_4)
    VAR_39 = VAR_1;
   if (VAR_39)
    break;
  }
 } else {
  if (VAR_37->lioj_count - 1 == VAR_37->lioj_finished_count) {
   if (VAR_37->lioj_signal.sigev_notify == VAR_19) {
    VAR_37->lioj_flags |= VAR_10;
    FUNC_3(&VAR_37->klist, 1);
   }
   if ((VAR_37->lioj_flags & (VAR_11|VAR_12))
       == VAR_11
       && (VAR_37->lioj_signal.sigev_notify == VAR_21 ||
       VAR_37->lioj_signal.sigev_notify == VAR_22)) {
    FUNC_11(VAR_34, &VAR_37->lioj_signal,
         &VAR_37->lioj_ksi);
    VAR_37->lioj_flags |= VAR_12;
   }
  }
 }
 VAR_37->lioj_count--;
 if (VAR_37->lioj_count == 0) {
  FUNC_7(&VAR_36->kaio_liojoblist, VAR_37, VAR_25);
  FUNC_13(&VAR_37->klist, VAR_24, 1);
  FUNC_4(VAR_34);
  FUNC_19(&VAR_37->lioj_ksi);
  FUNC_5(VAR_34);
  FUNC_2(VAR_36);
  FUNC_21(VAR_23, VAR_37);
 } else
  FUNC_2(VAR_36);

 if (VAR_41)
  return (VAR_3);
 else if (VAR_40)
  return (VAR_0);
 else
  return (VAR_39);
}
