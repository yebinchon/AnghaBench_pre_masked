
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ intr_enable; } ;
struct TYPE_8__ {scalar_t__ hw_init; int num_tx_rings; int num_rx_rings; TYPE_1__ flags; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(qla_host_t *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;


 if (VAR_4->hw_init == 0) {
  FUNC_4(VAR_4);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->num_tx_rings; VAR_6++) {
  FUNC_2(VAR_6);
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->num_rx_rings; VAR_6++) {
  FUNC_1(VAR_6);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->num_rx_rings; VAR_6++) {
  FUNC_0(VAR_4, VAR_6);
 }

 VAR_5 = (VAR_1 << VAR_2);
 FUNC_3(VAR_4, VAR_3, VAR_5);

 VAR_5 = (VAR_0 << VAR_2);
 FUNC_3(VAR_4, VAR_3, VAR_5);
 VAR_4->flags.intr_enable = 0;

 FUNC_4(VAR_4);

 return;
}
