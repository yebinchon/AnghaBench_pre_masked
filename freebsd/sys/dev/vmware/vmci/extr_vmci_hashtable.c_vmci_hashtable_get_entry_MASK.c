
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {int lock; } ;
struct vmci_hash_entry {int dummy; } ;
struct vmci_handle {int dummy; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 scalar_t__ FUNC_1 (struct vmci_handle,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct vmci_hash_entry* FUNC_3 (struct vmci_hashtable*,struct vmci_handle) ;
 int FUNC_4 (int *) ;

struct vmci_hash_entry *
FUNC_5(struct vmci_hashtable *VAR_1,
    struct vmci_handle VAR_2)
{
 struct vmci_hash_entry *VAR_3;

 if (FUNC_1(VAR_2, VAR_0))
  return (((void*)0));

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->lock);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 FUNC_4(&VAR_1->lock);

 return (VAR_3);
}
