
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inquiry_data {int pscan_rep_mode; int pscan_period_mode; int pscan_mode; int* dev_class; int rssi; int ssp_mode; int clock_offset; int bdaddr; } ;
struct inquiry_entry {int timestamp; struct inquiry_data data; struct inquiry_entry* next; } ;
struct inquiry_cache {struct inquiry_entry* list; } ;
struct hci_dev {struct inquiry_cache inq_cache; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int bdaddr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *) ;
 struct hci_dev* FUNC_3 (struct device*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (char*,char*,char*,int,int,int,int,int,int,int,int,int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct hci_dev *VAR_3 = FUNC_3(VAR_0);
 struct inquiry_cache *VAR_4 = &VAR_3->inq_cache;
 struct inquiry_entry *VAR_5;
 int VAR_6 = 0;

 FUNC_4(VAR_3);

 for (VAR_5 = VAR_4->list; VAR_5; VAR_5 = VAR_5->next) {
  struct inquiry_data *VAR_7 = &VAR_5->data;
  bdaddr_t VAR_8;
  FUNC_1(&VAR_8, &VAR_7->bdaddr);
  VAR_6 += FUNC_6(VAR_2 + VAR_6, "%s %d %d %d 0x%.2x%.2x%.2x 0x%.4x %d %d %u\n",
    FUNC_2(&VAR_8),
    VAR_7->pscan_rep_mode, VAR_7->pscan_period_mode,
    VAR_7->pscan_mode, VAR_7->dev_class[2],
    VAR_7->dev_class[1], VAR_7->dev_class[0],
    FUNC_0(VAR_7->clock_offset),
    VAR_7->rssi, VAR_7->ssp_mode, VAR_5->timestamp);
 }

 FUNC_5(VAR_3);
 return VAR_6;
}
