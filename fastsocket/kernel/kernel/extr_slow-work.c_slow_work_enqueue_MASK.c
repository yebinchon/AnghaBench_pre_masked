
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct TYPE_2__ {struct list_head* prev; } ;
struct slow_work {TYPE_1__ link; int flags; int ops; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,struct list_head*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct slow_work*) ;
 int FUNC_4 (struct slow_work*) ;
 struct list_head VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct list_head VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int *) ;

int FUNC_11(struct slow_work *VAR_13)
{
 wait_queue_head_t *VAR_14;
 struct list_head *VAR_15;
 unsigned long VAR_16;
 int VAR_17;

 if (FUNC_8(VAR_1, &VAR_13->flags))
  return -VAR_0;

 FUNC_0(VAR_10 <= 0);
 FUNC_0(!VAR_13);
 FUNC_0(!VAR_13->ops);
 if (!FUNC_7(VAR_4, &VAR_13->flags)) {
  if (FUNC_8(VAR_5, &VAR_13->flags)) {
   VAR_14 = &VAR_12;
   VAR_15 = &VAR_11;
  } else {
   VAR_14 = &VAR_8;
   VAR_15 = &VAR_6;
  }

  FUNC_5(&VAR_7, VAR_16);

  if (FUNC_9(FUNC_8(VAR_1, &VAR_13->flags)))
   goto cancelled;
  if (FUNC_8(VAR_3, &VAR_13->flags)) {
   FUNC_2(VAR_2, &VAR_13->flags);
  } else {
   VAR_17 = FUNC_3(VAR_13);
   if (VAR_17 < 0)
    goto failed;
   FUNC_4(VAR_13);
   FUNC_1(&VAR_13->link, VAR_15);
   FUNC_10(&VAR_9);



   if (VAR_13->link.prev == VAR_15)
    FUNC_10(VAR_14);
  }

  FUNC_6(&VAR_7, VAR_16);
 }
 return 0;

cancelled:
 VAR_17 = -VAR_0;
failed:
 FUNC_6(&VAR_7, VAR_16);
 return VAR_17;
}
