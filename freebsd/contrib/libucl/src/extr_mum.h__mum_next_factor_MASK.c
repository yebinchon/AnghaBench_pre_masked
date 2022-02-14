
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 () ;

__attribute__((used)) static inline uint64_t
FUNC_1 (void) {
  uint64_t VAR_0 = 0;
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
    VAR_0 = (VAR_0 << 8) | FUNC_0() % 256;
  return VAR_0;
}
