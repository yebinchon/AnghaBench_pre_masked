
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_dma_ring {int dr_numslots; int dr_usedslot; TYPE_1__* dr_mac; } ;
struct TYPE_2__ {int mac_sc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct bwn_dma_ring *VAR_0)
{
 FUNC_0(VAR_0->dr_mac->mac_sc);

 return (VAR_0->dr_numslots - VAR_0->dr_usedslot);
}
