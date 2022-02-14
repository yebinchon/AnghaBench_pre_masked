
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct thread {int* td_retval; } ;
struct kqueue {scalar_t__ kq_count; int kq_head; int kq_lock; int kq_state; } ;
struct kevent {int dummy; } ;
struct knote {int kn_status; int kn_flags; scalar_t__ kn_fflags; scalar_t__ kn_data; struct kevent kn_kevent; TYPE_1__* kn_fop; } ;
struct knlist {int dummy; } ;
struct kevent_copyops {int (* k_copyout ) (int ,struct kevent*,int) ;int arg; } ;
typedef int sbintime_t ;
struct TYPE_2__ {scalar_t__ (* f_event ) (struct knote*,int ) ;int (* f_touch ) (struct knote*,struct kevent*,int ) ;int f_isfd; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct kqueue*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct kqueue*) ;
 int VAR_18 ;
 int FUNC_5 (struct kqueue*) ;
 int FUNC_6 (struct kqueue*) ;
 int VAR_19 ;
 int FUNC_7 (struct kqueue*) ;
 int FUNC_8 (struct kqueue*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct knote* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct knote*,int ) ;
 int FUNC_11 (int *,struct knote*,int ) ;
 scalar_t__ FUNC_12 (int*,int) ;
 int FUNC_13 (struct knote*) ;
 scalar_t__ FUNC_14 (struct knote*) ;
 int FUNC_15 (struct knote*) ;
 struct knlist* FUNC_16 (struct knote*) ;
 int FUNC_17 (struct knlist*) ;
 int VAR_24 ;
 struct knote* FUNC_18 (int ) ;
 int FUNC_19 (struct knote*,struct thread*) ;
 int FUNC_20 (struct knote*) ;
 int VAR_25 ;
 int FUNC_21 (struct kqueue*,int *,int,char*,int ) ;
 int FUNC_22 (struct kqueue*,int *,int,char*,int,int,int ) ;
 scalar_t__ FUNC_23 (struct knote*,int ) ;
 int FUNC_24 (struct knote*,struct kevent*,int ) ;
 int FUNC_25 (int ,struct kevent*,int) ;
 int FUNC_26 (int ,struct kevent*,int) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ FUNC_27 (struct timespec const*) ;
 int FUNC_28 (struct timespec const) ;

