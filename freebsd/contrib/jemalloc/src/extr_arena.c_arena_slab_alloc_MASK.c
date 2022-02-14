
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_11__ {int bitmap_info; int nregs; int slab_size; int reg_size; } ;
typedef TYPE_1__ bin_info_t ;
struct TYPE_12__ {int extents_muzzy; int extents_dirty; } ;
typedef TYPE_2__ arena_t ;
struct TYPE_13__ {int bitmap; } ;
typedef TYPE_3__ arena_slab_data_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int * FUNC_1 (int *,TYPE_2__*,int **,TYPE_1__ const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,TYPE_2__*,int **,int *,int *,int ,int ,int ,int,int ,int*,int*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static extent_t *
FUNC_12(tsdn_t *VAR_4, arena_t *VAR_5, szind_t VAR_6,
    const bin_info_t *VAR_7) {
 FUNC_11(FUNC_10(VAR_4),
     VAR_3, 0);

 extent_hooks_t *VAR_8 = VAR_0;
 szind_t VAR_9 = FUNC_9(VAR_7->reg_size);
 bool VAR_10 = 0;
 bool VAR_11 = 1;
 extent_t *VAR_12 = FUNC_8(VAR_4, VAR_5, &VAR_8,
     &VAR_5->extents_dirty, ((void*)0), VAR_7->slab_size, 0, VAR_2, 1,
     VAR_6, &VAR_10, &VAR_11);
 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_8(VAR_4, VAR_5, &VAR_8,
      &VAR_5->extents_muzzy, ((void*)0), VAR_7->slab_size, 0, VAR_2,
      1, VAR_6, &VAR_10, &VAR_11);
 }
 if (VAR_12 == ((void*)0)) {
  VAR_12 = FUNC_1(VAR_4, VAR_5, &VAR_8,
      VAR_7, VAR_9);
  if (VAR_12 == ((void*)0)) {
   return ((void*)0);
  }
 }
 FUNC_2(FUNC_7(VAR_12));


 arena_slab_data_t *VAR_13 = FUNC_6(VAR_12);
 FUNC_4(VAR_12, VAR_7->nregs);
 FUNC_3(VAR_13->bitmap, &VAR_7->bitmap_info, 0);

 FUNC_0(VAR_5, FUNC_5(VAR_12) >> VAR_1);

 return VAR_12;
}
