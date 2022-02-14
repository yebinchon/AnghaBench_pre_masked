
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ibv_wc {int dlid_path_bits; int sl; int slid; } ;
struct ibv_grh {int version_tclass_flow; } ;
struct TYPE_2__ {int flow_label; } ;
struct ibv_ah_attr {int port_num; int src_path_bits; int sl; int dlid; TYPE_1__ grh; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ibv_ah_attr *VAR_0,
           struct ibv_wc *VAR_1,
           struct ibv_grh *VAR_2,
           uint8_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2->version_tclass_flow);
 VAR_0->grh.flow_label = VAR_4 & 0xFFFFF;
 VAR_0->dlid = VAR_1->slid;
 VAR_0->sl = VAR_1->sl;
 VAR_0->src_path_bits = VAR_1->dlid_path_bits;
 VAR_0->port_num = VAR_3;
}
