
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; int dgid; } ;
struct ibv_kern_ah_attr {int port_num; int is_global; int static_rate; int src_path_bits; int sl; int dlid; TYPE_3__ grh; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;
struct ibv_ah_attr {int port_num; int is_global; int static_rate; int src_path_bits; int sl; int dlid; TYPE_2__ grh; } ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct ibv_ah_attr *VAR_0,
    struct ibv_kern_ah_attr *VAR_1)
{
 FUNC_0(VAR_0->grh.dgid.raw, VAR_1->grh.dgid, sizeof VAR_0->grh.dgid);
 VAR_0->grh.flow_label = VAR_1->grh.flow_label;
 VAR_0->grh.sgid_index = VAR_1->grh.sgid_index;
 VAR_0->grh.hop_limit = VAR_1->grh.hop_limit;
 VAR_0->grh.traffic_class = VAR_1->grh.traffic_class;

 VAR_0->dlid = VAR_1->dlid;
 VAR_0->sl = VAR_1->sl;
 VAR_0->src_path_bits = VAR_1->src_path_bits;
 VAR_0->static_rate = VAR_1->static_rate;
 VAR_0->is_global = VAR_1->is_global;
 VAR_0->port_num = VAR_1->port_num;
}
