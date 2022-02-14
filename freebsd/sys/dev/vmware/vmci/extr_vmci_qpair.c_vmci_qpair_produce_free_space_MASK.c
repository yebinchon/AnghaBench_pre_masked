
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_queue_header {int dummy; } ;
struct vmci_qpair {int produce_q_size; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct vmci_qpair const*,struct vmci_queue_header**,struct vmci_queue_header**) ;
 int FUNC_1 (struct vmci_queue_header*,struct vmci_queue_header*,int ) ;

int64_t
FUNC_2(const struct vmci_qpair *VAR_1)
{
 struct vmci_queue_header *VAR_2;
 struct vmci_queue_header *VAR_3;
 int64_t VAR_4;

 if (!VAR_1)
  return (VAR_0);

 FUNC_0(VAR_1, &VAR_3,
     &VAR_2);
 VAR_4 = FUNC_1(VAR_3, VAR_2,
     VAR_1->produce_q_size);

 return (VAR_4);
}
