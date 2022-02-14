
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sport; scalar_t__ dport; scalar_t__ vnic; scalar_t__ vlan; scalar_t__ macidx; scalar_t__ frag; scalar_t__ matchtype; scalar_t__ iport; scalar_t__ fcoe; scalar_t__ proto; scalar_t__ tos; scalar_t__ ethtype; int * dip; int * sip; } ;
struct TYPE_3__ {scalar_t__ ethtype; scalar_t__ tos; scalar_t__ proto; scalar_t__ fcoe; scalar_t__ iport; scalar_t__ matchtype; scalar_t__ frag; scalar_t__ macidx; scalar_t__ vlan_vld; scalar_t__ ovlan_vld; scalar_t__ pfvf_vld; } ;
struct t4_filter_specification {scalar_t__ type; TYPE_2__ val; TYPE_1__ mask; scalar_t__ hash; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static bool
FUNC_2(struct t4_filter_specification *VAR_0,
    struct t4_filter_specification *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0->hash && VAR_1->hash);

 if (VAR_0->type != VAR_1->type)
  return (0);

 VAR_2 = VAR_0->type ? 16 : 4;
 if (FUNC_1(&VAR_0->val.sip[0], &VAR_1->val.sip[0], VAR_2) ||
     FUNC_1(&VAR_0->val.dip[0], &VAR_1->val.dip[0], VAR_2) ||
     VAR_0->val.sport != VAR_1->val.sport ||
     VAR_0->val.dport != VAR_1->val.dport)
  return (0);







 if ((VAR_0->mask.pfvf_vld || VAR_0->mask.ovlan_vld) &&
     VAR_0->val.vnic != VAR_1->val.vnic)
  return (0);
 if (VAR_0->mask.vlan_vld && VAR_0->val.vlan != VAR_1->val.vlan)
  return (0);
 if (VAR_0->mask.macidx && VAR_0->val.macidx != VAR_1->val.macidx)
  return (0);
 if (VAR_0->mask.frag && VAR_0->val.frag != VAR_1->val.frag)
  return (0);
 if (VAR_0->mask.matchtype && VAR_0->val.matchtype != VAR_1->val.matchtype)
  return (0);
 if (VAR_0->mask.iport && VAR_0->val.iport != VAR_1->val.iport)
  return (0);
 if (VAR_0->mask.fcoe && VAR_0->val.fcoe != VAR_1->val.fcoe)
  return (0);
 if (VAR_0->mask.proto && VAR_0->val.proto != VAR_1->val.proto)
  return (0);
 if (VAR_0->mask.tos && VAR_0->val.tos != VAR_1->val.tos)
  return (0);
 if (VAR_0->mask.ethtype && VAR_0->val.ethtype != VAR_1->val.ethtype)
  return (0);

 return (1);
}
