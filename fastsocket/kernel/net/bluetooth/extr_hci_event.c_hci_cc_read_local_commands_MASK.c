
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_commands {int commands; scalar_t__ status; } ;
struct hci_dev {int commands; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_rp_read_local_commands *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%x", VAR_0->name, VAR_2->status);

 if (VAR_2->status)
  return;

 FUNC_1(VAR_0->commands, VAR_2->commands, sizeof(VAR_0->commands));
}
