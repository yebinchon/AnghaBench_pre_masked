
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmci_queue_header {int producer_tail; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline uint64_t
FUNC_1(const struct vmci_queue_header *VAR_0)
{
 struct vmci_queue_header *VAR_1 = (struct vmci_queue_header *)VAR_0;
 return (FUNC_0(&VAR_1->producer_tail));
}
