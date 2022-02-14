
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_17__ {char* name; char* serial_number; int minor; int major; } ;
struct TYPE_16__ {int pkind; scalar_t__ app_mode; } ;
struct TYPE_10__ {scalar_t__ max_nic_ports; scalar_t__ app_mode; int app_cap_flags; scalar_t__ num_gmx_ports; } ;
struct octeon_device {scalar_t__ num_iqs; size_t octeon_id; TYPE_8__ boardinfo; int status; TYPE_7__ pfvf_hsword; TYPE_6__** instr_queue; TYPE_1__ fw_info; scalar_t__ app_mode; } ;
struct TYPE_11__ {scalar_t__ app_mode; int pkind; int app_cap_flags; scalar_t__ num_gmx_ports; scalar_t__ max_nic_ports; } ;
struct TYPE_12__ {TYPE_2__ r_core_drv_init; } ;
struct lio_recv_pkt {scalar_t__* buffer_size; scalar_t__ buffer_count; TYPE_9__** buffer_ptr; TYPE_3__ rh; } ;
struct lio_recv_info {struct lio_recv_pkt* recv_pkt; } ;
struct lio_core_setup {scalar_t__ corefreq; int board_rev_minor; int board_rev_major; int board_serial_number; int boardname; } ;
typedef int app_name ;
struct TYPE_18__ {scalar_t__ m_data; } ;
struct TYPE_13__ {int pkind; } ;
struct TYPE_14__ {TYPE_4__ s; } ;
struct TYPE_15__ {TYPE_5__ txpciq; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_6 ;
 struct lio_core_setup* VAR_7 ;
 int FUNC_6 (struct octeon_device*,char*,int ,scalar_t__) ;
 int FUNC_7 (struct octeon_device*,char*,scalar_t__,...) ;
 int FUNC_8 (struct octeon_device*,char*,char*,int ) ;
 int FUNC_9 (struct lio_recv_info*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_9__*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct lio_core_setup*,scalar_t__,int) ;
 int FUNC_14 (char*,int ,int) ;

int
FUNC_15(struct lio_recv_info *VAR_8, void *VAR_9)
{
 struct octeon_device *VAR_10 = (struct octeon_device *)VAR_9;
 struct lio_recv_pkt *VAR_11 = VAR_8->recv_pkt;
 struct lio_core_setup *VAR_12 = ((void*)0);
 uint32_t VAR_13;
 uint32_t VAR_14 = 0;
 char VAR_15[16];

 if (FUNC_2(VAR_10))
  VAR_14 = FUNC_3(
            FUNC_1(VAR_10, VAR_6));

 if (FUNC_4(&VAR_10->status) >= VAR_2) {
  FUNC_7(VAR_10, "Received CORE OK when device state is 0x%x\n",
       FUNC_4(&VAR_10->status));
  goto core_drv_init_err;
 }

 FUNC_14(VAR_15,
  FUNC_10((uint32_t)
       VAR_11->rh.r_core_drv_init.app_mode),
  sizeof(VAR_15) - 1);
 VAR_10->app_mode = (uint32_t)VAR_11->rh.r_core_drv_init.app_mode;
 if (VAR_11->rh.r_core_drv_init.app_mode == VAR_4) {
  VAR_10->fw_info.max_nic_ports =
      (uint32_t)VAR_11->rh.r_core_drv_init.max_nic_ports;
  VAR_10->fw_info.num_gmx_ports =
      (uint32_t)VAR_11->rh.r_core_drv_init.num_gmx_ports;
 }

 if (VAR_10->fw_info.max_nic_ports < VAR_14) {
  FUNC_7(VAR_10, "Config has more ports than firmware allows (%d > %d).\n",
       VAR_14, VAR_10->fw_info.max_nic_ports);
  goto core_drv_init_err;
 }

 VAR_10->fw_info.app_cap_flags = VAR_11->rh.r_core_drv_init.app_cap_flags;
 VAR_10->fw_info.app_mode = (uint32_t)VAR_11->rh.r_core_drv_init.app_mode;
 VAR_10->pfvf_hsword.app_mode =
     (uint32_t)VAR_11->rh.r_core_drv_init.app_mode;

 VAR_10->pfvf_hsword.pkind = VAR_11->rh.r_core_drv_init.pkind;

 for (VAR_13 = 0; VAR_13 < VAR_10->num_iqs; VAR_13++)
  VAR_10->instr_queue[VAR_13]->txpciq.s.pkind = VAR_10->pfvf_hsword.pkind;

 FUNC_5(&VAR_10->status, VAR_1);

 VAR_12 = &VAR_7[VAR_10->octeon_id];

 if (VAR_11->buffer_size[0] != (sizeof(*VAR_12) + VAR_3)) {
  FUNC_6(VAR_10, "Core setup bytes expected %llu found %d\n",
       FUNC_0(sizeof(*VAR_12) + VAR_3),
       VAR_11->buffer_size[0]);
 }

 FUNC_13(VAR_12, VAR_11->buffer_ptr[0]->m_data + VAR_3,
        sizeof(*VAR_12));
 FUNC_14(VAR_10->boardinfo.name, VAR_12->boardname, VAR_0);
 FUNC_14(VAR_10->boardinfo.serial_number, VAR_12->board_serial_number,
  VAR_5);

 FUNC_12((uint64_t *)VAR_12, (sizeof(*VAR_12) >> 3));

 VAR_10->boardinfo.major = VAR_12->board_rev_major;
 VAR_10->boardinfo.minor = VAR_12->board_rev_minor;

 FUNC_8(VAR_10, "Running %s (%llu Hz)\n", VAR_15,
       FUNC_0(VAR_12->corefreq));

core_drv_init_err:
 for (VAR_13 = 0; VAR_13 < VAR_11->buffer_count; VAR_13++)
  FUNC_11(VAR_11->buffer_ptr[VAR_13]);

 FUNC_9(VAR_8);
 return (0);
}
