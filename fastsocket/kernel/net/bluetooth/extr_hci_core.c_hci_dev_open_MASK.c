
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ flags; int (* close ) (struct hci_dev*) ;int * sent_cmd; int (* flush ) (struct hci_dev*) ;int rx_q; int cmd_q; int cmd_task; int tx_task; int rx_task; int cmd_cnt; scalar_t__ (* open ) (struct hci_dev*) ;scalar_t__ quirks; scalar_t__ rfkill; int name; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,struct hci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hci_dev*,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,scalar_t__*) ;
 struct hci_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int VAR_10 ;
 int FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,scalar_t__*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct hci_dev*) ;
 int FUNC_16 (struct hci_dev*) ;
 int FUNC_17 (struct hci_dev*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ,scalar_t__*) ;

int FUNC_20(__u16 VAR_11)
{
 struct hci_dev *VAR_12;
 int VAR_13 = 0;

 if (!(VAR_12 = FUNC_4(VAR_11)))
  return -VAR_2;

 FUNC_0("%s %p", VAR_12->name, VAR_12);

 FUNC_8(VAR_12);

 if (VAR_12->rfkill && FUNC_12(VAR_12->rfkill)) {
  VAR_13 = -VAR_3;
  goto done;
 }

 if (FUNC_19(VAR_9, &VAR_12->flags)) {
  VAR_13 = -VAR_0;
  goto done;
 }

 if (FUNC_19(VAR_7, &VAR_12->quirks))
  FUNC_13(VAR_8, &VAR_12->flags);

 if (VAR_12->open(VAR_12)) {
  VAR_13 = -VAR_1;
  goto done;
 }

 if (!FUNC_19(VAR_8, &VAR_12->flags)) {
  FUNC_2(&VAR_12->cmd_cnt, 1);
  FUNC_13(VAR_5, &VAR_12->flags);


  VAR_13 = FUNC_1(VAR_12, VAR_10, 0,
     FUNC_11(VAR_6));

  FUNC_3(VAR_5, &VAR_12->flags);
 }

 if (!VAR_13) {
  FUNC_5(VAR_12);
  FUNC_13(VAR_9, &VAR_12->flags);
  FUNC_7(VAR_12, VAR_4);
 } else {

  FUNC_18(&VAR_12->rx_task);
  FUNC_18(&VAR_12->tx_task);
  FUNC_18(&VAR_12->cmd_task);

  FUNC_14(&VAR_12->cmd_q);
  FUNC_14(&VAR_12->rx_q);

  if (VAR_12->flush)
   VAR_12->flush(VAR_12);

  if (VAR_12->sent_cmd) {
   FUNC_10(VAR_12->sent_cmd);
   VAR_12->sent_cmd = ((void*)0);
  }

  VAR_12->close(VAR_12);
  VAR_12->flags = 0;
 }

done:
 FUNC_9(VAR_12);
 FUNC_6(VAR_12);
 return VAR_13;
}
