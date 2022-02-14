
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {scalar_t__ state; struct rfcomm_dev* owner; } ;
struct rfcomm_dev {int err; int tty; int id; int flags; int wait; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,struct rfcomm_dev*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct rfcomm_dev*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct rfcomm_dev*) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct rfcomm_dlc *VAR_2, int VAR_3)
{
 struct rfcomm_dev *VAR_4 = VAR_2->owner;
 if (!VAR_4)
  return;

 FUNC_0("dlc %p dev %p err %d", VAR_2, VAR_4, VAR_3);

 VAR_4->err = VAR_3;
 FUNC_8(&VAR_4->wait);

 if (VAR_2->state == VAR_0) {
  if (!VAR_4->tty) {
   if (FUNC_6(VAR_1, &VAR_4->flags)) {







    FUNC_5(VAR_2);
    if (FUNC_2(VAR_4->id) == ((void*)0)) {
     FUNC_4(VAR_2);
     return;
    }

    FUNC_1(VAR_4);
    FUNC_3(VAR_4);
    FUNC_4(VAR_2);
   }
  } else
   FUNC_7(VAR_4->tty);
 }
}
