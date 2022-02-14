
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sco_conn {scalar_t__ mtu; int * dst; int * src; struct hci_conn* hcon; int lock; } ;
struct hci_dev {scalar_t__ sco_mtu; int bdaddr; } ;
struct hci_conn {int dst; struct sco_conn* sco_data; struct hci_dev* hdev; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,struct hci_conn*,struct sco_conn*) ;
 int VAR_0 ;
 struct sco_conn* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sco_conn *FUNC_3(struct hci_conn *VAR_1, __u8 VAR_2)
{
 struct hci_dev *VAR_3 = VAR_1->hdev;
 struct sco_conn *VAR_4 = VAR_1->sco_data;

 if (VAR_4 || VAR_2)
  return VAR_4;

 VAR_4 = FUNC_1(sizeof(struct sco_conn), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(&VAR_4->lock);

 VAR_1->sco_data = VAR_4;
 VAR_4->hcon = VAR_1;

 VAR_4->src = &VAR_3->bdaddr;
 VAR_4->dst = &VAR_1->dst;

 if (VAR_3->sco_mtu > 0)
  VAR_4->mtu = VAR_3->sco_mtu;
 else
  VAR_4->mtu = 60;

 FUNC_0("hcon %p conn %p", VAR_1, VAR_4);

 return VAR_4;
}
