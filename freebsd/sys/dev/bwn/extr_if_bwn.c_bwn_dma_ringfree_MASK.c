
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_dma_ring {int dr_numslots; struct bwn_dma_ring* dr_meta; int * dr_txhdr_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_dma_ring*) ;
 int FUNC_1 (struct bwn_dma_ring*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct bwn_dma_ring*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bwn_dma_ring **VAR_3)
{

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(*VAR_3);
 FUNC_1(*VAR_3);

 if ((*VAR_3)->dr_txhdr_cache != ((void*)0)) {
  FUNC_2((*VAR_3)->dr_txhdr_cache,
      ((*VAR_3)->dr_numslots / VAR_1) *
      VAR_0, VAR_2);
 }
 FUNC_3((*VAR_3)->dr_meta, VAR_2);
 FUNC_3(*VAR_3, VAR_2);

 *VAR_3 = ((void*)0);
}
