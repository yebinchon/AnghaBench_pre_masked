
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * offsets; int * freqs; int * segmentFreqs; } ;
typedef TYPE_1__ FASTCOVER_ctx_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(FASTCOVER_ctx_t *VAR_0) {
  if (!VAR_0) {
    return;
  }
  if (VAR_0->segmentFreqs) {
    FUNC_0(VAR_0->segmentFreqs);
    VAR_0->segmentFreqs = ((void*)0);
  }
  if (VAR_0->freqs) {
    FUNC_0(VAR_0->freqs);
    VAR_0->freqs = ((void*)0);
  }
  if (VAR_0->offsets) {
    FUNC_0(VAR_0->offsets);
    VAR_0->offsets = ((void*)0);
  }
}
