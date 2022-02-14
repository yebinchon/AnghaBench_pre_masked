
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bhnd_dma_translation {int addr_mask; int base_addr; int addrext_mask; } ;
struct bwn_dma {int addrext_shift; struct bhnd_dma_translation translation; } ;
struct TYPE_2__ {struct bwn_dma dma; } ;
struct bwn_mac {TYPE_1__ mac_method; } ;
struct bwn_dmadesc64 {int dummy; } ;
struct bwn_dmadesc32 {int dummy; } ;
struct bwn_dma_ring {int dr_ring_dmabase; int dr_curslot; scalar_t__ dr_type; int dr_usedslot; int dr_numslots; int dr_frameoffset; scalar_t__ dr_tx; struct bwn_mac* dr_mac; } ;
typedef int bhnd_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct bwn_dma_ring*,int ,int) ;
 int VAR_31 ;

__attribute__((used)) static void
FUNC_1(struct bwn_dma_ring *VAR_32)
{
 struct bwn_mac *VAR_33;
 struct bwn_dma *VAR_34;
 struct bhnd_dma_translation *VAR_35;
 bhnd_addr_t VAR_36, VAR_37;
 uint32_t VAR_38, VAR_39, VAR_40, VAR_41;

 VAR_33 = VAR_32->dr_mac;
 VAR_34 = &VAR_33->mac_method.dma;
 VAR_35 = &VAR_34->translation;

 VAR_37 = VAR_32->dr_ring_dmabase;
 VAR_36 = (VAR_37 & VAR_35->addr_mask) | VAR_35->base_addr;
 VAR_38 = (VAR_36 >> 32);
 VAR_39 = (VAR_36 & VAR_31);
 VAR_40 = ((VAR_37 & VAR_35->addrext_mask) >> VAR_34->addrext_shift);

 if (VAR_32->dr_tx) {
  VAR_32->dr_curslot = -1;

  if (VAR_32->dr_type == VAR_0) {
   VAR_41 = VAR_27;
   VAR_41 |= VAR_28;
   VAR_41 |= (VAR_40 << VAR_25)
       & VAR_24;
   FUNC_0(VAR_32, VAR_26, VAR_41);
   FUNC_0(VAR_32, VAR_30, VAR_39);
   FUNC_0(VAR_32, VAR_29, VAR_38);
  } else {
   VAR_41 = VAR_12;
   VAR_41 |= VAR_13;
   VAR_41 |= (VAR_40 << VAR_10)
       & VAR_9;
   FUNC_0(VAR_32, VAR_11, VAR_41);
   FUNC_0(VAR_32, VAR_14, VAR_39);
  }
  return;
 }




 VAR_32->dr_usedslot = VAR_32->dr_numslots;

 if (VAR_32->dr_type == VAR_0) {
  VAR_41 = (VAR_32->dr_frameoffset << VAR_19);
  VAR_41 |= VAR_18;
  VAR_41 |= VAR_21;
  VAR_41 |= (VAR_40 << VAR_16)
      & VAR_15;
  FUNC_0(VAR_32, VAR_17, VAR_41);
  FUNC_0(VAR_32, VAR_23, VAR_39);
  FUNC_0(VAR_32, VAR_22, VAR_38);
  FUNC_0(VAR_32, VAR_20, VAR_32->dr_numslots *
      sizeof(struct bwn_dmadesc64));
 } else {
  VAR_41 = (VAR_32->dr_frameoffset << VAR_5);
  VAR_41 |= VAR_4;
  VAR_41 |= VAR_7;
  VAR_41 |= (VAR_40 << VAR_2)
      & VAR_1;
  FUNC_0(VAR_32, VAR_3, VAR_41);
  FUNC_0(VAR_32, VAR_8, VAR_39);
  FUNC_0(VAR_32, VAR_6, VAR_32->dr_numslots *
      sizeof(struct bwn_dmadesc32));
 }
}
