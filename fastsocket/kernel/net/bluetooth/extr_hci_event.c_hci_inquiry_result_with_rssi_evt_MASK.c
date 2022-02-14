
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct inquiry_info_with_rssi_and_pscan_mode {int pscan_mode; int rssi; int clock_offset; int dev_class; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct inquiry_info_with_rssi {int rssi; int clock_offset; int dev_class; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct inquiry_data {int pscan_mode; int ssp_mode; int rssi; int clock_offset; int dev_class; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct hci_dev {int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,struct inquiry_data*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_6(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct inquiry_data VAR_2;
 int VAR_3 = *((__u8 *) VAR_1->data);

 FUNC_0("%s num_rsp %d", VAR_0->name, VAR_3);

 if (!VAR_3)
  return;

 FUNC_2(VAR_0);

 if ((VAR_1->len - 1) / VAR_3 != sizeof(struct inquiry_info_with_rssi)) {
  struct inquiry_info_with_rssi_and_pscan_mode *VAR_4 = (void *) (VAR_1->data + 1);

  for (; VAR_3; VAR_3--) {
   FUNC_1(&VAR_2.bdaddr, &VAR_4->bdaddr);
   VAR_2.pscan_rep_mode = VAR_4->pscan_rep_mode;
   VAR_2.pscan_period_mode = VAR_4->pscan_period_mode;
   VAR_2.pscan_mode = VAR_4->pscan_mode;
   FUNC_5(VAR_2.dev_class, VAR_4->dev_class, 3);
   VAR_2.clock_offset = VAR_4->clock_offset;
   VAR_2.rssi = VAR_4->rssi;
   VAR_2.ssp_mode = 0x00;
   VAR_4++;
   FUNC_4(VAR_0, &VAR_2);
  }
 } else {
  struct inquiry_info_with_rssi *VAR_5 = (void *) (VAR_1->data + 1);

  for (; VAR_3; VAR_3--) {
   FUNC_1(&VAR_2.bdaddr, &VAR_5->bdaddr);
   VAR_2.pscan_rep_mode = VAR_5->pscan_rep_mode;
   VAR_2.pscan_period_mode = VAR_5->pscan_period_mode;
   VAR_2.pscan_mode = 0x00;
   FUNC_5(VAR_2.dev_class, VAR_5->dev_class, 3);
   VAR_2.clock_offset = VAR_5->clock_offset;
   VAR_2.rssi = VAR_5->rssi;
   VAR_2.ssp_mode = 0x00;
   VAR_5++;
   FUNC_4(VAR_0, &VAR_2);
  }
 }

 FUNC_3(VAR_0);
}
