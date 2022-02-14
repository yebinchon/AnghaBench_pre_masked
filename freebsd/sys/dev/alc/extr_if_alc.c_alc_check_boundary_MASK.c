
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ alc_tx_ring_paddr; scalar_t__ alc_cmb_paddr; scalar_t__ alc_rr_ring_paddr; scalar_t__ alc_rx_ring_paddr; } ;
struct alc_softc {TYPE_1__ alc_rdata; } ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct alc_softc *VAR_5)
{
 bus_addr_t VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_5->alc_rdata.alc_rx_ring_paddr + VAR_2;
 VAR_8 = VAR_5->alc_rdata.alc_rr_ring_paddr + VAR_1;
 VAR_6 = VAR_5->alc_rdata.alc_cmb_paddr + VAR_0;
 VAR_9 = VAR_5->alc_rdata.alc_tx_ring_paddr + VAR_3;


 if ((FUNC_0(VAR_7) !=
     FUNC_0(VAR_5->alc_rdata.alc_rx_ring_paddr)) ||
     (FUNC_0(VAR_8) !=
     FUNC_0(VAR_5->alc_rdata.alc_rr_ring_paddr)) ||
     (FUNC_0(VAR_6) !=
     FUNC_0(VAR_5->alc_rdata.alc_cmb_paddr)) ||
     (FUNC_0(VAR_9) !=
     FUNC_0(VAR_5->alc_rdata.alc_tx_ring_paddr)))
  return (VAR_4);




 if ((FUNC_0(VAR_7) != FUNC_0(VAR_8)) ||
     (FUNC_0(VAR_7) != FUNC_0(VAR_6)))
  return (VAR_4);

 return (0);
}
