
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vmci_id ;
struct vmci_handle {void* resource; void* context; } ;



__attribute__((used)) static inline struct vmci_handle
FUNC_0(vmci_id VAR_0, vmci_id VAR_1)
{
 struct vmci_handle VAR_2;

 VAR_2.context = VAR_0;
 VAR_2.resource = VAR_1;
 return (VAR_2);
}
