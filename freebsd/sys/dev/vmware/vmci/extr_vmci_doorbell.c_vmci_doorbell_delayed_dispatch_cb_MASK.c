
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_doorbell_entry {int resource; int client_data; int (* notify_cb ) (int ) ;} ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct vmci_doorbell_entry *VAR_1 = (struct vmci_doorbell_entry *)VAR_0;

 FUNC_0(VAR_0);

 VAR_1->notify_cb(VAR_1->client_data);

 FUNC_2(&VAR_1->resource);
}
