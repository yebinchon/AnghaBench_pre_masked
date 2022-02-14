
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct tp_params {int ingress_config; int vlan_pri_map; } ;
struct TYPE_6__ {scalar_t__ fcoe; scalar_t__ iport; scalar_t__ pfvf_vld; scalar_t__ ovlan_vld; scalar_t__ vlan_vld; scalar_t__ tos; scalar_t__ proto; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ matchtype; scalar_t__ frag; } ;
struct TYPE_5__ {scalar_t__ fcoe; scalar_t__ iport; scalar_t__ pfvf_vld; scalar_t__ ovlan_vld; scalar_t__ vlan_vld; scalar_t__ tos; scalar_t__ proto; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ matchtype; scalar_t__ frag; } ;
struct t4_filter_specification {TYPE_3__ mask; TYPE_2__ val; } ;
struct TYPE_4__ {struct tp_params tp; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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

__attribute__((used)) static int
FUNC_0(struct adapter *VAR_13,
    struct t4_filter_specification *VAR_14)
{
 struct tp_params *VAR_15 = &VAR_13->params.tp;
 uint32_t VAR_16 = 0;

 if (VAR_14->val.frag || VAR_14->mask.frag)
  VAR_16 |= VAR_4;

 if (VAR_14->val.matchtype || VAR_14->mask.matchtype)
  VAR_16 |= VAR_6;

 if (VAR_14->val.macidx || VAR_14->mask.macidx)
  VAR_16 |= VAR_5;

 if (VAR_14->val.ethtype || VAR_14->mask.ethtype)
  VAR_16 |= VAR_2;

 if (VAR_14->val.proto || VAR_14->mask.proto)
  VAR_16 |= VAR_8;

 if (VAR_14->val.tos || VAR_14->mask.tos)
  VAR_16 |= VAR_9;

 if (VAR_14->val.vlan_vld || VAR_14->mask.vlan_vld)
  VAR_16 |= VAR_10;

 if (VAR_14->val.ovlan_vld || VAR_14->mask.ovlan_vld) {
  VAR_16 |= VAR_12;
  if (VAR_15->ingress_config & VAR_11)
   return (VAR_1);
 }

 if (VAR_14->val.pfvf_vld || VAR_14->mask.pfvf_vld) {
  VAR_16 |= VAR_12;
  if ((VAR_15->ingress_config & VAR_11) == 0)
   return (VAR_1);
 }

 if (VAR_14->val.iport || VAR_14->mask.iport)
  VAR_16 |= VAR_7;

 if (VAR_14->val.fcoe || VAR_14->mask.fcoe)
  VAR_16 |= VAR_3;

 if ((VAR_15->vlan_pri_map | VAR_16) != VAR_15->vlan_pri_map)
  return (VAR_0);

 return (0);
}
