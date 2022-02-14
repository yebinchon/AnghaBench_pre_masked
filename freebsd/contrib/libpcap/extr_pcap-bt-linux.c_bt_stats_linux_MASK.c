
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {scalar_t__ ps_ifdrop; scalar_t__ ps_drop; scalar_t__ ps_recv; } ;
struct pcap_bt {int dev_id; } ;
struct hci_dev_stats {scalar_t__ err_tx; scalar_t__ err_rx; scalar_t__ sco_tx; scalar_t__ acl_tx; scalar_t__ cmd_tx; scalar_t__ sco_rx; scalar_t__ acl_rx; scalar_t__ evt_rx; } ;
struct hci_dev_info {int dev_id; struct hci_dev_stats stat; } ;
struct TYPE_3__ {int errbuf; int fd; struct pcap_bt* priv; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_4, struct pcap_stat *VAR_5)
{
 struct pcap_bt *VAR_6 = VAR_4->priv;
 int VAR_7;
 struct hci_dev_info VAR_8;
 struct hci_dev_stats * VAR_9 = &VAR_8.stat;
 VAR_8.dev_id = VAR_6->dev_id;


 do {
  VAR_7 = FUNC_0(VAR_4->fd, VAR_1, (void *)&VAR_8);
 } while ((VAR_7 == -1) && (VAR_3 == VAR_0));

 if (VAR_7 < 0) {
  FUNC_1(VAR_4->errbuf, VAR_2,
      VAR_3, "Can't get stats via ioctl");
  return (-1);

 }


 VAR_5->ps_recv = VAR_9->evt_rx + VAR_9->acl_rx + VAR_9->sco_rx + VAR_9->cmd_tx +
  VAR_9->acl_tx +VAR_9->sco_tx;
 VAR_5->ps_drop = VAR_9->err_rx + VAR_9->err_tx;
 VAR_5->ps_ifdrop = 0;
 return 0;
}
