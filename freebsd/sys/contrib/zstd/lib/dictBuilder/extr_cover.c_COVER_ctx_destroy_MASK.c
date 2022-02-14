
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * offsets; int * dmerAt; int * freqs; int * suffix; } ;
typedef TYPE_1__ COVER_ctx_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(COVER_ctx_t *VAR_0) {
  if (!VAR_0) {
    return;
  }
  if (VAR_0->suffix) {
    FUNC_0(VAR_0->suffix);
    VAR_0->suffix = ((void*)0);
  }
  if (VAR_0->freqs) {
    FUNC_0(VAR_0->freqs);
    VAR_0->freqs = ((void*)0);
  }
  if (VAR_0->dmerAt) {
    FUNC_0(VAR_0->dmerAt);
    VAR_0->dmerAt = ((void*)0);
  }
  if (VAR_0->offsets) {
    FUNC_0(VAR_0->offsets);
    VAR_0->offsets = ((void*)0);
  }
}
