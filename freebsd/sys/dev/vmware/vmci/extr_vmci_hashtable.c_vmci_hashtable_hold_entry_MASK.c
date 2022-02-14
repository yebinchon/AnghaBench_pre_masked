
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {int lock; int ref_count; } ;
struct vmci_hash_entry {int lock; int ref_count; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct vmci_hashtable *VAR_0,
    struct vmci_hash_entry *VAR_1)
{

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 FUNC_1(&VAR_0->lock);
 VAR_1->ref_count++;
 FUNC_2(&VAR_0->lock);
}
