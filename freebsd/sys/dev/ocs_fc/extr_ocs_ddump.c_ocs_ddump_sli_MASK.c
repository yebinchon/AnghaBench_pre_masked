
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned long long chaining_capable; unsigned long long frag_num_field_offset; unsigned long long sgl_index_field_offset; unsigned long long chain_sge_initial_value_lo; unsigned long long chain_sge_initial_value_hi; scalar_t__ sgl_index_field_mask; scalar_t__ frag_num_field_mask; } ;
struct TYPE_7__ {unsigned long long e_d_tov; unsigned long long r_a_tov; unsigned long long link_module_type; unsigned long long rq_batch; unsigned long long topology; unsigned long long* fw_rev; unsigned long long* hw_rev; unsigned long long sge_supported_length; unsigned long long sgl_page_sizes; unsigned long long max_sgl_pages; unsigned long long high_login_mode; unsigned long long sgl_pre_registered; unsigned long long sgl_pre_registration_required; scalar_t__* fw_name; int * wwnn; int * wwpn; TYPE_3__ sgl_chaining_params; } ;
struct TYPE_8__ {unsigned long long sli_rev; unsigned long long sli_family; unsigned long long if_type; int asic_type; int asic_rev; TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
typedef TYPE_3__ sli4_sgl_chaining_params_t ;
typedef int ocs_textbuf_t ;
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
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,char*,char*,...) ;
 unsigned long long FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(ocs_textbuf_t *VAR_10, sli4_t *VAR_11)
{
 sli4_sgl_chaining_params_t *VAR_12 = &VAR_11->config.sgl_chaining_params;
 const char *VAR_13;

 FUNC_1(VAR_10, "sli4", 0);

 FUNC_3(VAR_10, "sli_rev", "%d", VAR_11->sli_rev);
 FUNC_3(VAR_10, "sli_family", "%d", VAR_11->sli_family);
 FUNC_3(VAR_10, "if_type", "%d", VAR_11->if_type);

 switch(VAR_11->asic_type) {
 case 131: VAR_13 = "BE3"; break;
 case 128: VAR_13 = "Skyhawk"; break;
 case 130: VAR_13 = "Lancer"; break;
 case 129: VAR_13 = "LancerG6"; break;
 default: VAR_13 = "unknown"; break;
 }
 FUNC_3(VAR_10, "asic_type", "%s", VAR_13);

 switch(VAR_11->asic_rev) {
 case 132: VAR_13 = "fpga"; break;
 case 139: VAR_13 = "A0"; break;
 case 138: VAR_13 = "A1"; break;
 case 137: VAR_13 = "A2"; break;
 case 136: VAR_13 = "A3"; break;
 case 135: VAR_13 = "B0"; break;
 case 134: VAR_13 = "C0"; break;
 case 133: VAR_13 = "D0"; break;
 default: VAR_13 = "unknown"; break;
 }
 FUNC_3(VAR_10, "asic_rev", "%s", VAR_13);

 FUNC_3(VAR_10, "e_d_tov", "%d", VAR_11->config.e_d_tov);
 FUNC_3(VAR_10, "r_a_tov", "%d", VAR_11->config.r_a_tov);
 FUNC_3(VAR_10, "link_module_type", "%d", VAR_11->config.link_module_type);
 FUNC_3(VAR_10, "rq_batch", "%d", VAR_11->config.rq_batch);
 FUNC_3(VAR_10, "topology", "%d", VAR_11->config.topology);
 FUNC_3(VAR_10, "wwpn", "%02x%02x%02x%02x%02x%02x%02x%02x",
    VAR_11->config.wwpn[0],
    VAR_11->config.wwpn[1],
    VAR_11->config.wwpn[2],
    VAR_11->config.wwpn[3],
    VAR_11->config.wwpn[4],
    VAR_11->config.wwpn[5],
    VAR_11->config.wwpn[6],
    VAR_11->config.wwpn[7]);
 FUNC_3(VAR_10, "wwnn", "%02x%02x%02x%02x%02x%02x%02x%02x",
    VAR_11->config.wwnn[0],
    VAR_11->config.wwnn[1],
    VAR_11->config.wwnn[2],
    VAR_11->config.wwnn[3],
    VAR_11->config.wwnn[4],
    VAR_11->config.wwnn[5],
    VAR_11->config.wwnn[6],
    VAR_11->config.wwnn[7]);
 FUNC_3(VAR_10, "fw_rev0", "%d", VAR_11->config.fw_rev[0]);
 FUNC_3(VAR_10, "fw_rev1", "%d", VAR_11->config.fw_rev[1]);
 FUNC_3(VAR_10, "fw_name0", "%s", (char*)VAR_11->config.fw_name[0]);
 FUNC_3(VAR_10, "fw_name1", "%s", (char*)VAR_11->config.fw_name[1]);
 FUNC_3(VAR_10, "hw_rev0", "%x", VAR_11->config.hw_rev[0]);
 FUNC_3(VAR_10, "hw_rev1", "%x", VAR_11->config.hw_rev[1]);
 FUNC_3(VAR_10, "hw_rev2", "%x", VAR_11->config.hw_rev[2]);
 FUNC_3(VAR_10, "sge_supported_length", "%x", VAR_11->config.sge_supported_length);
 FUNC_3(VAR_10, "sgl_page_sizes", "%x", VAR_11->config.sgl_page_sizes);
 FUNC_3(VAR_10, "max_sgl_pages", "%x", VAR_11->config.max_sgl_pages);
 FUNC_3(VAR_10, "high_login_mode", "%x", VAR_11->config.high_login_mode);
 FUNC_3(VAR_10, "sgl_pre_registered", "%x", VAR_11->config.sgl_pre_registered);
 FUNC_3(VAR_10, "sgl_pre_registration_required", "%x", VAR_11->config.sgl_pre_registration_required);

 FUNC_3(VAR_10, "sgl_chaining_capable", "%x", VAR_12->chaining_capable);
 FUNC_3(VAR_10, "frag_num_field_offset", "%x", VAR_12->frag_num_field_offset);
 FUNC_3(VAR_10, "frag_num_field_mask", "%016llx", (unsigned long long)VAR_12->frag_num_field_mask);
 FUNC_3(VAR_10, "sgl_index_field_offset", "%x", VAR_12->sgl_index_field_offset);
 FUNC_3(VAR_10, "sgl_index_field_mask", "%016llx", (unsigned long long)VAR_12->sgl_index_field_mask);
 FUNC_3(VAR_10, "chain_sge_initial_value_lo", "%x", VAR_12->chain_sge_initial_value_lo);
 FUNC_3(VAR_10, "chain_sge_initial_value_hi", "%x", VAR_12->chain_sge_initial_value_hi);

 FUNC_3(VAR_10, "max_vfi", "%d", FUNC_4(VAR_11, VAR_7));
 FUNC_3(VAR_10, "max_vpi", "%d", FUNC_4(VAR_11, VAR_8));
 FUNC_3(VAR_10, "max_rpi", "%d", FUNC_4(VAR_11, VAR_6));
 FUNC_3(VAR_10, "max_xri", "%d", FUNC_4(VAR_11, VAR_9));
 FUNC_3(VAR_10, "max_fcfi", "%d", FUNC_4(VAR_11, VAR_5));

 FUNC_2(VAR_10, VAR_11, VAR_1);
 FUNC_2(VAR_10, VAR_11, VAR_0);
 FUNC_2(VAR_10, VAR_11, VAR_2);
 FUNC_2(VAR_10, VAR_11, VAR_4);
 FUNC_2(VAR_10, VAR_11, VAR_3);

 FUNC_0(VAR_10, "sli4", 0);
}
