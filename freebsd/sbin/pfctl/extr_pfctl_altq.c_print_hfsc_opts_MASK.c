
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfsc_opts_v1 {int flags; scalar_t__ rtsc_m2; scalar_t__ ulsc_m2; scalar_t__ lssc_m2; scalar_t__ lssc_d; scalar_t__ rtsc_d; scalar_t__ ulsc_d; int ulsc_m1; int lssc_m1; int rtsc_m1; } ;
struct TYPE_4__ {struct hfsc_opts_v1 hfsc_opts; } ;
struct pf_altq {scalar_t__ bandwidth; TYPE_1__ pq_u; } ;
struct node_hfsc_sc {int dummy; } ;
struct TYPE_5__ {struct node_hfsc_sc upperlimit; struct node_hfsc_sc linkshare; struct node_hfsc_sc realtime; } ;
struct TYPE_6__ {TYPE_2__ hfsc_opts; } ;
struct node_queue_opt {TYPE_3__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,struct node_hfsc_sc const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(const struct pf_altq *VAR_6, const struct node_queue_opt *VAR_7)
{
 const struct hfsc_opts_v1 *VAR_8;
 const struct node_hfsc_sc *VAR_9, *VAR_10, *VAR_11;

 VAR_8 = &VAR_6->pq_u.hfsc_opts;
 if (VAR_7 == ((void*)0))
  VAR_9 = VAR_10 = VAR_11 = ((void*)0);
 else {
  VAR_9 = &VAR_7->data.hfsc_opts.realtime;
  VAR_10 = &VAR_7->data.hfsc_opts.linkshare;
  VAR_11 = &VAR_7->data.hfsc_opts.upperlimit;
 }

 if (VAR_8->flags || VAR_8->rtsc_m2 != 0 || VAR_8->ulsc_m2 != 0 ||
     (VAR_8->lssc_m2 != 0 && (VAR_8->lssc_m2 != VAR_6->bandwidth ||
     VAR_8->lssc_d != 0))) {
  FUNC_1("hfsc(");
  if (VAR_8->flags & VAR_4)
   FUNC_1(" red");
  if (VAR_8->flags & VAR_3)
   FUNC_1(" ecn");
  if (VAR_8->flags & VAR_5)
   FUNC_1(" rio");
  if (VAR_8->flags & VAR_1)
   FUNC_1(" codel");
  if (VAR_8->flags & VAR_0)
   FUNC_1(" cleardscp");
  if (VAR_8->flags & VAR_2)
   FUNC_1(" default");
  if (VAR_8->rtsc_m2 != 0)
   FUNC_0("realtime", VAR_8->rtsc_m1, VAR_8->rtsc_d,
       VAR_8->rtsc_m2, VAR_9);
  if (VAR_8->lssc_m2 != 0 && (VAR_8->lssc_m2 != VAR_6->bandwidth ||
      VAR_8->lssc_d != 0))
   FUNC_0("linkshare", VAR_8->lssc_m1, VAR_8->lssc_d,
       VAR_8->lssc_m2, VAR_10);
  if (VAR_8->ulsc_m2 != 0)
   FUNC_0("upperlimit", VAR_8->ulsc_m1, VAR_8->ulsc_d,
       VAR_8->ulsc_m2, VAR_11);
  FUNC_1(" ) ");

  return (1);
 } else
  return (0);
}
