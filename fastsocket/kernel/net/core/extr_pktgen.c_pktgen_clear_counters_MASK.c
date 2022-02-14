
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktgen_dev {int seq_num; scalar_t__ errors; scalar_t__ tx_bytes; scalar_t__ sofar; scalar_t__ idle_acc; } ;



__attribute__((used)) static void FUNC_0(struct pktgen_dev *VAR_0)
{
 VAR_0->seq_num = 1;
 VAR_0->idle_acc = 0;
 VAR_0->sofar = 0;
 VAR_0->tx_bytes = 0;
 VAR_0->errors = 0;
}
