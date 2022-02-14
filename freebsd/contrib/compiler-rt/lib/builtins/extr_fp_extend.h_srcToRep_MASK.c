
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int src_t ;
typedef int src_rep_t ;



__attribute__((used)) static __inline src_rep_t FUNC_0(src_t VAR_0) {
  const union {
    src_t f;
    src_rep_t i;
  } VAR_1 = {.f = VAR_0};
  return VAR_1.i;
}
