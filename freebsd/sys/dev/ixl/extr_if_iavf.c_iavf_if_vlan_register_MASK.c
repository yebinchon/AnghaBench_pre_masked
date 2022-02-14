
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixl_vsi {int num_vlans; } ;
struct iavf_vlan_filter {int vlan; int flags; } ;
struct iavf_sc {int vlan_filters; struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct iavf_vlan_filter*,int ) ;
 int FUNC_1 (struct iavf_sc*,int ) ;
 struct iavf_sc* FUNC_2 (int ) ;
 struct iavf_vlan_filter* FUNC_3 (int,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_6, u16 VAR_7)
{
 struct iavf_sc *VAR_8 = FUNC_2(VAR_6);
 struct ixl_vsi *VAR_9 = &VAR_8->vsi;
 struct iavf_vlan_filter *VAR_10;

 if ((VAR_7 == 0) || (VAR_7 > 4095))
  return;

 ++VAR_9->num_vlans;
 VAR_10 = FUNC_3(sizeof(struct iavf_vlan_filter), VAR_2, VAR_3 | VAR_4);
 FUNC_0(VAR_8->vlan_filters, VAR_10, VAR_5);
 VAR_10->vlan = VAR_7;
 VAR_10->flags = VAR_1;

 FUNC_1(VAR_8, VAR_0);
}
