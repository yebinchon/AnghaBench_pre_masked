
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dst_t ;
typedef int dst_rep_t ;



__attribute__((used)) static __inline dst_t FUNC_0(dst_rep_t VAR_0) {
  const union {
    dst_t f;
    dst_rep_t i;
  } VAR_1 = {.i = VAR_0};
  return VAR_1.f;
}
