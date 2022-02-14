
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {struct vmci_hash_entry** entries; int size; } ;
struct vmci_handle {int dummy; } ;
struct vmci_hash_entry {struct vmci_hash_entry* next; struct vmci_handle handle; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 scalar_t__ FUNC_1 (struct vmci_handle) ;
 scalar_t__ FUNC_2 (struct vmci_handle) ;
 int FUNC_3 (struct vmci_handle,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_4(struct vmci_hashtable *VAR_1,
    struct vmci_handle VAR_2)

{
 struct vmci_hash_entry *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);

 VAR_4 = FUNC_3(VAR_2, VAR_1->size);

 VAR_3 = VAR_1->entries[VAR_4];
 while (VAR_3) {
  if (FUNC_2(VAR_3->handle) ==
      FUNC_2(VAR_2))
   if ((FUNC_1(VAR_3->handle) ==
       FUNC_1(VAR_2)) ||
       (VAR_0 == FUNC_1(VAR_2)) ||
       (VAR_0 == FUNC_1(VAR_3->handle)))
    return (1);
  VAR_3 = VAR_3->next;
 }

 return (0);
}
