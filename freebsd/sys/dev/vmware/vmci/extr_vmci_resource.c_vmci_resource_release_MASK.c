
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_resource {int hash_entry; } ;


 int FUNC_0 (struct vmci_resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct vmci_resource*) ;

int
FUNC_3(struct vmci_resource *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_1,
     &VAR_2->hash_entry);
 if (VAR_3 == VAR_0)
  FUNC_2(VAR_2);





 return (VAR_3);
}
