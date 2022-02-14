
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct hci_sco_hdr {int handle; } ;
struct hci_proto {int (* recv_scodata ) (struct hci_conn*,struct sk_buff*) ;} ;
struct TYPE_2__ {int sco_rx; } ;
struct hci_dev {int name; TYPE_1__ stat; } ;
struct hci_conn {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 struct hci_proto** VAR_2 ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct hci_conn*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_9(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_sco_hdr *VAR_5 = (void *) VAR_4->data;
 struct hci_conn *VAR_6;
 __u16 VAR_7;

 FUNC_7(VAR_4, VAR_1);

 VAR_7 = FUNC_2(VAR_5->handle);

 FUNC_0("%s len %d handle 0x%x", VAR_3->name, VAR_4->len, VAR_7);

 VAR_3->stat.sco_rx++;

 FUNC_4(VAR_3);
 VAR_6 = FUNC_3(VAR_3, VAR_7);
 FUNC_5(VAR_3);

 if (VAR_6) {
  register struct hci_proto *VAR_8;


  if ((VAR_8 = VAR_2[VAR_0]) && VAR_8->recv_scodata) {
   VAR_8->recv_scodata(VAR_6, VAR_4);
   return;
  }
 } else {
  FUNC_1("%s SCO packet for unknown connection handle %d",
   VAR_3->name, VAR_7);
 }

 FUNC_6(VAR_4);
}
