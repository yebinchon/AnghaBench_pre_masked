
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_id ;
struct vmci_subscription {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmci_subscription* FUNC_0 (int ) ;
 int FUNC_1 (struct vmci_subscription*,int) ;

int
FUNC_2(vmci_id VAR_2)
{
 struct vmci_subscription *VAR_3;





 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_3, sizeof(*VAR_3));

 return (VAR_1);
}
