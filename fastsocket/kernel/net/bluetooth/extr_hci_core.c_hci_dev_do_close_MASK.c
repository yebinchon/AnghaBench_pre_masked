
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ flags; int (* close ) (struct hci_dev*) ;int * sent_cmd; int raw_q; int cmd_q; int rx_q; int cmd_task; int cmd_cnt; int (* flush ) (struct hci_dev*) ;int tx_task; int rx_task; int name; } ;


 int FUNC_0 (char*,int ,struct hci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*,int ) ;
 int FUNC_10 (struct hci_dev*) ;
 int FUNC_11 (struct hci_dev*) ;
 int VAR_5 ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,scalar_t__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct hci_dev*) ;
 int FUNC_18 (struct hci_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,scalar_t__*) ;
 int FUNC_21 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_22(struct hci_dev *VAR_6)
{
 FUNC_0("%s %p", VAR_6->name, VAR_6);

 FUNC_9(VAR_6, VAR_0);
 FUNC_10(VAR_6);

 if (!FUNC_20(VAR_4, &VAR_6->flags)) {
  FUNC_11(VAR_6);
  return 0;
 }


 FUNC_19(&VAR_6->rx_task);
 FUNC_19(&VAR_6->tx_task);

 FUNC_5(VAR_6);
 FUNC_12(VAR_6);
 FUNC_4(VAR_6);
 FUNC_7(VAR_6);

 FUNC_8(VAR_6, VAR_1);

 if (VAR_6->flush)
  VAR_6->flush(VAR_6);


 FUNC_16(&VAR_6->cmd_q);
 FUNC_2(&VAR_6->cmd_cnt, 1);
 if (!FUNC_21(VAR_3, &VAR_6->flags)) {
  FUNC_15(VAR_2, &VAR_6->flags);
  FUNC_1(VAR_6, VAR_5, 0,
     FUNC_14(250));
  FUNC_3(VAR_2, &VAR_6->flags);
 }


 FUNC_19(&VAR_6->cmd_task);


 FUNC_16(&VAR_6->rx_q);
 FUNC_16(&VAR_6->cmd_q);
 FUNC_16(&VAR_6->raw_q);


 if (VAR_6->sent_cmd) {
  FUNC_13(VAR_6->sent_cmd);
  VAR_6->sent_cmd = ((void*)0);
 }



 VAR_6->close(VAR_6);


 VAR_6->flags = 0;

 FUNC_11(VAR_6);

 FUNC_6(VAR_6);
 return 0;
}
