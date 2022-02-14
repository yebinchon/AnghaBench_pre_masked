
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inquiry_entry {struct inquiry_entry* next; } ;
struct inquiry_cache {struct inquiry_entry* list; } ;
struct hci_dev {struct inquiry_cache inq_cache; } ;


 int FUNC_0 (char*,struct inquiry_cache*) ;
 int FUNC_1 (struct inquiry_entry*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0)
{
 struct inquiry_cache *VAR_1 = &VAR_0->inq_cache;
 struct inquiry_entry *VAR_2 = VAR_1->list, *VAR_3;

 FUNC_0("cache %p", VAR_1);

 VAR_1->list = ((void*)0);
 while ((VAR_3 = VAR_2)) {
  VAR_2 = VAR_3->next;
  FUNC_1(VAR_3);
 }
}
