
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct ibv_sa_path_rec {int reversible; int numb_path; int sl; int mtu_selector; int mtu; int rate_selector; int rate; int packet_life_time_selector; int packet_life_time; void* preference; int pkey; int traffic_class; void* hop_limit; int flow_label; scalar_t__ raw_traffic; int slid; int dlid; int sgid; int dgid; } ;
struct TYPE_2__ {int reversible_numpath; int mtu; int rate; int packetlifetime; int qosclass_sl; int pkey; int tclass; int flowlabel_hoplimit; int slid; int dlid; int sgid; int dgid; } ;
struct ibv_path_data {scalar_t__ flags; TYPE_1__ path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ibv_path_data *VAR_0,
         struct ibv_sa_path_rec *VAR_1)
{
 uint32_t VAR_2;

 VAR_1->dgid = VAR_0->path.dgid;
 VAR_1->sgid = VAR_0->path.sgid;
 VAR_1->dlid = VAR_0->path.dlid;
 VAR_1->slid = VAR_0->path.slid;
 VAR_1->raw_traffic = 0;

 VAR_2 = FUNC_1(VAR_0->path.flowlabel_hoplimit);
 VAR_1->flow_label = FUNC_2(VAR_2 >> 8);
 VAR_1->hop_limit = (uint8_t) VAR_2;

 VAR_1->traffic_class = VAR_0->path.tclass;
 VAR_1->reversible = VAR_0->path.reversible_numpath >> 7;
 VAR_1->numb_path = 1;
 VAR_1->pkey = VAR_0->path.pkey;
 VAR_1->sl = FUNC_0(VAR_0->path.qosclass_sl) & 0xF;
 VAR_1->mtu_selector = 2;
 VAR_1->mtu = VAR_0->path.mtu & 0x1F;
 VAR_1->rate_selector = 2;
 VAR_1->rate = VAR_0->path.rate & 0x1F;
 VAR_1->packet_life_time_selector = 2;
 VAR_1->packet_life_time = VAR_0->path.packetlifetime & 0x1F;

 VAR_1->preference = (uint8_t) VAR_0->flags;
}
