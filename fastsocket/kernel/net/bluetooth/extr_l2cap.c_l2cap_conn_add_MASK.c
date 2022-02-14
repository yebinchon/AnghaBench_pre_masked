
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int lock; } ;
struct l2cap_conn {int disc_reason; int info_timer; TYPE_2__ chan_list; int lock; scalar_t__ feat_mask; int * dst; int * src; int mtu; struct hci_conn* hcon; } ;
struct hci_conn {int dst; TYPE_1__* hdev; struct l2cap_conn* l2cap_data; } ;
struct TYPE_3__ {int bdaddr; int acl_mtu; } ;


 int FUNC_0 (char*,struct hci_conn*,struct l2cap_conn*) ;
 int VAR_0 ;
 struct l2cap_conn* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct l2cap_conn *FUNC_5(struct hci_conn *VAR_2, u8 VAR_3)
{
 struct l2cap_conn *VAR_4 = VAR_2->l2cap_data;

 if (VAR_4 || VAR_3)
  return VAR_4;

 VAR_4 = FUNC_1(sizeof(struct l2cap_conn), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_2->l2cap_data = VAR_4;
 VAR_4->hcon = VAR_2;

 FUNC_0("hcon %p conn %p", VAR_2, VAR_4);

 VAR_4->mtu = VAR_2->hdev->acl_mtu;
 VAR_4->src = &VAR_2->hdev->bdaddr;
 VAR_4->dst = &VAR_2->dst;

 VAR_4->feat_mask = 0;

 FUNC_4(&VAR_4->lock);
 FUNC_2(&VAR_4->chan_list.lock);

 FUNC_3(&VAR_4->info_timer, VAR_1,
      (unsigned long) VAR_4);

 VAR_4->disc_reason = 0x13;

 return VAR_4;
}
