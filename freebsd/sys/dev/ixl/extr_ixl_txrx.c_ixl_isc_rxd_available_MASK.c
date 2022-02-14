
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int status_error_len; } ;
struct TYPE_8__ {TYPE_3__ qword1; } ;
union i40e_rx_desc {TYPE_4__ wb; } ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int u64 ;
struct rx_ring {union i40e_rx_desc* rx_base; } ;
struct ixl_vsi {TYPE_2__* shared; TYPE_1__* rx_queues; } ;
typedef int qidx_t ;
struct TYPE_6__ {int* isc_nrxd; } ;
struct TYPE_5__ {struct rx_ring rxr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_4, uint16_t VAR_5, qidx_t VAR_6, qidx_t VAR_7)
{
 struct ixl_vsi *VAR_8 = VAR_4;
 struct rx_ring *VAR_9 = &VAR_8->rx_queues[VAR_5].rxr;
 union i40e_rx_desc *VAR_10;
 u64 VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_15 = VAR_8->shared->isc_nrxd[0];

 for (VAR_13 = 0, VAR_14 = VAR_6; VAR_13 < VAR_15 - 1 && VAR_13 <= VAR_7;) {
  VAR_10 = &VAR_9->rx_base[VAR_14];
  VAR_11 = FUNC_0(VAR_10->wb.qword1.status_error_len);
  VAR_12 = (VAR_11 & VAR_0)
   >> VAR_1;

  if ((VAR_12 & (1 << VAR_2)) == 0)
   break;
  if (++VAR_14 == VAR_15)
   VAR_14 = 0;
  if (VAR_12 & (1 << VAR_3))
   VAR_13++;
 }

 return (VAR_13);
}
