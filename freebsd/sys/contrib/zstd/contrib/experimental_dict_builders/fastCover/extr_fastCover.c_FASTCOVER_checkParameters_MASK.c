
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; size_t k; scalar_t__ f; int splitPoint; } ;
typedef TYPE_1__ ZDICT_fastCover_params_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(ZDICT_fastCover_params_t VAR_1,
                                 size_t VAR_2) {

  if (VAR_1.d == 0 || VAR_1.k == 0 || VAR_1.f == 0) {
    return 0;
  }

  if (VAR_1.d != 6 && VAR_1.d != 8) {
    return 0;
  }

  if (VAR_1.f > VAR_0) {
    return 0;
  }

  if (VAR_1.k > VAR_2) {
    return 0;
  }

  if (VAR_1.d > VAR_1.k) {
    return 0;
  }

  if (VAR_1.splitPoint <= 0 || VAR_1.splitPoint > 1) {
    return 0;
  }
  return 1;
}