__attribute__((used)) static int
FUNC_29(struct kqueue *VAR_28, int VAR_29, struct kevent_copyops *VAR_30,
    const struct timespec *VAR_31, struct kevent *VAR_32, struct thread *VAR_33)
{
 struct kevent *VAR_34;
 struct knote *VAR_35, *VAR_36;
 struct knlist *VAR_37;
 sbintime_t VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45;

 VAR_40 = VAR_29;
 VAR_44 = 0;
 VAR_41 = 0;
 VAR_42 = 0;

 if (VAR_29 == 0)
  goto done_nl;

 VAR_39 = 0;
 if (VAR_31 != ((void*)0)) {
  if (VAR_31->tv_sec < 0 || VAR_31->tv_nsec < 0 ||
      VAR_31->tv_nsec >= 1000000000) {
   VAR_41 = VAR_2;
   goto done_nl;
  }
  if (FUNC_27(VAR_31)) {
   if (VAR_31->tv_sec <= VAR_10) {
    VAR_39 = FUNC_28(*VAR_31);
    if (FUNC_12(&VAR_38, VAR_39))
     VAR_38 += VAR_27;
    if (VAR_38 <= VAR_23 - VAR_39)
     VAR_38 += VAR_39;
    else
     VAR_38 = 0;
    VAR_39 >>= VAR_26;
   } else
    VAR_38 = 0;
  } else
   VAR_38 = -1;
 } else
  VAR_38 = 0;
 VAR_36 = FUNC_18(VAR_20);
 VAR_36->kn_status = VAR_14;
 FUNC_4(VAR_28);

retry:
 VAR_34 = VAR_32;
 if (VAR_28->kq_count == 0) {
  if (VAR_38 == -1) {
   VAR_41 = VAR_9;
  } else {
   VAR_28->kq_state |= VAR_19;
   VAR_41 = FUNC_22(VAR_28, &VAR_28->kq_lock, VAR_22 | VAR_21,
       "kqread", VAR_38, VAR_39, VAR_0);
  }
  if (VAR_41 == 0)
   goto retry;

  if (VAR_41 == VAR_3)
   VAR_41 = VAR_1;
  else if (VAR_41 == VAR_9)
   VAR_41 = 0;
  goto done;
 }

 FUNC_10(&VAR_28->kq_head, VAR_36, VAR_24);
 VAR_43 = 0;
 while (VAR_40) {
  FUNC_6(VAR_28);
  VAR_35 = FUNC_9(&VAR_28->kq_head);

  if ((VAR_35->kn_status == VAR_14 && VAR_35 != VAR_36) ||
      FUNC_14(VAR_35)) {
   if (VAR_43) {
    VAR_43 = 0;
    FUNC_1(VAR_28);
   }
   VAR_28->kq_state |= VAR_17;
   VAR_41 = FUNC_21(VAR_28, &VAR_28->kq_lock, VAR_22,
       "kqflxwt", 0);
   continue;
  }

  FUNC_11(&VAR_28->kq_head, VAR_35, VAR_24);
  if ((VAR_35->kn_status & VAR_12) == VAR_12) {
   VAR_35->kn_status &= ~VAR_15;
   VAR_28->kq_count--;
   continue;
  }
  if (VAR_35 == VAR_36) {
   FUNC_1(VAR_28);
   if (VAR_40 == VAR_29)
    goto retry;
   goto done;
  }
  FUNC_0(!FUNC_14(VAR_35),
      ("knote %p is unexpectedly in flux", VAR_35));

  if ((VAR_35->kn_flags & VAR_7) == VAR_7) {
   VAR_35->kn_status &= ~VAR_15;
   FUNC_13(VAR_35);
   VAR_28->kq_count--;
   FUNC_7(VAR_28);




   FUNC_19(VAR_35, VAR_33);
   FUNC_4(VAR_28);
   continue;
  } else if ((VAR_35->kn_flags & VAR_8) == VAR_8) {
   VAR_35->kn_status &= ~VAR_15;
   FUNC_13(VAR_35);
   VAR_28->kq_count--;
   FUNC_7(VAR_28);




   *VAR_34 = VAR_35->kn_kevent;
   FUNC_19(VAR_35, VAR_33);
   FUNC_4(VAR_28);
   VAR_35 = ((void*)0);
  } else {
   VAR_35->kn_status |= VAR_16;
   FUNC_13(VAR_35);
   FUNC_7(VAR_28);
   if ((VAR_35->kn_status & VAR_13) == VAR_13)
    FUNC_2(&VAR_25, VAR_42);
   VAR_37 = FUNC_16(VAR_35);
   if (VAR_35->kn_fop->f_event(VAR_35, 0) == 0) {
    FUNC_4(VAR_28);
    FUNC_3(&VAR_25, VAR_42);
    VAR_35->kn_status &= ~(VAR_15 | VAR_11 |
        VAR_16);
    FUNC_15(VAR_35);
    VAR_28->kq_count--;
    FUNC_17(VAR_37);
    VAR_43 = 1;
    continue;
   }
   VAR_45 = (!VAR_35->kn_fop->f_isfd &&
       VAR_35->kn_fop->f_touch != ((void*)0));
   if (VAR_45)
    VAR_35->kn_fop->f_touch(VAR_35, VAR_34, VAR_4);
   else
    *VAR_34 = VAR_35->kn_kevent;
   FUNC_4(VAR_28);
   FUNC_3(&VAR_25, VAR_42);
   if (VAR_35->kn_flags & (VAR_5 | VAR_6)) {




    if (VAR_45 == 0 && VAR_35->kn_flags & VAR_5) {
     VAR_35->kn_data = 0;
     VAR_35->kn_fflags = 0;
    }
    if (VAR_35->kn_flags & VAR_6)
     VAR_35->kn_status |= VAR_12;
    VAR_35->kn_status &= ~(VAR_15 | VAR_11);
    VAR_28->kq_count--;
   } else
    FUNC_10(&VAR_28->kq_head, VAR_35, VAR_24);

   VAR_35->kn_status &= ~VAR_16;
   FUNC_15(VAR_35);
   FUNC_17(VAR_37);
   VAR_43 = 1;
  }


  VAR_34++;
  VAR_44++;
  VAR_40--;

  if (VAR_44 == VAR_18) {
   VAR_43 = 0;
   FUNC_8(VAR_28);
   VAR_41 = VAR_30->k_copyout(VAR_30->arg, VAR_32, VAR_44);
   VAR_44 = 0;
   VAR_34 = VAR_32;
   FUNC_4(VAR_28);
   if (VAR_41)
    break;
  }
 }
 FUNC_11(&VAR_28->kq_head, VAR_36, VAR_24);
done:
 FUNC_6(VAR_28);
 FUNC_8(VAR_28);
 FUNC_20(VAR_36);
done_nl:
 FUNC_5(VAR_28);
 if (VAR_44 != 0)
  VAR_41 = VAR_30->k_copyout(VAR_30->arg, VAR_32, VAR_44);
 VAR_33->td_retval[0] = VAR_29 - VAR_40;
 return (VAR_41);
}
