
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;



__attribute__((used)) static int FUNC_0(const BYTE *VAR_0, size_t VAR_1) {
    size_t VAR_2;
    if (VAR_1 < 2) return 1;
    for (VAR_2 = 1; VAR_2 < VAR_1; ++VAR_2) {
        if (VAR_0[0] != VAR_0[VAR_2]) return 0;
    }
    return 1;
}
