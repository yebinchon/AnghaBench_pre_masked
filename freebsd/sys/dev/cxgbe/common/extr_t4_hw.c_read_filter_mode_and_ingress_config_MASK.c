
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
struct tp_params {int hash_filter_mask; void* frag_shift; void* matchtype_shift; void* macmatch_shift; void* ethertype_shift; void* protocol_shift; void* tos_shift; void* vlan_shift; void* vnic_shift; void* port_shift; void* fcoe_shift; int ingress_config; int vlan_pri_map; } ;
struct TYPE_2__ {struct tp_params tp; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 void* FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int *,int,int ,int) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_13,
    bool VAR_14)
{
 uint32_t VAR_15;
 struct tp_params *VAR_16 = &VAR_13->params.tp;

 FUNC_4(VAR_13, &VAR_16->vlan_pri_map, 1, VAR_1,
     VAR_14);
 FUNC_4(VAR_13, &VAR_16->ingress_config, 1, VAR_0,
     VAR_14);






 VAR_16->fcoe_shift = FUNC_2(VAR_13, VAR_4);
 VAR_16->port_shift = FUNC_2(VAR_13, VAR_8);
 VAR_16->vnic_shift = FUNC_2(VAR_13, VAR_12);
 VAR_16->vlan_shift = FUNC_2(VAR_13, VAR_11);
 VAR_16->tos_shift = FUNC_2(VAR_13, VAR_10);
 VAR_16->protocol_shift = FUNC_2(VAR_13, VAR_9);
 VAR_16->ethertype_shift = FUNC_2(VAR_13, VAR_3);
 VAR_16->macmatch_shift = FUNC_2(VAR_13, VAR_6);
 VAR_16->matchtype_shift = FUNC_2(VAR_13, VAR_7);
 VAR_16->frag_shift = FUNC_2(VAR_13, VAR_5);

 if (FUNC_1(VAR_13) > VAR_2) {
  VAR_15 = FUNC_3(VAR_13, FUNC_0(3));
  VAR_13->params.tp.hash_filter_mask = VAR_15;
  VAR_15 = FUNC_3(VAR_13, FUNC_0(4));
  VAR_13->params.tp.hash_filter_mask |= (u64)VAR_15 << 32;
 }
}
