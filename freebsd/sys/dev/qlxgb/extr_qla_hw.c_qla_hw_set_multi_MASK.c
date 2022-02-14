
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {TYPE_4__* rx_cntxt_rsp; } ;
struct TYPE_9__ {TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;
struct TYPE_8__ {int cntxt_id; } ;
struct TYPE_10__ {TYPE_2__ rx_rsp; } ;
typedef TYPE_4__ q80_rcv_cntxt_rsp_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ,int) ;

void
FUNC_1(qla_host_t *VAR_1, uint8_t *VAR_2, uint32_t VAR_3,
 uint32_t VAR_4)
{
 q80_rcv_cntxt_rsp_t *VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->hw.rx_cntxt_rsp;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_0(VAR_1, VAR_2, VAR_5->rx_rsp.cntxt_id, VAR_4);
  VAR_2 += VAR_0;
 }
 return;
}
