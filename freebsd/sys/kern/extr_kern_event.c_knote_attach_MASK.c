
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kqueue {int kq_state; size_t kq_knlistsize; int kq_knhashmask; struct klist* kq_knhash; struct klist* kq_knlist; } ;
struct knote {size_t kn_id; TYPE_1__* kn_fop; } ;
struct klist {int dummy; } ;
struct TYPE_2__ {scalar_t__ f_isfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (struct klist*,struct knote*,int ) ;
 int FUNC_4 (struct knote*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_4, struct kqueue *VAR_5)
{
 struct klist *VAR_6;

 FUNC_0(FUNC_4(VAR_4), ("knote %p not marked influx", VAR_4));
 FUNC_2(VAR_5);

 if ((VAR_5->kq_state & VAR_2) != 0)
  return (VAR_0);
 if (VAR_4->kn_fop->f_isfd) {
  if (VAR_4->kn_id >= VAR_5->kq_knlistsize)
   return (VAR_1);
  VAR_6 = &VAR_5->kq_knlist[VAR_4->kn_id];
 } else {
  if (VAR_5->kq_knhash == ((void*)0))
   return (VAR_1);
  VAR_6 = &VAR_5->kq_knhash[FUNC_1(VAR_4->kn_id, VAR_5->kq_knhashmask)];
 }
 FUNC_3(VAR_6, VAR_4, VAR_3);
 return (0);
}
