
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {TYPE_1__* tx_ring; } ;
typedef TYPE_2__ qla_host_t ;
struct TYPE_4__ {size_t txr_done; size_t txr_next; size_t txr_free; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(qla_host_t *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5;

 VAR_4 = VAR_2->tx_ring[VAR_3].txr_done;
 VAR_5 = VAR_2->tx_ring[VAR_3].txr_next;

 if (VAR_4 == VAR_5) {
  VAR_2->tx_ring[VAR_3].txr_free = VAR_0;
 } else if (VAR_4 > VAR_5) {
  VAR_2->tx_ring[VAR_3].txr_free = VAR_4 - VAR_5;
 } else {
  VAR_2->tx_ring[VAR_3].txr_free = VAR_0 +
   VAR_4 - VAR_5;
 }

 if (VAR_2->tx_ring[VAR_3].txr_free <= VAR_1)
  return (-1);

 return (0);
}
