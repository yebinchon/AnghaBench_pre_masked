
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * bitmaps; int * spares; int h_charkey; int hdrpages; int nkeys; int ffactor; int low_mask; int high_mask; int max_bucket; int last_freed; int ovfl_point; int sshift; int ssize; int dsize; int bshift; int bsize; int lorder; int version; int magic; } ;
typedef TYPE_1__ HASHHDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(HASHHDR *VAR_1, HASHHDR *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1->magic, VAR_2->magic);
 FUNC_1(VAR_1->version, VAR_2->version);
 FUNC_1(VAR_1->lorder, VAR_2->lorder);
 FUNC_1(VAR_1->bsize, VAR_2->bsize);
 FUNC_1(VAR_1->bshift, VAR_2->bshift);
 FUNC_1(VAR_1->dsize, VAR_2->dsize);
 FUNC_1(VAR_1->ssize, VAR_2->ssize);
 FUNC_1(VAR_1->sshift, VAR_2->sshift);
 FUNC_1(VAR_1->ovfl_point, VAR_2->ovfl_point);
 FUNC_1(VAR_1->last_freed, VAR_2->last_freed);
 FUNC_1(VAR_1->max_bucket, VAR_2->max_bucket);
 FUNC_1(VAR_1->high_mask, VAR_2->high_mask);
 FUNC_1(VAR_1->low_mask, VAR_2->low_mask);
 FUNC_1(VAR_1->ffactor, VAR_2->ffactor);
 FUNC_1(VAR_1->nkeys, VAR_2->nkeys);
 FUNC_1(VAR_1->hdrpages, VAR_2->hdrpages);
 FUNC_1(VAR_1->h_charkey, VAR_2->h_charkey);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_1->spares[VAR_3], VAR_2->spares[VAR_3]);
  FUNC_0(VAR_1->bitmaps[VAR_3], VAR_2->bitmaps[VAR_3]);
 }
}
