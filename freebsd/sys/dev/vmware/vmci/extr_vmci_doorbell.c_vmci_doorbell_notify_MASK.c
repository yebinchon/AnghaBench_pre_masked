
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_privilege_flags ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vmci_handle) ;
 struct vmci_handle VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vmci_handle,int) ;

int
FUNC_2(struct vmci_handle VAR_3, vmci_privilege_flags VAR_4)
{
 struct vmci_handle VAR_5;

 if (FUNC_0(VAR_3) ||
     (VAR_4 & ~VAR_2))
  return (VAR_0);

 VAR_5 = VAR_1;

 return (FUNC_1(VAR_3, VAR_4));
}
