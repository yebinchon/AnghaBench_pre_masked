
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct rfcomm_dev {int dlc; int pending; struct tty_struct* tty; } ;


 int FUNC_0 (char*,struct rfcomm_dev*,struct tty_struct*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rfcomm_dev *VAR_0)
{
 struct tty_struct *VAR_1 = VAR_0->tty;
 struct sk_buff *VAR_2;
 int VAR_3 = 0;

 if (!VAR_1)
  return;

 FUNC_0("dev %p tty %p", VAR_0, VAR_1);

 FUNC_2(VAR_0->dlc);

 while ((VAR_2 = FUNC_4(&VAR_0->pending))) {
  VAR_3 += FUNC_6(VAR_1, VAR_2->data, VAR_2->len);
  FUNC_1(VAR_2);
 }

 FUNC_3(VAR_0->dlc);

 if (VAR_3 > 0)
  FUNC_5(VAR_1);
}
