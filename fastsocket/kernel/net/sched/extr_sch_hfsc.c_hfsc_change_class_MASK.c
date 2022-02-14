
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct tc_service_curve {scalar_t__ m1; scalar_t__ m2; } ;
struct nlattr {int dummy; } ;
struct TYPE_8__ {scalar_t__ classid; } ;
struct hfsc_class {int cl_flags; int refcnt; scalar_t__ level; int cl_cvtoff; int cl_pcvtoff; int children; int siblings; TYPE_4__ cl_common; void* cf_tree; void* vt_tree; TYPE_2__* qdisc; struct hfsc_class* cl_parent; struct hfsc_sched* sched; int rate_est; int bstats; } ;
struct hfsc_sched {int clhash; struct hfsc_class root; } ;
struct Qdisc {scalar_t__ handle; int dev_queue; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct TYPE_7__ {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 void* VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int *,int *,int ,struct nlattr*) ;
 int FUNC_3 (int *,int *,int ,struct nlattr*) ;
 int FUNC_4 (struct hfsc_class*) ;
 int FUNC_5 (struct hfsc_class*,struct tc_service_curve*) ;
 int FUNC_6 (struct hfsc_class*,struct tc_service_curve*,int ) ;
 int FUNC_7 (struct hfsc_class*,struct tc_service_curve*,int ) ;
 struct hfsc_class* FUNC_8 (scalar_t__,struct Qdisc*) ;
 int VAR_15 ;
 int FUNC_9 (struct Qdisc*,struct hfsc_class*) ;
 int FUNC_10 (struct hfsc_class*) ;
 struct hfsc_class* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 struct tc_service_curve* FUNC_13 (struct nlattr*) ;
 int FUNC_14 (struct nlattr**,int ,struct nlattr*,int ) ;
 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 int FUNC_15 () ;
 int FUNC_16 (struct Qdisc*,int *) ;
 int FUNC_17 (int *,TYPE_4__*) ;
 TYPE_2__* FUNC_18 (int ,int ,int *,scalar_t__) ;
 int FUNC_19 (struct Qdisc*) ;
 int FUNC_20 (TYPE_2__*) ;
 struct hfsc_sched* FUNC_21 (struct Qdisc*) ;
 int FUNC_22 (struct Qdisc*) ;
 int FUNC_23 (struct Qdisc*) ;
 int FUNC_24 (struct Qdisc*) ;
 int FUNC_25 (struct hfsc_class*,int ) ;
 int FUNC_26 (struct hfsc_class*,int ,int ) ;

__attribute__((used)) static int
FUNC_27(struct Qdisc *VAR_18, u32 VAR_19, u32 VAR_20,
    struct nlattr **VAR_21, unsigned long *VAR_22)
{
 struct hfsc_sched *VAR_23 = FUNC_21(VAR_18);
 struct hfsc_class *VAR_24 = (struct hfsc_class *)*VAR_22;
 struct hfsc_class *VAR_25 = ((void*)0);
 struct nlattr *VAR_26 = VAR_21[VAR_12];
 struct nlattr *VAR_27[VAR_9 + 1];
 struct tc_service_curve *VAR_28 = ((void*)0), *VAR_29 = ((void*)0), *VAR_30 = ((void*)0);
 u64 VAR_31;
 int VAR_32;

 if (VAR_26 == ((void*)0))
  return -VAR_1;

 VAR_32 = FUNC_14(VAR_27, VAR_9, VAR_26, VAR_15);
 if (VAR_32 < 0)
  return VAR_32;

 if (VAR_27[VAR_10]) {
  VAR_28 = FUNC_13(VAR_27[VAR_10]);
  if (VAR_28->m1 == 0 && VAR_28->m2 == 0)
   VAR_28 = ((void*)0);
 }

 if (VAR_27[VAR_8]) {
  VAR_29 = FUNC_13(VAR_27[VAR_8]);
  if (VAR_29->m1 == 0 && VAR_29->m2 == 0)
   VAR_29 = ((void*)0);
 }

