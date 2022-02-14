
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(uint32_t *VAR_0, int VAR_1, uint32_t *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
 if (VAR_0[VAR_3] == 0)
     continue;
 if (FUNC_0(VAR_2, VAR_0[VAR_3])) {
     if (FUNC_1(VAR_0[VAR_3]))
  return 1;
 }
    }
    return 0;
}
