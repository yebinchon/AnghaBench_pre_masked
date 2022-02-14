
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int * driver_data; } ;
struct rfcomm_dev {int list; int flags; int dlc; int * tty; int wakeup_task; TYPE_1__* tty_dev; int opened; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ parent; } ;


 int FUNC_0 (char*,struct tty_struct*,struct rfcomm_dev*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct rfcomm_dev*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct tty_struct *VAR_4, struct file *VAR_5)
{
 struct rfcomm_dev *VAR_6 = (struct rfcomm_dev *) VAR_4->driver_data;
 if (!VAR_6)
  return;

 FUNC_0("tty %p dev %p dlc %p opened %d", VAR_4, VAR_6, VAR_6->dlc,
      FUNC_2(&VAR_6->opened));

 if (FUNC_1(&VAR_6->opened)) {
  if (VAR_6->tty_dev->parent)
   FUNC_4(VAR_6->tty_dev, ((void*)0), VAR_0);


  FUNC_7(VAR_6->dlc, 0);

  FUNC_3(VAR_1, &VAR_6->flags);
  FUNC_10(&VAR_6->wakeup_task);

  FUNC_8(VAR_6->dlc);
  VAR_4->driver_data = ((void*)0);
  VAR_6->tty = ((void*)0);
  FUNC_9(VAR_6->dlc);

  if (FUNC_11(VAR_2, &VAR_6->flags)) {
   FUNC_12(&VAR_3);
   FUNC_5(&VAR_6->list);
   FUNC_13(&VAR_3);

   FUNC_6(VAR_6);
  }
 }

 FUNC_6(VAR_6);
}
