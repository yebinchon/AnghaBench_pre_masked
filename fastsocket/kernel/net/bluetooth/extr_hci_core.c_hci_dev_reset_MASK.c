
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int tx_task; int flags; scalar_t__ sco_cnt; scalar_t__ acl_cnt; int cmd_cnt; int (* flush ) (struct hci_dev*) ;int cmd_q; int rx_q; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int VAR_4 ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

int FUNC_16(__u16 VAR_5)
{
 struct hci_dev *VAR_6;
 int VAR_7 = 0;

 if (!(VAR_6 = FUNC_3(VAR_5)))
  return -VAR_0;

 FUNC_7(VAR_6);
 FUNC_13(&VAR_6->tx_task);

 if (!FUNC_15(VAR_3, &VAR_6->flags))
  goto done;


 FUNC_11(&VAR_6->rx_q);
 FUNC_11(&VAR_6->cmd_q);

 FUNC_4(VAR_6);
 FUNC_9(VAR_6);
 FUNC_2(VAR_6);
 FUNC_6(VAR_6);

 if (VAR_6->flush)
  VAR_6->flush(VAR_6);

 FUNC_1(&VAR_6->cmd_cnt, 1);
 VAR_6->acl_cnt = 0; VAR_6->sco_cnt = 0;

 if (!FUNC_15(VAR_2, &VAR_6->flags))
  VAR_7 = FUNC_0(VAR_6, VAR_4, 0,
     FUNC_10(VAR_1));

done:
 FUNC_14(&VAR_6->tx_task);
 FUNC_8(VAR_6);
 FUNC_5(VAR_6);
 return VAR_7;
}
