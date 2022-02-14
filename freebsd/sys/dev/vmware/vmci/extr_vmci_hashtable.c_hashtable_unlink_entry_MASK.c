
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {struct vmci_hash_entry** entries; int size; } ;
struct vmci_hash_entry {struct vmci_hash_entry* next; int handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct vmci_hashtable *VAR_2,
    struct vmci_hash_entry *VAR_3)
{
 int VAR_4;
 struct vmci_hash_entry *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->handle, VAR_2->size);

 VAR_5 = ((void*)0);
 VAR_6 = VAR_2->entries[VAR_7];
 while (1) {
  if (VAR_6 == ((void*)0)) {
   VAR_4 = VAR_0;
   break;
  }
  if (FUNC_1(VAR_6->handle, VAR_3->handle)) {
   FUNC_0(VAR_6 == VAR_3);


   if (VAR_5)
    VAR_5->next = VAR_6->next;
   else
    VAR_2->entries[VAR_7] = VAR_6->next;
   VAR_6->next = ((void*)0);
   VAR_4 = VAR_1;
   break;
  }
  VAR_5 = VAR_6;
  VAR_6 = VAR_6->next;
 }
 return (VAR_4);
}
