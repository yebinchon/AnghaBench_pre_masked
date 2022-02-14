
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct qdisc_size_table {scalar_t__ parent; int flags; int padded; struct qdisc_size_table* stab; int rate_est; int bstats; void* handle; } ;
struct nlattr {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc_ops {int (* init ) (struct qdisc_size_table*,struct nlattr*) ;int (* destroy ) (struct qdisc_size_table*) ;int owner; } ;
struct Qdisc {scalar_t__ parent; int flags; int padded; struct Qdisc* stab; int rate_est; int bstats; void* handle; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct qdisc_size_table*) ;
 int FUNC_1 (struct qdisc_size_table*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* FUNC_2 (void*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,int *,int *,struct nlattr*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,struct nlattr*,int) ;
 struct qdisc_size_table* FUNC_9 (struct netdev_queue*,struct Qdisc_ops*) ;
 void* FUNC_10 (struct net_device*) ;
 struct qdisc_size_table* FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct qdisc_size_table*) ;
 int * FUNC_13 (struct qdisc_size_table*) ;
 struct Qdisc_ops* FUNC_14 (struct nlattr*) ;
 int FUNC_15 (struct qdisc_size_table*) ;
 int * FUNC_16 (struct qdisc_size_table*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (struct qdisc_size_table*,struct nlattr*) ;
 int FUNC_21 (struct qdisc_size_table*) ;

__attribute__((used)) static struct Qdisc *
FUNC_22(struct net_device *VAR_15, struct netdev_queue *VAR_16,
      struct Qdisc *VAR_17, u32 VAR_18, u32 VAR_19,
      struct nlattr **VAR_20, int *VAR_21)
{
 int VAR_22;
 struct nlattr *VAR_23 = VAR_20[VAR_5];
 struct Qdisc *VAR_24;
 struct Qdisc_ops *VAR_25;
 struct qdisc_size_table *VAR_26;

 VAR_25 = FUNC_14(VAR_23);
 VAR_22 = -VAR_1;
 if (VAR_25 == ((void*)0))
  goto err_out;

 VAR_24 = FUNC_9(VAR_16, VAR_25);
 if (FUNC_0(VAR_24)) {
  VAR_22 = FUNC_1(VAR_24);
  goto err_out2;
 }

 VAR_24->parent = VAR_18;

 if (VAR_19 == VAR_11) {
  VAR_24->flags |= VAR_9;
  VAR_19 = FUNC_2(VAR_11, 0);
  FUNC_6(FUNC_13(VAR_24), &VAR_13);
 } else {
  if (VAR_19 == 0) {
   VAR_19 = FUNC_10(VAR_15);
   VAR_22 = -VAR_2;
   if (VAR_19 == 0)
    goto err_out3;
  }
  FUNC_6(FUNC_13(VAR_24), &VAR_14);
 }

 VAR_24->handle = VAR_19;

 if (!VAR_25->init || (VAR_22 = VAR_25->init(VAR_24, VAR_20[VAR_6])) == 0) {
  if (VAR_20[VAR_8]) {
   VAR_26 = FUNC_11(VAR_20[VAR_8]);
   if (FUNC_0(VAR_26)) {
    VAR_22 = FUNC_1(VAR_26);
    goto err_out4;
   }
   VAR_24->stab = VAR_26;
  }
  if (VAR_20[VAR_7]) {
   spinlock_t *VAR_27;

   VAR_22 = -VAR_3;
   if (VAR_24->flags & VAR_10)
    goto err_out4;

   if ((VAR_24->parent != VAR_12) &&
       !(VAR_24->flags & VAR_9) &&
       (!VAR_17 || !(VAR_17->flags & VAR_10)))
    VAR_27 = FUNC_16(VAR_24);
   else
    VAR_27 = FUNC_13(VAR_24);

   VAR_22 = FUNC_4(&VAR_24->bstats, &VAR_24->rate_est,
      VAR_27, VAR_20[VAR_7]);
   if (VAR_22)
    goto err_out4;
  }

  FUNC_12(VAR_24);

  return VAR_24;
 }
err_out3:
 FUNC_3(VAR_15);
 FUNC_5((char *) VAR_24 - VAR_24->padded);
err_out2:
 FUNC_7(VAR_25->owner);
err_out:
 *VAR_21 = VAR_22;
 return ((void*)0);

err_out4:




 FUNC_15(VAR_24->stab);
 if (VAR_25->destroy)
  VAR_25->destroy(VAR_24);
 goto err_out3;
}
