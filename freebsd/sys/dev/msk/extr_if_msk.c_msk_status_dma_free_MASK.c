
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int * msk_stat_tag; int * msk_stat_ring; int msk_stat_map; scalar_t__ msk_stat_ring_paddr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct msk_softc *VAR_0)
{


 if (VAR_0->msk_stat_tag) {
  if (VAR_0->msk_stat_ring_paddr) {
   FUNC_1(VAR_0->msk_stat_tag, VAR_0->msk_stat_map);
   VAR_0->msk_stat_ring_paddr = 0;
  }
  if (VAR_0->msk_stat_ring) {
   FUNC_2(VAR_0->msk_stat_tag,
       VAR_0->msk_stat_ring, VAR_0->msk_stat_map);
   VAR_0->msk_stat_ring = ((void*)0);
  }
  FUNC_0(VAR_0->msk_stat_tag);
  VAR_0->msk_stat_tag = ((void*)0);
 }
}
