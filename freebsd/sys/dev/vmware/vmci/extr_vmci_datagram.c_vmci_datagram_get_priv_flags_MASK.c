
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_privilege_flags ;
struct vmci_handle {scalar_t__ context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct vmci_handle,int *) ;

int
FUNC_1(struct vmci_handle VAR_2,
    vmci_privilege_flags *VAR_3)
{

 if (VAR_3 == ((void*)0) || VAR_2.context == VAR_1)
  return (VAR_0);

 return (FUNC_0(VAR_2.context, VAR_2,
     VAR_3));
}
