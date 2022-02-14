
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct kqueue {int dummy; } ;
struct kq_timer_cb_data {int c; } ;
struct kevent {int flags; int data; int fflags; } ;
struct TYPE_2__ {struct kq_timer_cb_data* p_v; } ;
struct knote {int kn_status; int kn_data; int kn_flags; int kn_fflags; struct kevent kn_kevent; int kn_sdata; int kn_sfflags; struct kqueue* kn_kq; TYPE_1__ kn_ptr; } ;
typedef int sbintime_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct knote*,int ) ;
 int FUNC_4 (struct knote*,int *) ;
 int FUNC_5 (struct knote*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(struct knote *VAR_5, struct kevent *VAR_6, u_long VAR_7)
{
 struct kq_timer_cb_data *VAR_8;
 struct kqueue *VAR_9;
 sbintime_t VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 128:

  if (VAR_6->flags & VAR_0) {
   VAR_8 = VAR_5->kn_ptr.p_v;


   FUNC_2(&VAR_8->c);
   VAR_9 = VAR_5->kn_kq;
   FUNC_0(VAR_9);
   if (VAR_5->kn_status & VAR_4)
    FUNC_5(VAR_5);

   VAR_5->kn_status &= ~VAR_3;
   VAR_5->kn_data = 0;
   FUNC_1(VAR_9);


   VAR_5->kn_sfflags = VAR_6->fflags;
   VAR_5->kn_sdata = VAR_6->data;
   VAR_11 = FUNC_4(VAR_5, &VAR_10);
   if (VAR_11 != 0) {
      VAR_5->kn_flags |= VAR_2;
    VAR_5->kn_data = VAR_11;
   } else
      FUNC_3(VAR_5, VAR_10);
  }
  break;

        case 129:
  *VAR_6 = VAR_5->kn_kevent;
  if (VAR_5->kn_flags & VAR_1) {
   VAR_5->kn_data = 0;
   VAR_5->kn_fflags = 0;
  }
  break;

 default:
  FUNC_6("filt_timertouch() - invalid type (%ld)", VAR_7);
  break;
 }
}
