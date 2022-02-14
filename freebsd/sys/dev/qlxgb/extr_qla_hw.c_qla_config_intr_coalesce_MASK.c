
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int qla_host_t ;
struct TYPE_5__ {int cntxt_id; int opcode; int cmd; } ;
struct TYPE_6__ {int flags; int max_rcv_pkts; int max_rcv_usecs; int max_snd_pkts; int max_snd_usecs; int usecs_to; int sds_ring_bitmask; int timer_type; TYPE_1__ hdr; } ;
typedef TYPE_2__ qla_fw_cds_config_intr_coalesc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_4, uint16_t VAR_5, int VAR_6)
{
 qla_fw_cds_config_intr_coalesc_t VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, sizeof(qla_fw_cds_config_intr_coalesc_t));

 VAR_7.hdr.cmd = VAR_0;
 VAR_7.hdr.opcode = VAR_1;
 VAR_7.hdr.cntxt_id = VAR_5;

 VAR_7.flags = 0x04;
 VAR_7.max_rcv_pkts = 256;
 VAR_7.max_rcv_usecs = 3;
 VAR_7.max_snd_pkts = 64;
 VAR_7.max_snd_usecs = 4;

 if (VAR_6) {
  VAR_7.usecs_to = 1000;
  VAR_7.timer_type = VAR_3;
  VAR_7.sds_ring_bitmask =
   VAR_2;
 }

 VAR_8 = FUNC_1(VAR_4, &VAR_7,
   sizeof(qla_fw_cds_config_intr_coalesc_t));

 return VAR_8;
}
