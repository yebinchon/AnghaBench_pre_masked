
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_queue_header {int consumer_head; int producer_tail; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct vmci_queue_header *VAR_0)
{

 FUNC_1(&VAR_0->producer_tail, FUNC_0(0));
 FUNC_1(&VAR_0->consumer_head, FUNC_0(0));
}
