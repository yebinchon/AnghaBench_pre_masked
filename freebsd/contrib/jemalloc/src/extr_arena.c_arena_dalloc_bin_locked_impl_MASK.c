
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_16__ {int curregs; int ndalloc; } ;
struct TYPE_17__ {TYPE_1__ stats; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
struct TYPE_18__ {unsigned int nregs; } ;
typedef TYPE_3__ bin_info_t ;
struct TYPE_19__ {TYPE_2__* bins; } ;
typedef TYPE_4__ arena_t ;
typedef int arena_slab_data_t ;


 int FUNC_0 (int *,TYPE_4__*,int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__*,int *) ;
 int FUNC_2 (int *,TYPE_4__*,int *,TYPE_2__*) ;
 int FUNC_3 (void*,TYPE_3__ const*) ;
 int FUNC_4 (TYPE_4__*,int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *,void*) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(tsdn_t *VAR_4, arena_t *VAR_5, extent_t *VAR_6,
    void *VAR_7, bool VAR_8) {
 arena_slab_data_t *VAR_9 = FUNC_7(VAR_6);
 szind_t VAR_10 = FUNC_8(VAR_6);
 bin_t *VAR_11 = &VAR_5->bins[VAR_10];
 const bin_info_t *VAR_12 = &VAR_0[VAR_10];

 if (!VAR_8 && VAR_1 && FUNC_9(VAR_3)) {
  FUNC_3(VAR_7, VAR_12);
 }

 FUNC_5(VAR_6, VAR_9, VAR_7);
 unsigned VAR_13 = FUNC_6(VAR_6);
 if (VAR_13 == VAR_12->nregs) {
  FUNC_4(VAR_5, VAR_6, VAR_11);
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_11);
 } else if (VAR_13 == 1 && VAR_6 != VAR_11->slabcur) {
  FUNC_1(VAR_5, VAR_11, VAR_6);
  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_11);
 }

 if (VAR_2) {
  VAR_11->stats.ndalloc++;
  VAR_11->stats.curregs--;
 }
}
