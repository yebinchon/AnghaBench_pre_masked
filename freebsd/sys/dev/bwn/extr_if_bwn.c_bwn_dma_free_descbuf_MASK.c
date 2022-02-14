
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_dmadesc_meta {int * mt_ni; int * mt_m; } ;
struct bwn_dma_ring {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bwn_dma_ring *VAR_0,
    struct bwn_dmadesc_meta *VAR_1)
{

 if (VAR_1->mt_m != ((void*)0)) {
  FUNC_1(VAR_1->mt_m);
  VAR_1->mt_m = ((void*)0);
 }
 if (VAR_1->mt_ni != ((void*)0)) {
  FUNC_0(VAR_1->mt_ni);
  VAR_1->mt_ni = ((void*)0);
 }
}
