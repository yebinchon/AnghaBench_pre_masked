
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int qla_host_t ;
struct TYPE_5__ {int cntxt_id; int opcode; int cmd; } ;
struct TYPE_6__ {int mac_addr; int cmd; TYPE_1__ hdr; } ;
typedef TYPE_2__ qla_fw_cds_config_mac_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_3(qla_host_t *VAR_4, uint8_t *VAR_5, uint16_t VAR_6,
 uint32_t VAR_7)
{
 qla_fw_cds_config_mac_addr_t VAR_8;
 int VAR_9;






 FUNC_1(&VAR_8, sizeof(qla_fw_cds_config_mac_addr_t));

 VAR_8.hdr.cmd = VAR_1;
 VAR_8.hdr.opcode = VAR_3;
 VAR_8.hdr.cntxt_id = VAR_6;

 if (VAR_7)
  VAR_8.cmd = VAR_0;
 else
  VAR_8.cmd = VAR_2;
 FUNC_0(VAR_5, VAR_8.mac_addr,6);

 VAR_9 = FUNC_2(VAR_4, &VAR_8, sizeof(qla_fw_cds_config_mac_addr_t));

 return VAR_9;
}
