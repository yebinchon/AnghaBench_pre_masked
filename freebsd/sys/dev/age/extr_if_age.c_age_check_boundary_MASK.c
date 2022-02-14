
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ age_smb_block_paddr; scalar_t__ age_cmb_block_paddr; scalar_t__ age_rr_ring_paddr; scalar_t__ age_rx_ring_paddr; scalar_t__ age_tx_ring_paddr; } ;
struct age_softc {TYPE_1__ age_rdata; } ;
typedef scalar_t__ bus_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct age_softc *VAR_6)
{
 bus_addr_t VAR_7, VAR_8, VAR_9;
 bus_addr_t VAR_10, VAR_11;


 VAR_9 = VAR_6->age_rdata.age_tx_ring_paddr + VAR_4;
 VAR_7 = VAR_6->age_rdata.age_rx_ring_paddr + VAR_2;
 VAR_8 = VAR_6->age_rdata.age_rr_ring_paddr + VAR_1;
 VAR_10 = VAR_6->age_rdata.age_cmb_block_paddr + VAR_0;
 VAR_11 = VAR_6->age_rdata.age_smb_block_paddr + VAR_3;

 if ((FUNC_0(VAR_9) !=
     FUNC_0(VAR_6->age_rdata.age_tx_ring_paddr)) ||
     (FUNC_0(VAR_7) !=
     FUNC_0(VAR_6->age_rdata.age_rx_ring_paddr)) ||
     (FUNC_0(VAR_8) !=
     FUNC_0(VAR_6->age_rdata.age_rr_ring_paddr)) ||
     (FUNC_0(VAR_10) !=
     FUNC_0(VAR_6->age_rdata.age_cmb_block_paddr)) ||
     (FUNC_0(VAR_11) !=
     FUNC_0(VAR_6->age_rdata.age_smb_block_paddr)))
  return (VAR_5);

 if ((FUNC_0(VAR_9) != FUNC_0(VAR_7)) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_8)) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_10)) ||
     (FUNC_0(VAR_9) != FUNC_0(VAR_11)))
  return (VAR_5);

 return (0);
}
