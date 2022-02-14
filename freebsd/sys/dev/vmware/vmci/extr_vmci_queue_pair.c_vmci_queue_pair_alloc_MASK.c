
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmci_privilege_flags ;
typedef int vmci_id ;
typedef int uint64_t ;
typedef int uint32_t ;
struct vmci_queue {int dummy; } ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmci_handle*,struct vmci_queue**,int ,struct vmci_queue**,int ,int ,int,int ) ;

int
FUNC_1(struct vmci_handle *VAR_2, struct vmci_queue **VAR_3,
    uint64_t VAR_4, struct vmci_queue **VAR_5, uint64_t VAR_6,
    vmci_id VAR_7, uint32_t VAR_8, vmci_privilege_flags VAR_9)
{

 if (!VAR_2 || !VAR_3 || !VAR_5 ||
     (!VAR_4 && !VAR_6) || (VAR_8 & ~VAR_1))
  return (VAR_0);

 return (FUNC_0(VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));
}
