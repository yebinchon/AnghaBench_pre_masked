
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dwc_softc {scalar_t__ mactype; TYPE_1__* rxdesc_ring; scalar_t__ rxdesc_ring_paddr; } ;
struct dwc_hwdesc {int dummy; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_2__ {int addr; int tdes1; int tdes0; scalar_t__ addr_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dwc_softc*,int) ;
 int FUNC_1 () ;

__attribute__((used)) inline static uint32_t
FUNC_2(struct dwc_softc *VAR_6, int VAR_7, bus_addr_t VAR_8)
{
 uint32_t VAR_9;

 VAR_6->rxdesc_ring[VAR_7].addr = (uint32_t)VAR_8;
 VAR_9 = FUNC_0(VAR_6, VAR_7);
 VAR_6->rxdesc_ring[VAR_7].addr_next = VAR_6->rxdesc_ring_paddr + (VAR_9 * sizeof(struct dwc_hwdesc));

 if (VAR_6->mactype == VAR_3)
  VAR_6->rxdesc_ring[VAR_7].tdes1 = VAR_0 | VAR_5;
 else
  VAR_6->rxdesc_ring[VAR_7].tdes1 = VAR_2 | VAR_4;

 FUNC_1();
 VAR_6->rxdesc_ring[VAR_7].tdes0 = VAR_1;
 FUNC_1();

 return (VAR_9);
}
