
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t uint64_t ;
struct pcap_rdmasniff {int qp; TYPE_1__* mr; } ;
struct ibv_sge {uintptr_t length; uintptr_t addr; int lkey; } ;
struct ibv_recv_wr {uintptr_t wr_id; int num_sge; int * next; struct ibv_sge* sg_list; } ;
struct TYPE_5__ {scalar_t__ buffer; struct pcap_rdmasniff* priv; } ;
typedef TYPE_2__ pcap_t ;
struct TYPE_4__ {int lkey; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;

__attribute__((used)) static void
FUNC_1(pcap_t *VAR_1, uint64_t VAR_2)
{
 struct pcap_rdmasniff *VAR_3 = VAR_1->priv;
 struct ibv_sge VAR_4;
 struct ibv_recv_wr VAR_5, *VAR_6;

 VAR_4.length = VAR_0;
 VAR_4.addr = (uintptr_t) VAR_1->buffer + VAR_0 * VAR_2;
 VAR_4.lkey = VAR_3->mr->lkey;

 VAR_5.wr_id = VAR_2;
 VAR_5.num_sge = 1;
 VAR_5.sg_list = &VAR_4;
 VAR_5.next = ((void*)0);

 FUNC_0(VAR_3->qp, &VAR_5, &VAR_6);
}
