
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ffec_softc {TYPE_1__* rxdesc_ring; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {int flags_len; scalar_t__ buf_paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ffec_softc*,int) ;

__attribute__((used)) inline static uint32_t
FUNC_1(struct ffec_softc *VAR_2, int VAR_3, bus_addr_t VAR_4)
{
 uint32_t VAR_5;






 VAR_5 = FUNC_0(VAR_2, VAR_3);
 VAR_2->rxdesc_ring[VAR_3].buf_paddr = (uint32_t)VAR_4;
 VAR_2->rxdesc_ring[VAR_3].flags_len = VAR_0 |
  ((VAR_5 == 0) ? VAR_1 : 0);

 return (VAR_5);
}
