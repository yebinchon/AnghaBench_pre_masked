
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_dmadesc_meta {int dummy; } ;
struct bwn_dmadesc_generic {int dummy; } ;
struct bwn_dmadesc64 {int dummy; } ;
struct bwn_dma_ring {struct bwn_dmadesc64* dr_ring_descbase; struct bwn_dmadesc_meta* dr_meta; } ;



__attribute__((used)) static void
FUNC_0(struct bwn_dma_ring *VAR_0, int VAR_1,
    struct bwn_dmadesc_generic **VAR_2, struct bwn_dmadesc_meta **VAR_3)
{
 struct bwn_dmadesc64 *VAR_4;

 *VAR_3 = &(VAR_0->dr_meta[VAR_1]);
 VAR_4 = VAR_0->dr_ring_descbase;
 VAR_4 = &(VAR_4[VAR_1]);

 *VAR_2 = (struct bwn_dmadesc_generic *)VAR_4;
}
