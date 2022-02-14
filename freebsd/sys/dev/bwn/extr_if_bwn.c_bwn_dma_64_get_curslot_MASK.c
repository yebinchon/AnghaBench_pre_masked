
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_dmadesc64 {int dummy; } ;
struct bwn_dma_ring {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_dma_ring*,int ) ;

__attribute__((used)) static int
FUNC_1(struct bwn_dma_ring *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_3 &= VAR_0;

 return (VAR_3 / sizeof(struct bwn_dmadesc64));
}
