
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_acl_hdr {void* dlen; void* handle; } ;
typedef int __u16 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_1, __u16 VAR_2, __u16 VAR_3)
{
 struct hci_acl_hdr *VAR_4;
 int VAR_5 = VAR_1->len;

 FUNC_2(VAR_1, VAR_0);
 FUNC_3(VAR_1);
 VAR_4 = (struct hci_acl_hdr *)FUNC_4(VAR_1);
 VAR_4->handle = FUNC_0(FUNC_1(VAR_2, VAR_3));
 VAR_4->dlen = FUNC_0(VAR_5);
}
