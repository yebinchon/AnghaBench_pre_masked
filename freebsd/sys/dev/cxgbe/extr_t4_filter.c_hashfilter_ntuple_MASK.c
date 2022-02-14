
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct tp_params {unsigned long long vlan_shift; unsigned long long port_shift; unsigned long long protocol_shift; unsigned long long tos_shift; unsigned long long vnic_shift; int ingress_config; unsigned long long macmatch_shift; unsigned long long ethertype_shift; unsigned long long matchtype_shift; unsigned long long frag_shift; unsigned long long fcoe_shift; unsigned long long hash_filter_mask; } ;
struct TYPE_6__ {unsigned long long vlan; unsigned long long vnic; scalar_t__ fcoe; scalar_t__ frag; scalar_t__ matchtype; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ tos; scalar_t__ proto; scalar_t__ iport; } ;
struct TYPE_5__ {scalar_t__ fcoe; scalar_t__ frag; scalar_t__ matchtype; scalar_t__ ethtype; scalar_t__ macidx; int ovlan_vld; int pfvf_vld; scalar_t__ vnic; scalar_t__ tos; scalar_t__ proto; scalar_t__ iport; scalar_t__ vlan; } ;
struct t4_filter_specification {TYPE_3__ val; TYPE_2__ mask; } ;
struct TYPE_4__ {struct tp_params tp; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;

__attribute__((used)) static int
FUNC_1(struct adapter *VAR_13, const struct t4_filter_specification *VAR_14,
    uint64_t *VAR_15)
{
 struct tp_params *VAR_16 = &VAR_13->params.tp;
 uint64_t VAR_17;

 *VAR_15 = VAR_17 = 0;





 if (VAR_16->vlan_shift >= 0 && VAR_14->mask.vlan) {
  *VAR_15 |= (VAR_1 | VAR_14->val.vlan) << VAR_16->vlan_shift;
  VAR_17 |= VAR_11 << VAR_16->vlan_shift;
 }

 if (VAR_16->port_shift >= 0 && VAR_14->mask.iport) {
  *VAR_15 |= (uint64_t)VAR_14->val.iport << VAR_16->port_shift;
  VAR_17 |= VAR_8 << VAR_16->port_shift;
 }

 if (VAR_16->protocol_shift >= 0 && VAR_14->mask.proto) {
  *VAR_15 |= (uint64_t)VAR_14->val.proto << VAR_16->protocol_shift;
  VAR_17 |= VAR_9 << VAR_16->protocol_shift;
 }

 if (VAR_16->tos_shift >= 0 && VAR_14->mask.tos) {
  *VAR_15 |= (uint64_t)(VAR_14->val.tos) << VAR_16->tos_shift;
  VAR_17 |= VAR_10 << VAR_16->tos_shift;
 }

 if (VAR_16->vnic_shift >= 0 && VAR_14->mask.vnic) {

  if (VAR_16->ingress_config & VAR_2)
   FUNC_0(VAR_14->mask.pfvf_vld);
  else
   FUNC_0(VAR_14->mask.ovlan_vld);

  *VAR_15 |= ((1ULL << 16) | VAR_14->val.vnic) << VAR_16->vnic_shift;
  VAR_17 |= VAR_12 << VAR_16->vnic_shift;
 }

 if (VAR_16->macmatch_shift >= 0 && VAR_14->mask.macidx) {
  *VAR_15 |= (uint64_t)(VAR_14->val.macidx) << VAR_16->macmatch_shift;
  VAR_17 |= VAR_6 << VAR_16->macmatch_shift;
 }

 if (VAR_16->ethertype_shift >= 0 && VAR_14->mask.ethtype) {
  *VAR_15 |= (uint64_t)(VAR_14->val.ethtype) << VAR_16->ethertype_shift;
  VAR_17 |= VAR_3 << VAR_16->ethertype_shift;
 }

 if (VAR_16->matchtype_shift >= 0 && VAR_14->mask.matchtype) {
  *VAR_15 |= (uint64_t)(VAR_14->val.matchtype) << VAR_16->matchtype_shift;
  VAR_17 |= VAR_7 << VAR_16->matchtype_shift;
 }

 if (VAR_16->frag_shift >= 0 && VAR_14->mask.frag) {
  *VAR_15 |= (uint64_t)(VAR_14->val.frag) << VAR_16->frag_shift;
  VAR_17 |= VAR_5 << VAR_16->frag_shift;
 }

 if (VAR_16->fcoe_shift >= 0 && VAR_14->mask.fcoe) {
  *VAR_15 |= (uint64_t)(VAR_14->val.fcoe) << VAR_16->fcoe_shift;
  VAR_17 |= VAR_4 << VAR_16->fcoe_shift;
 }


 if (VAR_17 != VAR_16->hash_filter_mask)
  return (VAR_0);

 return (0);
}
