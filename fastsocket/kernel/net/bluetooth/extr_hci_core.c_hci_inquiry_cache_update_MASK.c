
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inquiry_entry {void* timestamp; int data; struct inquiry_entry* next; } ;
struct inquiry_data {int bdaddr; } ;
struct inquiry_cache {void* timestamp; struct inquiry_entry* list; } ;
struct hci_dev {struct inquiry_cache inq_cache; } ;


 int FUNC_0 (char*,struct inquiry_cache*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct inquiry_entry* FUNC_2 (struct hci_dev*,int *) ;
 void* VAR_1 ;
 struct inquiry_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct inquiry_data*,int) ;

void FUNC_5(struct hci_dev *VAR_2, struct inquiry_data *VAR_3)
{
 struct inquiry_cache *VAR_4 = &VAR_2->inq_cache;
 struct inquiry_entry *VAR_5;

 FUNC_0("cache %p, %s", VAR_4, FUNC_1(&VAR_3->bdaddr));

 if (!(VAR_5 = FUNC_2(VAR_2, &VAR_3->bdaddr))) {

  if (!(VAR_5 = FUNC_3(sizeof(struct inquiry_entry), VAR_0)))
   return;
  VAR_5->next = VAR_4->list;
  VAR_4->list = VAR_5;
 }

 FUNC_4(&VAR_5->data, VAR_3, sizeof(*VAR_3));
 VAR_5->timestamp = VAR_1;
 VAR_4->timestamp = VAR_1;
}
