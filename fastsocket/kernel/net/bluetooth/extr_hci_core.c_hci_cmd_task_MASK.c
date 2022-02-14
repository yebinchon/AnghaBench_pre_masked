
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hci_dev {int cmd_q; scalar_t__ cmd_last_tx; int cmd_cnt; int sent_cmd; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_3)
{
 struct hci_dev *VAR_4 = (struct hci_dev *) VAR_3;
 struct sk_buff *VAR_5;

 FUNC_0("%s cmd %d", VAR_4->name, FUNC_3(&VAR_4->cmd_cnt));

 if (!FUNC_3(&VAR_4->cmd_cnt) && FUNC_11(VAR_2, VAR_4->cmd_last_tx + VAR_1)) {
  FUNC_1("%s command tx timeout", VAR_4->name);
  FUNC_4(&VAR_4->cmd_cnt, 1);
 }


 if (FUNC_3(&VAR_4->cmd_cnt) && (VAR_5 = FUNC_9(&VAR_4->cmd_q))) {
  FUNC_7(VAR_4->sent_cmd);

  if ((VAR_4->sent_cmd = FUNC_8(VAR_5, VAR_0))) {
   FUNC_2(&VAR_4->cmd_cnt);
   FUNC_6(VAR_5);
   VAR_4->cmd_last_tx = VAR_2;
  } else {
   FUNC_10(&VAR_4->cmd_q, VAR_5);
   FUNC_5(VAR_4);
  }
 }
}
