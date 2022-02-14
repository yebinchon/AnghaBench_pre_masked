
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct kqueue {int kq_knhashmask; struct klist* kq_knhash; struct klist* kq_knlist; } ;
struct TYPE_3__ {int filter; } ;
struct knote {int kn_status; int kn_influx; size_t kn_id; TYPE_2__* kn_fop; TYPE_1__ kn_kevent; int * kn_fp; struct kqueue* kn_kq; } ;
struct klist {int dummy; } ;
struct TYPE_4__ {scalar_t__ f_isfd; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (struct kqueue*) ;
 int FUNC_4 (struct kqueue*) ;
 int FUNC_5 (struct klist*) ;
 int FUNC_6 (struct klist*,struct knote*,int ,int ) ;
 int FUNC_7 (int *,struct thread*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct knote*) ;
 int FUNC_9 (struct knote*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct knote *VAR_4, struct thread *VAR_5)
{
 struct kqueue *VAR_6;
 struct klist *VAR_7;

 VAR_6 = VAR_4->kn_kq;

 FUNC_0((VAR_4->kn_status & VAR_0) != 0,
     ("knote %p still attached", VAR_4));
 FUNC_3(VAR_6);

 FUNC_2(VAR_6);
 FUNC_0(VAR_4->kn_influx == 1,
     ("knote_drop called on %p with influx %d", VAR_4, VAR_4->kn_influx));

 if (VAR_4->kn_fop->f_isfd)
  VAR_7 = &VAR_6->kq_knlist[VAR_4->kn_id];
 else
  VAR_7 = &VAR_6->kq_knhash[FUNC_1(VAR_4->kn_id, VAR_6->kq_knhashmask)];

 if (!FUNC_5(VAR_7))
  FUNC_6(VAR_7, VAR_4, VAR_3, VAR_2);
 if (VAR_4->kn_status & VAR_1)
  FUNC_8(VAR_4);
 FUNC_4(VAR_6);

 if (VAR_4->kn_fop->f_isfd) {
  FUNC_7(VAR_4->kn_fp, VAR_5);
  VAR_4->kn_fp = ((void*)0);
 }
 FUNC_10(VAR_4->kn_kevent.filter);
 VAR_4->kn_fop = ((void*)0);
 FUNC_9(VAR_4);
}
