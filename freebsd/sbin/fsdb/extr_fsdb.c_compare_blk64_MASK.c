
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint64_t *VAR_1, uint64_t VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 if (VAR_1[VAR_3] != 0 && VAR_1[VAR_3] == VAR_2) {
     VAR_1[VAR_3] = 0;
     return 1;
 }
    }
    return 0;
}
