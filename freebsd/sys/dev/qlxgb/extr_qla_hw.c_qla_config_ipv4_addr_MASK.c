
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {TYPE_4__* rx_cntxt_rsp; } ;
struct TYPE_15__ {TYPE_1__ hw; } ;
typedef TYPE_5__ qla_host_t ;
struct TYPE_12__ {int cntxt_id; int opcode; int cmd; } ;
struct TYPE_16__ {void* ipv4_addr; void* cmd; TYPE_2__ hdr; } ;
typedef TYPE_6__ qla_config_ipv4_t ;
struct TYPE_13__ {int cntxt_id; } ;
struct TYPE_14__ {TYPE_3__ rx_rsp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,int) ;

void
FUNC_2(qla_host_t *VAR_3, uint32_t VAR_4)
{
 qla_config_ipv4_t VAR_5;

 FUNC_0(&VAR_5, sizeof(qla_config_ipv4_t));

 VAR_5.hdr.cmd = VAR_1;
 VAR_5.hdr.opcode = VAR_2;
 VAR_5.hdr.cntxt_id = (VAR_3->hw.rx_cntxt_rsp)->rx_rsp.cntxt_id;

 VAR_5.cmd = (uint64_t)VAR_0;
 VAR_5.ipv4_addr = (uint64_t)VAR_4;

 (void)FUNC_1(VAR_3, &VAR_5, sizeof(qla_config_ipv4_t));

 return;
}
