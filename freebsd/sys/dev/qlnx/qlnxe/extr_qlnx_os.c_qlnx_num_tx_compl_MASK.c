
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u16 ;
struct qlnx_tx_queue {int tx_pbl; int * hw_cons_ptr; } ;
struct qlnx_fastpath {int dummy; } ;
typedef int qlnx_host_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint16_t
FUNC_2(qlnx_host_t *VAR_0, struct qlnx_fastpath *VAR_1,
 struct qlnx_tx_queue *VAR_2)
{
 u16 VAR_3;
 u16 VAR_4;
 uint16_t VAR_5;

 VAR_3 = FUNC_1(*VAR_2->hw_cons_ptr);

 VAR_4 = FUNC_0(&VAR_2->tx_pbl);
 if (VAR_3 < VAR_4) {
  VAR_5 = (1 << 16) - (VAR_4 - VAR_3);
 } else {
  VAR_5 = VAR_3 - VAR_4;
 }
 return VAR_5;
}
