
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsd_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
struct TYPE_10__ {scalar_t__ curslabs; scalar_t__ curregs; } ;
struct TYPE_11__ {int lock; TYPE_1__ stats; int slabs_full; int slabs_nonfull; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
struct TYPE_12__ {int nactive; TYPE_2__* bins; int large_mtx; int large; } ;
typedef TYPE_3__ arena_t ;
struct TYPE_13__ {scalar_t__ szind; int slab; } ;
typedef TYPE_4__ alloc_ctx_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int VAR_5 ;
 size_t FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int *,void*,size_t,TYPE_4__*) ;
 int FUNC_12 (int ,int *,int *,uintptr_t,int,scalar_t__*,int *) ;
 size_t FUNC_13 (scalar_t__) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void
FUNC_16(tsd_t *VAR_7, arena_t *VAR_8) {
 FUNC_9(FUNC_15(VAR_7), &VAR_8->large_mtx);

 for (extent_t *VAR_9 = FUNC_6(&VAR_8->large); VAR_9 !=
     ((void*)0); VAR_9 = FUNC_6(&VAR_8->large)) {
  void *VAR_10 = FUNC_4(VAR_9);
  size_t VAR_11;

  FUNC_10(FUNC_15(VAR_7), &VAR_8->large_mtx);
  alloc_ctx_t VAR_12;
  rtree_ctx_t *VAR_13 = FUNC_14(VAR_7);
  FUNC_12(FUNC_15(VAR_7), &VAR_5, VAR_13,
      (uintptr_t)VAR_10, 1, &VAR_12.szind, &VAR_12.slab);
  FUNC_2(VAR_12.szind != VAR_2);

  if (VAR_4 || (VAR_3 && VAR_6)) {
   VAR_11 = FUNC_13(VAR_12.szind);
   FUNC_2(VAR_11 == FUNC_7(FUNC_15(VAR_7), VAR_10));
  }

  if (VAR_3 && VAR_6) {
   FUNC_11(VAR_7, VAR_10, VAR_11, &VAR_12);
  }
  FUNC_8(FUNC_15(VAR_7), VAR_9);
  FUNC_9(FUNC_15(VAR_7), &VAR_8->large_mtx);
 }
 FUNC_10(FUNC_15(VAR_7), &VAR_8->large_mtx);


 for (unsigned VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  extent_t *VAR_15;
  bin_t *VAR_16 = &VAR_8->bins[VAR_14];
  FUNC_9(FUNC_15(VAR_7), &VAR_16->lock);
  if (VAR_16->slabcur != ((void*)0)) {
   VAR_15 = VAR_16->slabcur;
   VAR_16->slabcur = ((void*)0);
   FUNC_10(FUNC_15(VAR_7), &VAR_16->lock);
   FUNC_1(FUNC_15(VAR_7), VAR_8, VAR_15);
   FUNC_9(FUNC_15(VAR_7), &VAR_16->lock);
  }
  while ((VAR_15 = FUNC_5(&VAR_16->slabs_nonfull)) !=
      ((void*)0)) {
   FUNC_10(FUNC_15(VAR_7), &VAR_16->lock);
   FUNC_1(FUNC_15(VAR_7), VAR_8, VAR_15);
   FUNC_9(FUNC_15(VAR_7), &VAR_16->lock);
  }
  for (VAR_15 = FUNC_6(&VAR_16->slabs_full); VAR_15 != ((void*)0);
      VAR_15 = FUNC_6(&VAR_16->slabs_full)) {
   FUNC_0(VAR_8, VAR_16, VAR_15);
   FUNC_10(FUNC_15(VAR_7), &VAR_16->lock);
   FUNC_1(FUNC_15(VAR_7), VAR_8, VAR_15);
   FUNC_9(FUNC_15(VAR_7), &VAR_16->lock);
  }
  if (VAR_4) {
   VAR_16->stats.curregs = 0;
   VAR_16->stats.curslabs = 0;
  }
  FUNC_10(FUNC_15(VAR_7), &VAR_16->lock);
 }

 FUNC_3(&VAR_8->nactive, 0, VAR_0);
}
