
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_resource_type ;
struct vmci_resource {int hash_entry; } ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct vmci_resource* FUNC_1 (struct vmci_handle,int ) ;
 int FUNC_2 (struct vmci_resource*) ;

void
FUNC_3(struct vmci_handle VAR_1,
    vmci_resource_type VAR_2)
{
 struct vmci_resource *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return;


 FUNC_0(VAR_0, &VAR_3->hash_entry);

 FUNC_2(VAR_3);

}
