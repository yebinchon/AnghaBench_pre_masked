
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_queue_header {struct vmci_handle handle; } ;


 int FUNC_0 (struct vmci_queue_header*) ;

__attribute__((used)) static inline void
FUNC_1(struct vmci_queue_header *VAR_0,
    const struct vmci_handle VAR_1)
{

 VAR_0->handle = VAR_1;
 FUNC_0(VAR_0);
}
