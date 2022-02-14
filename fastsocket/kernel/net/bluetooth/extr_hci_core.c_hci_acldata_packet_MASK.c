
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct hci_proto {int (* recv_acldata ) (struct hci_conn*,struct sk_buff*,int ) ;} ;
struct TYPE_2__ {int acl_rx; } ;
struct hci_dev {int name; TYPE_1__ stat; } ;
struct hci_conn {int dummy; } ;
struct hci_acl_hdr {int handle; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hci_conn*) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct hci_proto** VAR_2 ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct hci_conn*,struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_12(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_acl_hdr *VAR_5 = (void *) VAR_4->data;
 struct hci_conn *VAR_6;
 __u16 VAR_7, VAR_8;

 FUNC_10(VAR_4, VAR_0);

 VAR_7 = FUNC_2(VAR_5->handle);
 VAR_8 = FUNC_7(VAR_7);
 VAR_7 = FUNC_8(VAR_7);

 FUNC_0("%s len %d handle 0x%x flags 0x%x", VAR_3->name, VAR_4->len, VAR_7, VAR_8);

 VAR_3->stat.acl_rx++;

 FUNC_5(VAR_3);
 VAR_6 = FUNC_4(VAR_3, VAR_7);
 FUNC_6(VAR_3);

 if (VAR_6) {
  register struct hci_proto *VAR_9;

  FUNC_3(VAR_6);


  if ((VAR_9 = VAR_2[VAR_1]) && VAR_9->recv_acldata) {
   VAR_9->recv_acldata(VAR_6, VAR_4, VAR_8);
   return;
  }
 } else {
  FUNC_1("%s ACL packet for unknown connection handle %d",
   VAR_3->name, VAR_7);
 }

 FUNC_9(VAR_4);
}
