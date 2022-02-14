
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ibv_sa_path_rec {int hop_limit; int reversible; int mtu; int rate; int packet_life_time; int preference; int sl; int pkey; int traffic_class; int flow_label; int slid; int dlid; int sgid; int dgid; } ;
struct TYPE_2__ {int reversible_numpath; int mtu; int rate; int packetlifetime; int qosclass_sl; int pkey; int tclass; int flowlabel_hoplimit; int slid; int dlid; int sgid; int dgid; } ;
struct ibv_path_data {int flags; TYPE_1__ path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ibv_path_data*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ibv_sa_path_rec *VAR_0,
          struct ibv_path_data *VAR_1)
{
 uint32_t VAR_2;

 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->path.dgid = VAR_0->dgid;
 VAR_1->path.sgid = VAR_0->sgid;
 VAR_1->path.dlid = VAR_0->dlid;
 VAR_1->path.slid = VAR_0->slid;
 VAR_2 = FUNC_0(VAR_0->flow_label) << 8;
 VAR_1->path.flowlabel_hoplimit = FUNC_2(VAR_2 | VAR_0->hop_limit);
 VAR_1->path.tclass = VAR_0->traffic_class;
 VAR_1->path.reversible_numpath = VAR_0->reversible << 7 | 1;
 VAR_1->path.pkey = VAR_0->pkey;
 VAR_1->path.qosclass_sl = FUNC_1(VAR_0->sl);
 VAR_1->path.mtu = VAR_0->mtu | 2 << 6;
 VAR_1->path.rate = VAR_0->rate | 2 << 6;
 VAR_1->path.packetlifetime = VAR_0->packet_life_time | 2 << 6;
 VAR_1->flags= VAR_0->preference;
}
