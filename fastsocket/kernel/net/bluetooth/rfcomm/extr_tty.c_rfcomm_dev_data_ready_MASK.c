
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct rfcomm_dlc {struct rfcomm_dev* owner; } ;
struct rfcomm_dev {int pending; struct tty_struct* tty; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,struct tty_struct*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rfcomm_dlc *VAR_0, struct sk_buff *VAR_1)
{
 struct rfcomm_dev *VAR_2 = VAR_0->owner;
 struct tty_struct *VAR_3;

 if (!VAR_2) {
  FUNC_1(VAR_1);
  return;
 }

 if (!(VAR_3 = VAR_2->tty) || !FUNC_2(&VAR_2->pending)) {
  FUNC_3(&VAR_2->pending, VAR_1);
  return;
 }

 FUNC_0("dlc %p tty %p len %d", VAR_0, VAR_3, VAR_1->len);

 FUNC_5(VAR_3, VAR_1->data, VAR_1->len);
 FUNC_4(VAR_3);

 FUNC_1(VAR_1);
}
