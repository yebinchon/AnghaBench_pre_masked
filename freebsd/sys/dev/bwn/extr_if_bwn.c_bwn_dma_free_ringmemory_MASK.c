
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_dma_ring {int dr_ring_dmap; int dr_ring_descbase; int dr_ring_dtag; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bwn_dma_ring *VAR_0)
{

 FUNC_0(VAR_0->dr_ring_dtag, VAR_0->dr_ring_dmap);
 FUNC_1(VAR_0->dr_ring_dtag, VAR_0->dr_ring_descbase,
     VAR_0->dr_ring_dmap);
}
