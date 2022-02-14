
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_hash_entry {scalar_t__ ref_count; struct vmci_handle handle; } ;


 int FUNC_0 (struct vmci_hash_entry*) ;

void
FUNC_1(struct vmci_hash_entry *VAR_0,
    struct vmci_handle VAR_1)
{

 FUNC_0(VAR_0);
 VAR_0->handle = VAR_1;
 VAR_0->ref_count = 0;
}
