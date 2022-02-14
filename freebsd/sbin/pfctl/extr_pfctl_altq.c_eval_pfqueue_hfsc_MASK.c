
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct service_curve {scalar_t__ m1; scalar_t__ m2; scalar_t__ d; } ;
struct TYPE_10__ {int children; int lssc; int rtsc; int default_classes; } ;
struct TYPE_7__ {int flags; scalar_t__ lssc_m1; scalar_t__ lssc_m2; scalar_t__ lssc_d; } ;
struct TYPE_8__ {TYPE_2__ hfsc_opts; } ;
struct TYPE_9__ {TYPE_3__ pq_u; } ;
struct pfctl_altq {TYPE_5__ meta; TYPE_4__ pa; } ;
struct pfctl {int dummy; } ;
struct hfsc_opts_v1 {scalar_t__ lssc_m1; scalar_t__ lssc_m2; int flags; scalar_t__ rtsc_m1; scalar_t__ rtsc_m2; scalar_t__ ulsc_m1; scalar_t__ ulsc_m2; scalar_t__ lssc_d; scalar_t__ rtsc_d; } ;
struct TYPE_6__ {struct hfsc_opts_v1 hfsc_opts; } ;
struct pf_altq {scalar_t__ ifbandwidth; scalar_t__ bandwidth; int qname; TYPE_1__ pq_u; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct service_curve*) ;
 int FUNC_2 (int *,struct service_curve*) ;
 int FUNC_3 (double) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(struct pfctl *VAR_1, struct pf_altq *VAR_2, struct pfctl_altq *VAR_3,
    struct pfctl_altq *VAR_4)
{
 struct hfsc_opts_v1 *VAR_5;
 struct service_curve VAR_6;

 VAR_5 = &VAR_2->pq_u.hfsc_opts;

 if (VAR_4 == ((void*)0)) {

  VAR_5->lssc_m1 = VAR_2->ifbandwidth;
  VAR_5->lssc_m2 = VAR_2->ifbandwidth;
  VAR_5->lssc_d = 0;
  return (0);
 }


 if (VAR_4->meta.children == 1) {
  FUNC_0(&VAR_4->meta.rtsc);
  FUNC_0(&VAR_4->meta.lssc);
 }

 if (VAR_4->pa.pq_u.hfsc_opts.flags & VAR_0) {
  FUNC_4("adding %s would make default queue %s not a leaf",
      VAR_2->qname, VAR_2->parent);
  return (-1);
 }

 if (VAR_2->pq_u.hfsc_opts.flags & VAR_0)
  VAR_3->meta.default_classes++;


 if (VAR_5->lssc_m2 == 0)
  VAR_5->lssc_m2 = VAR_2->bandwidth;

 if ((VAR_5->rtsc_m1 > 0 && VAR_5->rtsc_m2 == 0) ||
     (VAR_5->lssc_m1 > 0 && VAR_5->lssc_m2 == 0) ||
     (VAR_5->ulsc_m1 > 0 && VAR_5->ulsc_m2 == 0)) {
  FUNC_4("m2 is zero for %s", VAR_2->qname);
  return (-1);
 }

 if ((VAR_5->rtsc_m1 < VAR_5->rtsc_m2 && VAR_5->rtsc_m1 != 0) ||
     (VAR_5->lssc_m1 < VAR_5->lssc_m2 && VAR_5->lssc_m1 != 0) ||
     (VAR_5->ulsc_m1 < VAR_5->ulsc_m2 && VAR_5->ulsc_m1 != 0)) {
  FUNC_4("m1 must be zero for convex curve: %s", VAR_2->qname);
  return (-1);
 }
 if (VAR_5->rtsc_m2 != 0) {

  VAR_6.m1 = VAR_5->rtsc_m1;
  VAR_6.d = VAR_5->rtsc_d;
  VAR_6.m2 = VAR_5->rtsc_m2;
  FUNC_1(&VAR_4->meta.rtsc, &VAR_6);

  VAR_6.m1 = 0;
  VAR_6.d = 0;
  VAR_6.m2 = VAR_2->ifbandwidth / 100 * 80;
  if (!FUNC_2(&VAR_4->meta.rtsc, &VAR_6)) {
   FUNC_4("real-time sc exceeds 80%% of the interface "
       "bandwidth (%s)", FUNC_3((double)VAR_6.m2));
   return (-1);
  }
 }


 if (VAR_5->lssc_m2 != 0) {

  VAR_6.m1 = VAR_5->lssc_m1;
  VAR_6.d = VAR_5->lssc_d;
  VAR_6.m2 = VAR_5->lssc_m2;
  FUNC_1(&VAR_4->meta.lssc, &VAR_6);

  VAR_6.m1 = VAR_4->pa.pq_u.hfsc_opts.lssc_m1;
  VAR_6.d = VAR_4->pa.pq_u.hfsc_opts.lssc_d;
  VAR_6.m2 = VAR_4->pa.pq_u.hfsc_opts.lssc_m2;
  if (!FUNC_2(&VAR_4->meta.lssc, &VAR_6)) {
   FUNC_4("linkshare sc exceeds parent's sc");
   return (-1);
  }
 }


 if (VAR_5->ulsc_m2 != 0) {
  if (VAR_5->ulsc_m1 > VAR_2->ifbandwidth ||
      VAR_5->ulsc_m2 > VAR_2->ifbandwidth) {
   FUNC_4("upper-limit larger than interface bandwidth");
   return (-1);
  }
  if (VAR_5->rtsc_m2 != 0 && VAR_5->rtsc_m2 > VAR_5->ulsc_m2) {
   FUNC_4("upper-limit sc smaller than real-time sc");
   return (-1);
  }
 }

 return (0);
}
