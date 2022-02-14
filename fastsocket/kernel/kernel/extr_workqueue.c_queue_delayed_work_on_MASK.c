
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct work_struct {int entry; } ;
struct timer_list {unsigned long data; int function; scalar_t__ expires; } ;
struct delayed_work {struct timer_list timer; struct work_struct work; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (struct timer_list*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct work_struct*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct timer_list*) ;
 int FUNC_8 (struct timer_list*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct work_struct*) ;
 int FUNC_11 (struct workqueue_struct*,int ) ;

int FUNC_12(int VAR_3, struct workqueue_struct *VAR_4,
   struct delayed_work *VAR_5, unsigned long VAR_6)
{
 int VAR_7 = 0;
 struct timer_list *VAR_8 = &VAR_5->timer;
 struct work_struct *VAR_9 = &VAR_5->work;

 if (!FUNC_6(VAR_0, FUNC_10(VAR_9))) {
  FUNC_0(FUNC_7(VAR_8));
  FUNC_0(!FUNC_3(&VAR_9->entry));

  FUNC_8(&VAR_5->timer);


  FUNC_5(VAR_9, FUNC_11(VAR_4, FUNC_4()));
  VAR_8->expires = VAR_2 + VAR_6;
  VAR_8->data = (unsigned long)VAR_5;
  VAR_8->function = VAR_1;

  if (FUNC_9(VAR_3 >= 0))
   FUNC_2(VAR_8, VAR_3);
  else
   FUNC_1(VAR_8);
  VAR_7 = 1;
 }
 return VAR_7;
}
