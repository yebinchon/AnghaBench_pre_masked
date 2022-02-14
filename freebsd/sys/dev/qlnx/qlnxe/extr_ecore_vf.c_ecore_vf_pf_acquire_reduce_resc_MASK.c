
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf_pf_resc_request {int num_cids; int num_mc_filters; int num_vlan_filters; int num_mac_filters; int num_sbs; int num_rxqs; int num_txqs; } ;
struct pf_vf_resc {int num_cids; int num_mc_filters; int num_vlan_filters; int num_mac_filters; int num_sbs; int num_rxqs; int num_txqs; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_1,
         struct vf_pf_resc_request *VAR_2,
         struct pf_vf_resc *VAR_3)
{
 FUNC_0(VAR_1, VAR_0,
     "PF unwilling to fullill resource request: rxq [%02x/%02x] txq [%02x/%02x] sbs [%02x/%02x] mac [%02x/%02x] vlan [%02x/%02x] mc [%02x/%02x] cids [%02x/%02x]. Try PF recommended amount\n",
     VAR_2->num_rxqs, VAR_3->num_rxqs,
     VAR_2->num_rxqs, VAR_3->num_txqs,
     VAR_2->num_sbs, VAR_3->num_sbs,
     VAR_2->num_mac_filters, VAR_3->num_mac_filters,
     VAR_2->num_vlan_filters, VAR_3->num_vlan_filters,
     VAR_2->num_mc_filters, VAR_3->num_mc_filters,
     VAR_2->num_cids, VAR_3->num_cids);


 VAR_2->num_txqs = VAR_3->num_txqs;
 VAR_2->num_rxqs = VAR_3->num_rxqs;
 VAR_2->num_sbs = VAR_3->num_sbs;
 VAR_2->num_mac_filters = VAR_3->num_mac_filters;
 VAR_2->num_vlan_filters = VAR_3->num_vlan_filters;
 VAR_2->num_mc_filters = VAR_3->num_mc_filters;
 VAR_2->num_cids = VAR_3->num_cids;
}
