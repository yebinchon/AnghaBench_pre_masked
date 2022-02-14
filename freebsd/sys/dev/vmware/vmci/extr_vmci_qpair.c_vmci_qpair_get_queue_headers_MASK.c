
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmci_queue_header {int dummy; } ;
struct vmci_qpair {TYPE_2__* consume_q; TYPE_1__* produce_q; } ;
struct TYPE_4__ {struct vmci_queue_header* q_header; } ;
struct TYPE_3__ {struct vmci_queue_header* q_header; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const struct vmci_qpair *VAR_0,
    struct vmci_queue_header **VAR_1,
    struct vmci_queue_header **VAR_2)
{

 FUNC_0((VAR_0->produce_q != ((void*)0)) && (VAR_0->consume_q != ((void*)0)));
 *VAR_1 = VAR_0->produce_q->q_header;
 *VAR_2 = VAR_0->consume_q->q_header;
}
