
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int rate; } ;
struct qdisc_rate_table {TYPE_1__ rate; } ;
struct nlattr {int dummy; } ;
struct TYPE_7__ {int classid; } ;
struct cbq_class {int refcnt; int minidle; scalar_t__ ewma_log; scalar_t__ maxidle; scalar_t__ avpkt; int overlimit; struct cbq_class* tparent; struct cbq_class* share; struct cbq_class* borrow; struct qdisc_rate_table* R_tab; int weight; int allot; int quantum; struct Qdisc* qdisc; TYPE_2__ common; TYPE_4__* q; int rate_est; int bstats; int * next_alive; } ;
struct cbq_sched_data {int hgenerator; int clhash; struct cbq_class link; } ;
struct Qdisc {int handle; int dev_queue; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct TYPE_9__ {TYPE_3__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_14 ;
 int FUNC_2 (struct cbq_class*) ;
 int FUNC_3 (struct cbq_class*) ;
 struct cbq_class* FUNC_4 (struct cbq_sched_data*,int) ;
 int FUNC_5 (struct cbq_class*) ;
 int FUNC_6 (struct cbq_class*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct cbq_sched_data*,struct cbq_class*) ;
 int FUNC_8 (struct cbq_class*,int ) ;
 int FUNC_9 (struct cbq_class*,int ) ;
 int FUNC_10 (struct cbq_class*,int ) ;
 int FUNC_11 (struct cbq_class*,int ) ;
 int FUNC_12 (struct cbq_class*,int ) ;
 int FUNC_13 (int *,int *,int ,struct nlattr*) ;
 int FUNC_14 (int *,int *,int ,struct nlattr*) ;
 int FUNC_15 (struct cbq_class*) ;
 struct cbq_class* FUNC_16 (int,int ) ;
 int FUNC_17 (struct nlattr*) ;
 int FUNC_18 (struct nlattr**,int ,struct nlattr*,int ) ;
 TYPE_4__ VAR_17 ;
 int VAR_18 ;
 int FUNC_19 (struct Qdisc*,int *) ;
 TYPE_4__* FUNC_20 (int ,int ,int *,int) ;
 int FUNC_21 (struct Qdisc*) ;
 struct qdisc_rate_table* FUNC_22 (int ,struct nlattr*) ;
 struct cbq_sched_data* FUNC_23 (struct Qdisc*) ;
 int FUNC_24 (struct qdisc_rate_table*) ;
 int FUNC_25 (struct Qdisc*) ;
 int FUNC_26 (struct Qdisc*) ;
 int FUNC_27 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_28(struct Qdisc *VAR_19, u32 VAR_20, u32 VAR_21, struct nlattr **VAR_22,
   unsigned long *VAR_23)
{
 int VAR_24;
 struct cbq_sched_data *VAR_25 = FUNC_23(VAR_19);
 struct cbq_class *VAR_26 = (struct cbq_class*)*VAR_23;
 struct nlattr *VAR_27 = VAR_22[VAR_12];
 struct nlattr *VAR_28[VAR_6 + 1];
 struct cbq_class *VAR_29;
 struct qdisc_rate_table *VAR_30 = ((void*)0);

 if (VAR_27 == ((void*)0))
  return -VAR_0;

 VAR_24 = FUNC_18(VAR_28, VAR_6, VAR_27, VAR_16);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_26) {

  if (VAR_21) {
   if (VAR_26->tparent &&
       VAR_26->tparent->common.classid != VAR_21)
    return -VAR_0;
   if (!VAR_26->tparent && VAR_21 != VAR_14)
    return -VAR_0;
  }

  if (VAR_28[VAR_9]) {
   VAR_30 = FUNC_22(FUNC_17(VAR_28[VAR_9]),
           VAR_28[VAR_10]);
   if (VAR_30 == ((void*)0))
    return -VAR_0;
  }

  if (VAR_22[VAR_13]) {
   VAR_24 = FUNC_14(&VAR_26->bstats, &VAR_26->rate_est,
          FUNC_25(VAR_19),
          VAR_22[VAR_13]);
   if (VAR_24) {
    if (VAR_30)
     FUNC_24(VAR_30);
    return VAR_24;
   }
  }


  FUNC_26(VAR_19);

  if (VAR_26->next_alive != ((void*)0))
   FUNC_5(VAR_26);

  if (VAR_30) {
   FUNC_24(VAR_26->R_tab);
   VAR_26->R_tab = VAR_30;
  }

  if (VAR_28[VAR_5])
   FUNC_9(VAR_26, FUNC_17(VAR_28[VAR_5]));

  if (VAR_28[VAR_11]) {
   FUNC_7(VAR_25, VAR_26);
   FUNC_12(VAR_26, FUNC_17(VAR_28[VAR_11]));
  }

  if (VAR_28[VAR_7])
   FUNC_10(VAR_26, FUNC_17(VAR_28[VAR_7]));






  if (VAR_28[VAR_4])
   FUNC_8(VAR_26, FUNC_17(VAR_28[VAR_4]));

  if (VAR_26->q->q.qlen)
   FUNC_2(VAR_26);

  FUNC_27(VAR_19);

  return 0;
 }

