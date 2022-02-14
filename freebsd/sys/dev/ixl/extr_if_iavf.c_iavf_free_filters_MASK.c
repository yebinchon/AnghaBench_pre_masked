
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_vlan_filter {int dummy; } ;
struct iavf_sc {struct iavf_vlan_filter* vlan_filters; struct iavf_vlan_filter* mac_filters; } ;
typedef struct iavf_vlan_filter iavf_mac_filter ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_vlan_filter*) ;
 struct iavf_vlan_filter* FUNC_1 (struct iavf_vlan_filter*) ;
 int FUNC_2 (struct iavf_vlan_filter*,int ) ;
 int FUNC_3 (struct iavf_vlan_filter*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct iavf_sc *VAR_2)
{
 struct iavf_mac_filter *VAR_3;
 struct iavf_vlan_filter *VAR_4;

 while (!FUNC_0(VAR_2->mac_filters)) {
  VAR_3 = FUNC_1(VAR_2->mac_filters);
  FUNC_2(VAR_2->mac_filters, VAR_1);
  FUNC_3(VAR_3, VAR_0);
 }
 FUNC_3(VAR_2->mac_filters, VAR_0);
 while (!FUNC_0(VAR_2->vlan_filters)) {
  VAR_4 = FUNC_1(VAR_2->vlan_filters);
  FUNC_2(VAR_2->vlan_filters, VAR_1);
  FUNC_3(VAR_4, VAR_0);
 }
 FUNC_3(VAR_2->vlan_filters, VAR_0);
}
