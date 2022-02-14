
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int voice_setting; } ;
struct hci_cp_setup_sync_conn {int retrans_effort; void* voice_setting; void* max_latency; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; void* handle; } ;
struct hci_conn {int out; int pkt_type; int attempt; int state; struct hci_dev* hdev; } ;
typedef int cp ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct hci_dev*,int ,int,struct hci_cp_setup_sync_conn*) ;

void FUNC_4(struct hci_conn *VAR_2, __u16 VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hdev;
 struct hci_cp_setup_sync_conn VAR_5;

 FUNC_0("%p", VAR_2);

 VAR_2->state = VAR_0;
 VAR_2->out = 1;

 VAR_2->attempt++;

 VAR_5.handle = FUNC_1(VAR_3);
 VAR_5.pkt_type = FUNC_1(VAR_2->pkt_type);

 VAR_5.tx_bandwidth = FUNC_2(0x00001f40);
 VAR_5.rx_bandwidth = FUNC_2(0x00001f40);
 VAR_5.max_latency = FUNC_1(0xffff);
 VAR_5.voice_setting = FUNC_1(VAR_4->voice_setting);
 VAR_5.retrans_effort = 0xff;

 FUNC_3(VAR_4, VAR_1, sizeof(VAR_5), &VAR_5);
}
