
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct TYPE_2__ {struct list_head* prev; } ;
struct slow_work {TYPE_1__ link; int flags; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,struct list_head*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct slow_work*) ;
 int FUNC_5 (struct slow_work*) ;
 struct list_head VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct list_head VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_11)
{
 wait_queue_head_t *VAR_12;
 struct list_head *VAR_13;
 struct slow_work *VAR_14 = (struct slow_work *) VAR_11;
 unsigned long VAR_15;
 bool VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

 if (FUNC_8(VAR_4, &VAR_14->flags)) {
  VAR_12 = &VAR_10;
  VAR_13 = &VAR_9;
 } else {
  VAR_12 = &VAR_7;
  VAR_13 = &VAR_5;
 }

 FUNC_6(&VAR_6, VAR_15);
 if (FUNC_1(!FUNC_8(VAR_0, &VAR_14->flags))) {
  FUNC_0(VAR_1, &VAR_14->flags);

  if (FUNC_8(VAR_3, &VAR_14->flags)) {


   FUNC_3(VAR_2, &VAR_14->flags);
   VAR_17 = 1;
  } else {
   FUNC_4(VAR_14);
   FUNC_2(&VAR_14->link, VAR_13);
   VAR_16 = 1;
   if (VAR_14->link.prev == VAR_13)
    VAR_18 = 1;
  }
 }

 FUNC_7(&VAR_6, VAR_15);
 if (VAR_17)
  FUNC_5(VAR_14);
 if (VAR_18)
  FUNC_9(VAR_12);
 if (VAR_16)
  FUNC_9(&VAR_8);
}
