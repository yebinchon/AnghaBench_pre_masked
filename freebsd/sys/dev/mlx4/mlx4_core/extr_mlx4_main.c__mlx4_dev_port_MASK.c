
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_port_cap {int trans_code; int wavelength; int vendor_oui; int trans_type; int default_sense; int suggested_type; int supported_port_types; int def_mac; int max_tc_eth; int eth_mtu; int max_port_width; int max_pkeys; int max_gids; int ib_mtu; int max_vl; } ;
struct TYPE_4__ {int * trans_code; int * wavelength; int * vendor_oui; int * trans_type; int * default_sense; int * suggested_type; int * supported_type; int * def_mac; int max_tc_eth; int * eth_mtu_cap; int * port_width_cap; int * pkey_table_len; int * gid_table_len; int * ib_mtu_cap; int * vl_cap; } ;
struct TYPE_3__ {int * pkey_phys_table_len; int * gid_phys_table_len; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__ phys_caps; } ;



__attribute__((used)) static int FUNC_0(struct mlx4_dev *VAR_0, int VAR_1,
     struct mlx4_port_cap *VAR_2)
{
 VAR_0->caps.vl_cap[VAR_1] = VAR_2->max_vl;
 VAR_0->caps.ib_mtu_cap[VAR_1] = VAR_2->ib_mtu;
 VAR_0->phys_caps.gid_phys_table_len[VAR_1] = VAR_2->max_gids;
 VAR_0->phys_caps.pkey_phys_table_len[VAR_1] = VAR_2->max_pkeys;



 VAR_0->caps.gid_table_len[VAR_1] = VAR_2->max_gids;
 VAR_0->caps.pkey_table_len[VAR_1] = VAR_2->max_pkeys;
 VAR_0->caps.port_width_cap[VAR_1] = VAR_2->max_port_width;
 VAR_0->caps.eth_mtu_cap[VAR_1] = VAR_2->eth_mtu;
 VAR_0->caps.max_tc_eth = VAR_2->max_tc_eth;
 VAR_0->caps.def_mac[VAR_1] = VAR_2->def_mac;
 VAR_0->caps.supported_type[VAR_1] = VAR_2->supported_port_types;
 VAR_0->caps.suggested_type[VAR_1] = VAR_2->suggested_type;
 VAR_0->caps.default_sense[VAR_1] = VAR_2->default_sense;
 VAR_0->caps.trans_type[VAR_1] = VAR_2->trans_type;
 VAR_0->caps.vendor_oui[VAR_1] = VAR_2->vendor_oui;
 VAR_0->caps.wavelength[VAR_1] = VAR_2->wavelength;
 VAR_0->caps.trans_code[VAR_1] = VAR_2->trans_code;

 return 0;
}
