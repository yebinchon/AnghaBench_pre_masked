
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const size_t *FUNC_0(const size_t *VAR_0, const size_t *VAR_1,
                                       size_t VAR_2) {
  size_t VAR_3 = VAR_1 - VAR_0;
  while (VAR_3 != 0) {
    size_t VAR_4 = VAR_3 / 2;
    const size_t *VAR_5 = VAR_0;
    VAR_5 += VAR_4;
    if (*VAR_5 < VAR_2) {
      VAR_0 = ++VAR_5;
      VAR_3 -= VAR_4 + 1;
    } else {
      VAR_3 = VAR_4;
    }
  }
  return VAR_0;
}
