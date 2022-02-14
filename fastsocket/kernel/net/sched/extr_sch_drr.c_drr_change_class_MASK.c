
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct drr_sched {int clhash; } ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct drr_class {int refcnt; TYPE_1__ common; int * qdisc; int rate_est; int bstats; scalar_t__ quantum; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int ,struct nlattr*) ;
 int FUNC_1 (struct drr_class*) ;
 struct drr_class* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct Qdisc*,int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int * FUNC_8 (int ,int ,int *,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct Qdisc*) ;
 struct drr_sched* FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (struct Qdisc*) ;
 int FUNC_14 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_15(struct Qdisc *VAR_10, u32 VAR_11, u32 VAR_12,
       struct nlattr **VAR_13, unsigned long *VAR_14)
{
 struct drr_sched *VAR_15 = FUNC_11(VAR_10);
 struct drr_class *VAR_16 = (struct drr_class *)*VAR_14;
 struct nlattr *VAR_17 = VAR_13[VAR_5];
 struct nlattr *VAR_18[VAR_3 + 1];
 u32 VAR_19;
 int VAR_20;

 if (!VAR_17)
  return -VAR_0;

 VAR_20 = FUNC_4(VAR_18, VAR_3, VAR_17, VAR_7);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_18[VAR_4]) {
  VAR_19 = FUNC_3(VAR_18[VAR_4]);
  if (VAR_19 == 0)
   return -VAR_0;
 } else
  VAR_19 = FUNC_5(FUNC_10(VAR_10));

 if (VAR_16 != ((void*)0)) {
  if (VAR_13[VAR_6]) {
   VAR_20 = FUNC_0(&VAR_16->bstats, &VAR_16->rate_est,
          FUNC_12(VAR_10),
          VAR_13[VAR_6]);
   if (VAR_20)
    return VAR_20;
  }

  FUNC_13(VAR_10);
  if (VAR_18[VAR_4])
   VAR_16->quantum = VAR_19;
  FUNC_14(VAR_10);

  return 0;
 }

 VAR_16 = FUNC_2(sizeof(struct drr_class), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;

 VAR_16->refcnt = 1;
 VAR_16->common.classid = VAR_11;
 VAR_16->quantum = VAR_19;
 VAR_16->qdisc = FUNC_8(FUNC_10(VAR_10), VAR_10->dev_queue,
            &VAR_9, VAR_11);
 if (VAR_16->qdisc == ((void*)0))
  VAR_16->qdisc = &VAR_8;

 if (VAR_13[VAR_6]) {
  VAR_20 = FUNC_0(&VAR_16->bstats, &VAR_16->rate_est,
         FUNC_12(VAR_10),
         VAR_13[VAR_6]);
  if (VAR_20) {
   FUNC_9(VAR_16->qdisc);
   FUNC_1(VAR_16);
   return VAR_20;
  }
 }

 FUNC_13(VAR_10);
 FUNC_7(&VAR_15->clhash, &VAR_16->common);
 FUNC_14(VAR_10);

 FUNC_6(VAR_10, &VAR_15->clhash);

 *VAR_14 = (unsigned long)VAR_16;
 return 0;
}
