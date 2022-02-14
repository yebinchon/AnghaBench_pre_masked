
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int cntxt_id; int opcode; int cmd; } ;
struct TYPE_6__ {int mode; TYPE_1__ hdr; } ;
typedef TYPE_2__ qla_set_mac_rcv_mode_t ;
typedef int qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_2, uint16_t VAR_3, uint32_t VAR_4)
{
 qla_set_mac_rcv_mode_t VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, sizeof(qla_set_mac_rcv_mode_t));

 VAR_5.hdr.cmd = VAR_0;
 VAR_5.hdr.opcode = VAR_1;
 VAR_5.hdr.cntxt_id = VAR_3;

 VAR_5.mode = VAR_4;

 VAR_6 = FUNC_1(VAR_2, &VAR_5, sizeof(qla_set_mac_rcv_mode_t));

 return VAR_6;
}
