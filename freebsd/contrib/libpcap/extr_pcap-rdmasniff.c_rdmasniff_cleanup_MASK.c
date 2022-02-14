
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcap_rdmasniff {int oneshot_buffer; int context; int channel; int pd; int cq; int qp; int flow; int mr; } ;
struct TYPE_4__ {struct pcap_rdmasniff* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(pcap_t *VAR_0)
{
 struct pcap_rdmasniff *VAR_1 = VAR_0->priv;

 FUNC_3(VAR_1->mr);
 FUNC_6(VAR_1->flow);
 FUNC_7(VAR_1->qp);
 FUNC_5(VAR_1->cq);
 FUNC_2(VAR_1->pd);
 FUNC_4(VAR_1->channel);
 FUNC_1(VAR_1->context);
 FUNC_0(VAR_1->oneshot_buffer);

 FUNC_8(VAR_0);
}