 if (VAR_21 == VAR_14)
  return -VAR_0;

 if (VAR_28[VAR_11] == ((void*)0) || VAR_28[VAR_9] == ((void*)0) ||
     VAR_28[VAR_5] == ((void*)0))
  return -VAR_0;

 VAR_30 = FUNC_22(FUNC_17(VAR_28[VAR_9]), VAR_28[VAR_10]);
 if (VAR_30 == ((void*)0))
  return -VAR_0;

 if (VAR_20) {
  VAR_24 = -VAR_0;
  if (FUNC_0(VAR_20^VAR_19->handle) || FUNC_4(VAR_25, VAR_20))
   goto failure;
 } else {
  int VAR_31;
  VAR_20 = FUNC_1(VAR_19->handle,0x8000);

  for (VAR_31=0; VAR_31<0x8000; VAR_31++) {
   if (++VAR_25->hgenerator >= 0x8000)
    VAR_25->hgenerator = 1;
   if (FUNC_4(VAR_25, VAR_20|VAR_25->hgenerator) == ((void*)0))
    break;
  }
  VAR_24 = -VAR_2;
  if (VAR_31 >= 0x8000)
   goto failure;
  VAR_20 = VAR_20|VAR_25->hgenerator;
 }

 VAR_29 = &VAR_25->link;
 if (VAR_21) {
  VAR_29 = FUNC_4(VAR_25, VAR_21);
  VAR_24 = -VAR_0;
  if (VAR_29 == ((void*)0))
   goto failure;
 }

 VAR_24 = -VAR_1;
 VAR_26 = FUNC_16(sizeof(*VAR_26), VAR_3);
 if (VAR_26 == ((void*)0))
  goto failure;

 if (VAR_22[VAR_13]) {
  VAR_24 = FUNC_13(&VAR_26->bstats, &VAR_26->rate_est,
     FUNC_25(VAR_19),
     VAR_22[VAR_13]);
  if (VAR_24) {
   FUNC_15(VAR_26);
   goto failure;
  }
 }

 VAR_26->R_tab = VAR_30;
 VAR_30 = ((void*)0);
 VAR_26->refcnt = 1;
 if (!(VAR_26->q = FUNC_20(FUNC_21(VAR_19), VAR_19->dev_queue,
     &VAR_18, VAR_20)))
  VAR_26->q = &VAR_17;
 VAR_26->common.classid = VAR_20;
 VAR_26->tparent = VAR_29;
 VAR_26->qdisc = VAR_19;
 VAR_26->allot = VAR_29->allot;
 VAR_26->quantum = VAR_26->allot;
 VAR_26->weight = VAR_26->R_tab->rate.rate;

 FUNC_26(VAR_19);
 FUNC_6(VAR_26);
 VAR_26->borrow = VAR_26->tparent;
 if (VAR_26->tparent != &VAR_25->link)
  VAR_26->share = VAR_26->tparent;
 FUNC_3(VAR_29);
 VAR_26->minidle = -0x7FFFFFFF;
 FUNC_9(VAR_26, FUNC_17(VAR_28[VAR_5]));
 FUNC_12(VAR_26, FUNC_17(VAR_28[VAR_11]));
 if (VAR_26->ewma_log==0)
  VAR_26->ewma_log = VAR_25->link.ewma_log;
 if (VAR_26->maxidle==0)
  VAR_26->maxidle = VAR_25->link.maxidle;
 if (VAR_26->avpkt==0)
  VAR_26->avpkt = VAR_25->link.avpkt;
 VAR_26->overlimit = VAR_15;
 if (VAR_28[VAR_7])
  FUNC_10(VAR_26, FUNC_17(VAR_28[VAR_7]));




 if (VAR_28[VAR_4])
  FUNC_8(VAR_26, FUNC_17(VAR_28[VAR_4]));
 FUNC_27(VAR_19);

 FUNC_19(VAR_19, &VAR_25->clhash);

 *VAR_23 = (unsigned long)VAR_26;
 return 0;

failure:
 FUNC_24(VAR_30);
 return VAR_24;
}
