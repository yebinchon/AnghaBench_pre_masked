
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdaddr; } ;
struct inquiry_entry {TYPE_1__ data; struct inquiry_entry* next; } ;
struct inquiry_cache {struct inquiry_entry* list; } ;
struct hci_dev {struct inquiry_cache inq_cache; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,struct inquiry_cache*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

struct inquiry_entry *FUNC_3(struct hci_dev *VAR_0, bdaddr_t *VAR_1)
{
 struct inquiry_cache *VAR_2 = &VAR_0->inq_cache;
 struct inquiry_entry *VAR_3;

 FUNC_0("cache %p, %s", VAR_2, FUNC_2(VAR_1));

 for (VAR_3 = VAR_2->list; VAR_3; VAR_3 = VAR_3->next)
  if (!FUNC_1(&VAR_3->data.bdaddr, VAR_1))
   break;
 return VAR_3;
}