 if (VAR_27[VAR_11]) {
  VAR_30 = FUNC_13(VAR_27[VAR_11]);
  if (VAR_30->m1 == 0 && VAR_30->m2 == 0)
   VAR_30 = ((void*)0);
 }

 if (VAR_24 != ((void*)0)) {
  if (VAR_20) {
   if (VAR_24->cl_parent &&
       VAR_24->cl_parent->cl_common.classid != VAR_20)
    return -VAR_1;
   if (VAR_24->cl_parent == ((void*)0) && VAR_20 != VAR_14)
    return -VAR_1;
  }
  VAR_31 = FUNC_15();

  if (VAR_21[VAR_13]) {
   VAR_32 = FUNC_3(&VAR_24->bstats, &VAR_24->rate_est,
           FUNC_22(VAR_18),
           VAR_21[VAR_13]);
   if (VAR_32)
    return VAR_32;
  }

  FUNC_23(VAR_18);
  if (VAR_28 != ((void*)0))
   FUNC_6(VAR_24, VAR_28, VAR_31);
  if (VAR_29 != ((void*)0))
   FUNC_5(VAR_24, VAR_29);
  if (VAR_30 != ((void*)0))
   FUNC_7(VAR_24, VAR_30, VAR_31);

  if (VAR_24->qdisc->q.qlen != 0) {
   if (VAR_24->cl_flags & VAR_6)
    FUNC_25(VAR_24, FUNC_20(VAR_24->qdisc));
   if (VAR_24->cl_flags & VAR_5)
    FUNC_26(VAR_24, 0, VAR_31);
  }
  FUNC_24(VAR_18);

  return 0;
 }

 if (VAR_20 == VAR_14)
  return -VAR_0;

 VAR_25 = &VAR_23->root;
 if (VAR_20) {
  VAR_25 = FUNC_8(VAR_20, VAR_18);
  if (VAR_25 == ((void*)0))
   return -VAR_3;
 }

 if (VAR_19 == 0 || FUNC_1(VAR_19 ^ VAR_18->handle) != 0)
  return -VAR_1;
 if (FUNC_8(VAR_19, VAR_18))
  return -VAR_0;

 if (VAR_28 == ((void*)0) && VAR_29 == ((void*)0))
  return -VAR_1;

 VAR_24 = FUNC_11(sizeof(struct hfsc_class), VAR_4);
 if (VAR_24 == ((void*)0))
  return -VAR_2;

 if (VAR_21[VAR_13]) {
  VAR_32 = FUNC_2(&VAR_24->bstats, &VAR_24->rate_est,
     FUNC_22(VAR_18),
     VAR_21[VAR_13]);
  if (VAR_32) {
   FUNC_10(VAR_24);
   return VAR_32;
  }
 }

 if (VAR_28 != ((void*)0))
  FUNC_6(VAR_24, VAR_28, 0);
 if (VAR_29 != ((void*)0))
  FUNC_5(VAR_24, VAR_29);
 if (VAR_30 != ((void*)0))
  FUNC_7(VAR_24, VAR_30, 0);

 VAR_24->cl_common.classid = VAR_19;
 VAR_24->refcnt = 1;
 VAR_24->sched = VAR_23;
 VAR_24->cl_parent = VAR_25;
 VAR_24->qdisc = FUNC_18(FUNC_19(VAR_18), VAR_18->dev_queue,
          &VAR_17, VAR_19);
 if (VAR_24->qdisc == ((void*)0))
  VAR_24->qdisc = &VAR_16;
 FUNC_0(&VAR_24->children);
 VAR_24->vt_tree = VAR_7;
 VAR_24->cf_tree = VAR_7;

 FUNC_23(VAR_18);
 FUNC_17(&VAR_23->clhash, &VAR_24->cl_common);
 FUNC_12(&VAR_24->siblings, &VAR_25->children);
 if (VAR_25->level == 0)
  FUNC_9(VAR_18, VAR_25);
 FUNC_4(VAR_25);
 VAR_24->cl_pcvtoff = VAR_25->cl_cvtoff;
 FUNC_24(VAR_18);

 FUNC_16(VAR_18, &VAR_23->clhash);

 *VAR_22 = (unsigned long)VAR_24;
 return 0;
}
