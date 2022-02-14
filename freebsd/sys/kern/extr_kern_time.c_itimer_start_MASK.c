
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kclock {int * event_hook; int timer_gettime; int timer_settime; int timer_delete; int timer_create; } ;
struct itimer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,void*,int ) ;
 long VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,long) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ,struct kclock*) ;
 int FUNC_3 (char*,int,int *,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct kclock VAR_22 = {
  .timer_create = VAR_18,
  .timer_delete = VAR_19,
  .timer_settime = VAR_21,
  .timer_gettime = VAR_20,
  .event_hook = ((void*)0)
 };

 VAR_13 = FUNC_3("itimer", sizeof(struct itimer),
  ((void*)0), ((void*)0), VAR_12, VAR_11, VAR_10, 0);
 FUNC_2(VAR_1, &VAR_22);
 FUNC_2(VAR_0, &VAR_22);
 FUNC_1(VAR_3, 200112L);
 FUNC_1(VAR_2, VAR_6);
 FUNC_1(VAR_4, VAR_9);
 FUNC_0(VAR_17, VAR_15,
  (void *)VAR_8, VAR_5);
 FUNC_0(VAR_16, VAR_14,
  (void *)VAR_7, VAR_5);
}
