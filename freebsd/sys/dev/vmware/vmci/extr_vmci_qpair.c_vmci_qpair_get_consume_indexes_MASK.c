
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vmci_queue_header {int dummy; } ;
struct vmci_qpair {scalar_t__ consume_q_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmci_qpair const*,struct vmci_queue_header**,struct vmci_queue_header**) ;
 int FUNC_1 (struct vmci_queue_header*,struct vmci_queue_header*,scalar_t__*,scalar_t__*) ;

int
FUNC_2(const struct vmci_qpair *VAR_3,
    uint64_t *VAR_4, uint64_t *VAR_5)
{
 struct vmci_queue_header *VAR_6;
 struct vmci_queue_header *VAR_7;

 if (!VAR_3)
  return (VAR_0);

 FUNC_0(VAR_3, &VAR_7,
     &VAR_6);
 FUNC_1(VAR_6, VAR_7,
     VAR_4, VAR_5);

 if ((VAR_4 && *VAR_4 >= VAR_3->consume_q_size) ||
     (VAR_5 && *VAR_5 >= VAR_3->consume_q_size))
  return (VAR_1);

 return (VAR_2);
}
