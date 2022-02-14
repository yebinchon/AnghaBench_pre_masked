
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slow_work {int flags; int ops; } ;
struct TYPE_2__ {unsigned long data; int function; scalar_t__ expires; } ;
struct delayed_slow_work {TYPE_1__ timer; struct slow_work work; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct slow_work*) ;
 int FUNC_4 (struct slow_work*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct delayed_slow_work *VAR_8,
         unsigned long VAR_9)
{
 struct slow_work *VAR_10 = &VAR_8->work;
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_9 == 0)
  return FUNC_3(&VAR_8->work);

 FUNC_1(VAR_7 <= 0);
 FUNC_1(!VAR_10);
 FUNC_1(!VAR_10->ops);

 if (FUNC_9(VAR_1, &VAR_10->flags))
  return -VAR_0;

 if (!FUNC_8(VAR_3, &VAR_10->flags)) {
  FUNC_5(&VAR_6, VAR_11);

  if (FUNC_9(VAR_1, &VAR_10->flags))
   goto cancelled;


  VAR_12 = FUNC_4(VAR_10);
  if (VAR_12 < 0)
   goto cant_get_ref;

  if (FUNC_7(VAR_2, &VAR_10->flags))
   FUNC_0();
  VAR_8->timer.expires = VAR_5 + VAR_9;
  VAR_8->timer.data = (unsigned long) VAR_10;
  VAR_8->timer.function = VAR_4;
  FUNC_2(&VAR_8->timer);

  FUNC_6(&VAR_6, VAR_11);
 }

 return 0;

cancelled:
 VAR_12 = -VAR_0;
cant_get_ref:
 FUNC_6(&VAR_6, VAR_11);
 return VAR_12;
}
