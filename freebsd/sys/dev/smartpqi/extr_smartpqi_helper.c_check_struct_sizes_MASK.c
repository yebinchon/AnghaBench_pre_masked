
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sense_header_scsi {int dummy; } ;
struct pqi_registers {int dummy; } ;
struct pqi_pref_settings {int dummy; } ;
struct pqi_io_response {int dummy; } ;
struct pqi_dev_adminq_cap {int dummy; } ;
struct pqi_cap {int dummy; } ;
struct ioa_registers {int dummy; } ;
struct init_base_struct {int dummy; } ;
struct bmic_host_wellness_time {int dummy; } ;
struct bmic_host_wellness_driver_version {int dummy; } ;
struct admin_q_param {int dummy; } ;
typedef int reportlun_header_t ;
typedef int reportlun_ext_entry_t ;
typedef int reportlun_data_ext_t ;
typedef int raidmap_data_t ;
typedef int raid_path_error_info_elem_t ;
typedef int pqisrc_raid_req_t ;
typedef int pqisrc_raid_map_t ;
typedef int pqi_tmf_req_t ;
typedef int pqi_iu_layer_desc_t ;
typedef int pqi_dev_cap_t ;
typedef int pqi_aio_req_t ;
typedef int op_q_params ;
typedef int iu_header_t ;
typedef int gen_adm_resp_iu_t ;
typedef int gen_adm_req_iu_t ;
typedef int bmic_ident_physdev_t ;
typedef int bmic_ident_ctrl_t ;
typedef int aio_path_error_info_elem_t ;
typedef int SCSI3Addr_struct ;
typedef int RequestBlock_struct ;
typedef int PhysDevAddr_struct ;
typedef int MoreErrInfo_struct ;
typedef int LogDevAddr_struct ;
typedef int LUNAddr_struct ;
typedef int IOCTL_Command_struct ;
typedef int ErrorInfo_struct ;


 int FUNC_0 (int) ;

void FUNC_1()
{

    FUNC_0(sizeof(SCSI3Addr_struct)== 2);
    FUNC_0(sizeof(PhysDevAddr_struct) == 8);
    FUNC_0(sizeof(LogDevAddr_struct)== 8);
    FUNC_0(sizeof(LUNAddr_struct)==8);
    FUNC_0(sizeof(RequestBlock_struct) == 20);
    FUNC_0(sizeof(MoreErrInfo_struct)== 8);
    FUNC_0(sizeof(ErrorInfo_struct)== 48);
    FUNC_0(sizeof(IOCTL_Command_struct)== 86);
    FUNC_0(sizeof(struct bmic_host_wellness_driver_version)== 42);
    FUNC_0(sizeof(struct bmic_host_wellness_time)== 20);
    FUNC_0(sizeof(struct pqi_dev_adminq_cap)== 8);
    FUNC_0(sizeof(struct admin_q_param)== 4);
    FUNC_0(sizeof(struct pqi_registers)== 256);
    FUNC_0(sizeof(struct ioa_registers)== 4128);
    FUNC_0(sizeof(struct pqi_pref_settings)==4);
    FUNC_0(sizeof(struct pqi_cap)== 20);
    FUNC_0(sizeof(iu_header_t)== 4);
    FUNC_0(sizeof(gen_adm_req_iu_t)== 64);
    FUNC_0(sizeof(gen_adm_resp_iu_t)== 64);
    FUNC_0(sizeof(op_q_params) == 9);
    FUNC_0(sizeof(raid_path_error_info_elem_t)== 276);
    FUNC_0(sizeof(aio_path_error_info_elem_t)== 276);
    FUNC_0(sizeof(struct init_base_struct)== 24);
    FUNC_0(sizeof(pqi_iu_layer_desc_t)== 16);
    FUNC_0(sizeof(pqi_dev_cap_t)== 576);
    FUNC_0(sizeof(pqi_aio_req_t)== 128);
    FUNC_0(sizeof(pqisrc_raid_req_t)== 128);
    FUNC_0(sizeof(pqi_tmf_req_t)== 32);
    FUNC_0(sizeof(struct pqi_io_response)== 16);
    FUNC_0(sizeof(struct sense_header_scsi)== 8);
    FUNC_0(sizeof(reportlun_header_t)==8);
    FUNC_0(sizeof(reportlun_ext_entry_t)== 24);
    FUNC_0(sizeof(reportlun_data_ext_t)== 32);
    FUNC_0(sizeof(raidmap_data_t)==8);
    FUNC_0(sizeof(pqisrc_raid_map_t)== 8256);
    FUNC_0(sizeof(bmic_ident_ctrl_t)== 325);
    FUNC_0(sizeof(bmic_ident_physdev_t)==2048);

}
