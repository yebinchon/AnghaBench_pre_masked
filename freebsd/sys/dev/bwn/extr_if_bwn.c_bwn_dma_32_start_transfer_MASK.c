
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_dmadesc32 {int dummy; } ;
struct bwn_dma_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_dma_ring*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bwn_dma_ring *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1, VAR_0,
     (uint32_t)(VAR_2 * sizeof(struct bwn_dmadesc32)));
}
