
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {int delay; void* next_tx; int idle_acc; scalar_t__ running; } ;
struct hrtimer_sleeper {int timer; int * task; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct hrtimer_sleeper*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct pktgen_dev *VAR_5, ktime_t VAR_6)
{
 ktime_t VAR_7, VAR_8;
 s64 VAR_9;
 struct hrtimer_sleeper VAR_10;

 FUNC_4(&VAR_10.timer, VAR_0, VAR_1);
 FUNC_6(&VAR_10.timer, VAR_6);

 VAR_9 = FUNC_12(FUNC_3(&VAR_10.timer));
 if (VAR_9 <= 0) {
  VAR_5->next_tx = FUNC_8(VAR_6, VAR_5->delay);
  return;
 }

 VAR_7 = FUNC_9();
 if (VAR_9 < 100)
  FUNC_17(VAR_9);
 else {

  FUNC_5(&VAR_10, VAR_4);
  do {
   FUNC_15(VAR_2);
   FUNC_7(&VAR_10.timer, VAR_1);
   if (!FUNC_1(&VAR_10.timer))
    VAR_10.task = ((void*)0);

   if (FUNC_13(VAR_10.task))
    FUNC_14();

   FUNC_2(&VAR_10.timer);
  } while (VAR_10.task && VAR_5->running && !FUNC_16(VAR_4));
  FUNC_0(VAR_3);
 }
 VAR_8 = FUNC_9();

 VAR_5->idle_acc += FUNC_11(FUNC_10(VAR_8, VAR_7));
 VAR_5->next_tx = FUNC_8(VAR_8, VAR_5->delay);
}
