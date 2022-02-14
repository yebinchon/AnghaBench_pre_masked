
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct hci_ev_num_comp_pkts {int num_hndl; } ;
struct hci_dev {scalar_t__ acl_cnt; scalar_t__ acl_pkts; scalar_t__ sco_cnt; scalar_t__ sco_pkts; int tx_task; int name; } ;
struct hci_conn {scalar_t__ type; int sent; } ;
typedef scalar_t__ __u16 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,scalar_t__) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_ev_num_comp_pkts *VAR_3 = (void *) VAR_2->data;
 __le16 *VAR_4;
 int VAR_5;

 FUNC_4(VAR_2, sizeof(*VAR_3));

 FUNC_0("%s num_hndl %d", VAR_1->name, VAR_3->num_hndl);

 if (VAR_2->len < VAR_3->num_hndl * 4) {
  FUNC_0("%s bad parameters", VAR_1->name);
  return;
 }

 FUNC_5(&VAR_1->tx_task);

 for (VAR_5 = 0, VAR_4 = (__le16 *) VAR_2->data; VAR_5 < VAR_3->num_hndl; VAR_5++) {
  struct hci_conn *VAR_6;
  __u16 VAR_7, VAR_8;

  VAR_7 = FUNC_1(VAR_4++);
  VAR_8 = FUNC_1(VAR_4++);

  VAR_6 = FUNC_2(VAR_1, VAR_7);
  if (VAR_6) {
   VAR_6->sent -= VAR_8;

   if (VAR_6->type == VAR_0) {
    if ((VAR_1->acl_cnt += VAR_8) > VAR_1->acl_pkts)
     VAR_1->acl_cnt = VAR_1->acl_pkts;
   } else {
    if ((VAR_1->sco_cnt += VAR_8) > VAR_1->sco_pkts)
     VAR_1->sco_cnt = VAR_1->sco_pkts;
   }
  }
 }

 FUNC_3(VAR_1);

 FUNC_6(&VAR_1->tx_task);
}
