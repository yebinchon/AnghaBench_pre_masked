
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_tdls_peer {int supp_oper_classes_len; int supp_oper_classes; int supp_channels_len; int supp_channels; int ext_capab_len; int ext_capab; int wmm_capable; int qos_info; int vht_capabilities; int ht_capabilities; int supp_rates_len; int supp_rates; int capability; int aid; int addr; } ;
struct wpa_sm {int dummy; } ;


 int FUNC_0 (struct wpa_sm*,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wpa_sm *VAR_0, struct wpa_tdls_peer *VAR_1,
    int VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->addr, VAR_2, VAR_1->aid,
           VAR_1->capability,
           VAR_1->supp_rates, VAR_1->supp_rates_len,
           VAR_1->ht_capabilities,
           VAR_1->vht_capabilities,
           VAR_1->qos_info, VAR_1->wmm_capable,
           VAR_1->ext_capab, VAR_1->ext_capab_len,
           VAR_1->supp_channels,
           VAR_1->supp_channels_len,
           VAR_1->supp_oper_classes,
           VAR_1->supp_oper_classes_len);
}
