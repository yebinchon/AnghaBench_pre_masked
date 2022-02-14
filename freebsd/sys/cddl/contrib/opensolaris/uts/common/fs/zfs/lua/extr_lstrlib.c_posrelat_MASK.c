
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;



__attribute__((used)) static size_t FUNC_0 (ptrdiff_t VAR_0, size_t VAR_1) {
  if (VAR_0 >= 0) return (size_t)VAR_0;
  else if (0u - (size_t)VAR_0 > VAR_1) return 0;
  else return VAR_1 - ((size_t)-VAR_0) + 1;
}
