
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inquiry_info {int clock_offset; int dev_class; int pscan_mode; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct inquiry_data {int clock_offset; int dev_class; int pscan_mode; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct inquiry_entry {struct inquiry_data data; struct inquiry_entry* next; } ;
struct inquiry_cache {struct inquiry_entry* list; } ;
struct hci_dev {struct inquiry_cache inq_cache; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct inquiry_cache*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hci_dev *VAR_0, int VAR_1, __u8 *VAR_2)
{
 struct inquiry_cache *VAR_3 = &VAR_0->inq_cache;
 struct inquiry_info *VAR_4 = (struct inquiry_info *) VAR_2;
 struct inquiry_entry *VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = VAR_3->list; VAR_5 && VAR_6 < VAR_1; VAR_5 = VAR_5->next, VAR_6++) {
  struct inquiry_data *VAR_7 = &VAR_5->data;
  FUNC_1(&VAR_4->bdaddr, &VAR_7->bdaddr);
  VAR_4->pscan_rep_mode = VAR_7->pscan_rep_mode;
  VAR_4->pscan_period_mode = VAR_7->pscan_period_mode;
  VAR_4->pscan_mode = VAR_7->pscan_mode;
  FUNC_2(VAR_4->dev_class, VAR_7->dev_class, 3);
  VAR_4->clock_offset = VAR_7->clock_offset;
  VAR_4++;
 }

 FUNC_0("cache %p, copied %d", VAR_3, VAR_6);
 return VAR_6;
}
