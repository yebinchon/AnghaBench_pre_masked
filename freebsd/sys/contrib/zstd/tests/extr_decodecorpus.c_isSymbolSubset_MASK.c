
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t const BYTE ;



__attribute__((used)) static int FUNC_0(const BYTE* VAR_0, size_t VAR_1, const BYTE* VAR_2, BYTE VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_0[VAR_4] > VAR_3 || !VAR_2[VAR_0[VAR_4]]) {
            return 0;
        }
    }
    return 1;
}
