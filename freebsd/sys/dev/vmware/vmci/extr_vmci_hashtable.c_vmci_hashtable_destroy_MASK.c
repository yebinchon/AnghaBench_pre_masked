
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_hashtable {int size; int lock; struct vmci_hashtable* entries; } ;


 int FUNC_0 (struct vmci_hashtable*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmci_hashtable*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct vmci_hashtable *VAR_0)
{

 FUNC_0(VAR_0);

 FUNC_3(&VAR_0->lock);
 FUNC_2(VAR_0->entries, sizeof(*VAR_0->entries) *
     VAR_0->size);
 VAR_0->entries = ((void*)0);
 FUNC_4(&VAR_0->lock);
 FUNC_1(&VAR_0->lock);
 FUNC_2(VAR_0, sizeof(*VAR_0));
}
