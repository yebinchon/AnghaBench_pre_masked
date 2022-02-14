
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int dev_class; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_ev_conn_request {int bdaddr; int link_type; int dev_class; } ;
struct hci_dev {int link_mode; int voice_setting; int name; } ;
struct hci_cp_reject_conn_req {int role; int retrans_effort; int reason; int bdaddr; void* content_format; void* max_latency; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; } ;
struct hci_cp_accept_sync_conn_req {int role; int retrans_effort; int reason; int bdaddr; void* content_format; void* max_latency; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; } ;
struct hci_cp_accept_conn_req {int role; int retrans_effort; int reason; int bdaddr; void* content_format; void* max_latency; void* rx_bandwidth; void* tx_bandwidth; void* pkt_type; } ;
struct hci_conn {int pkt_type; int state; int dev_class; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,int ,int *) ;
 struct hci_conn* FUNC_7 (struct hci_dev*,int ,int *) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_10 (struct hci_dev*,int *) ;
 int FUNC_11 (struct hci_dev*,int *,int ) ;
 int FUNC_12 (struct hci_dev*,int ,int,struct hci_cp_reject_conn_req*) ;
 int FUNC_13 (struct hci_dev*) ;
 scalar_t__ FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_16(struct hci_dev *VAR_7, struct sk_buff *VAR_8)
{
 struct hci_ev_conn_request *VAR_9 = (void *) VAR_8->data;
 int VAR_10 = VAR_7->link_mode;

 FUNC_0("%s bdaddr %s type 0x%x", VAR_7->name,
     FUNC_3(&VAR_9->bdaddr), VAR_9->link_type);

 VAR_10 |= FUNC_11(VAR_7, &VAR_9->bdaddr, VAR_9->link_type);

 if (VAR_10 & VAR_2) {

  struct inquiry_entry *VAR_11;
  struct hci_conn *VAR_12;

  FUNC_8(VAR_7);

  if ((VAR_11 = FUNC_10(VAR_7, &VAR_9->bdaddr)))
   FUNC_15(VAR_11->data.dev_class, VAR_9->dev_class, 3);

  VAR_12 = FUNC_7(VAR_7, VAR_9->link_type, &VAR_9->bdaddr);
  if (!VAR_12) {
   if (!(VAR_12 = FUNC_6(VAR_7, VAR_9->link_type, &VAR_9->bdaddr))) {
    FUNC_1("No memmory for new connection");
    FUNC_9(VAR_7);
    return;
   }
  }

  FUNC_15(VAR_12->dev_class, VAR_9->dev_class, 3);
  VAR_12->state = VAR_1;

  FUNC_9(VAR_7);

  if (VAR_9->link_type == VAR_0 || !FUNC_13(VAR_7)) {
   struct hci_cp_accept_conn_req VAR_13;

   FUNC_2(&VAR_13.bdaddr, &VAR_9->bdaddr);

   if (FUNC_14(VAR_7) && (VAR_10 & VAR_3))
    VAR_13.role = 0x00;
   else
    VAR_13.role = 0x01;

   FUNC_12(VAR_7, VAR_4,
       sizeof(VAR_13), &VAR_13);
  } else {
   struct hci_cp_accept_sync_conn_req VAR_14;

   FUNC_2(&VAR_14.bdaddr, &VAR_9->bdaddr);
   VAR_14.pkt_type = FUNC_4(VAR_12->pkt_type);

   VAR_14.tx_bandwidth = FUNC_5(0x00001f40);
   VAR_14.rx_bandwidth = FUNC_5(0x00001f40);
   VAR_14.max_latency = FUNC_4(0xffff);
   VAR_14.content_format = FUNC_4(VAR_7->voice_setting);
   VAR_14.retrans_effort = 0xff;

   FUNC_12(VAR_7, VAR_5,
       sizeof(VAR_14), &VAR_14);
  }
 } else {

  struct hci_cp_reject_conn_req VAR_15;

  FUNC_2(&VAR_15.bdaddr, &VAR_9->bdaddr);
  VAR_15.reason = 0x0f;
  FUNC_12(VAR_7, VAR_6, sizeof(VAR_15), &VAR_15);
 }
}
