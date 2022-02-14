
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rep_t ;
typedef int fp_t ;



__attribute__((used)) static __inline fp_t FUNC_0(rep_t VAR_0) {
  const union {
    fp_t f;
    rep_t i;
  } VAR_1 = {.i = VAR_0};
  return VAR_1.f;
}
