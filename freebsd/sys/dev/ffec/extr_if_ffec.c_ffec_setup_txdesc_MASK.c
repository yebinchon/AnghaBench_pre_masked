
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ffec_softc {TYPE_1__* txdesc_ring; int txcount; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {scalar_t__ flags_len; scalar_t__ buf_paddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ffec_softc*,int) ;

__attribute__((used)) inline static uint32_t
FUNC_1(struct ffec_softc *VAR_4, int VAR_5, bus_addr_t VAR_6,
    uint32_t VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_0(VAR_4, VAR_5);


 if (VAR_6 == 0 || VAR_7 == 0) {
  VAR_9 = 0;
  --VAR_4->txcount;
 } else {
  VAR_9 = VAR_1 | VAR_0 | VAR_2;
  ++VAR_4->txcount;
 }
 if (VAR_8 == 0)
  VAR_9 |= VAR_3;






 VAR_4->txdesc_ring[VAR_5].buf_paddr = (uint32_t)VAR_6;
 VAR_4->txdesc_ring[VAR_5].flags_len = VAR_9 | VAR_7;

 return (VAR_8);
}
