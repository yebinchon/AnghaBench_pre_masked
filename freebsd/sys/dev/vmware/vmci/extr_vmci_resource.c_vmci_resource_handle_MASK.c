
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_handle {int dummy; } ;
struct TYPE_2__ {struct vmci_handle handle; } ;
struct vmci_resource {TYPE_1__ hash_entry; } ;


 int FUNC_0 (struct vmci_resource*) ;

struct vmci_handle
FUNC_1(struct vmci_resource *VAR_0)
{

 FUNC_0(VAR_0);
 return (VAR_0->hash_entry.handle);
}
