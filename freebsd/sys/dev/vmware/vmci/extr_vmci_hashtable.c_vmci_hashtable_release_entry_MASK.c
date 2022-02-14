
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {int lock; } ;
struct vmci_hash_entry {int dummy; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmci_hashtable*,struct vmci_hash_entry*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct vmci_hashtable *VAR_0,
    struct vmci_hash_entry *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->lock);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_3(&VAR_0->lock);

 return (VAR_2);
}
