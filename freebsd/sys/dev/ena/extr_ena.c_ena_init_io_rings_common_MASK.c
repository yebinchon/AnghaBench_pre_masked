
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ena_ring {int first_interrupt; scalar_t__ no_interrupt_event_cnt; int ena_dev; struct ena_adapter* adapter; int qid; } ;
struct ena_adapter {int ena_dev; } ;



__attribute__((used)) static void
FUNC_0(struct ena_adapter *VAR_0, struct ena_ring *VAR_1,
    uint16_t VAR_2)
{

 VAR_1->qid = VAR_2;
 VAR_1->adapter = VAR_0;
 VAR_1->ena_dev = VAR_0->ena_dev;
 VAR_1->first_interrupt = 0;
 VAR_1->no_interrupt_event_cnt = 0;
}
