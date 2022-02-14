
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int saidx_t ;



__attribute__((used)) static
saidx_t
FUNC_0(const saidx_t *VAR_0, saidx_t VAR_1, saidx_t VAR_2) {
  saidx_t VAR_3, VAR_4;
  for(VAR_4 = 0, VAR_3 = VAR_1 >> 1;
      0 < VAR_1;
      VAR_1 = VAR_3, VAR_3 >>= 1) {
    if(VAR_0[VAR_4 + VAR_3] < VAR_2) {
      VAR_4 += VAR_3 + 1;
      VAR_3 -= (VAR_1 & 1) ^ 1;
    }
  }
  return VAR_4;
}
