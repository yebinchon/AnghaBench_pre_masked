
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char const**,char*) ;
 scalar_t__ FUNC_2 (char const**) ;

__attribute__((used)) static unsigned FUNC_3(const char* VAR_0, int* VAR_1, int* VAR_2)
{
    for ( ; ;) {
        if (FUNC_1(&VAR_0, "min=")) { *VAR_1 = (int)FUNC_2(&VAR_0); if (VAR_0[0]==',') { VAR_0++; continue; } else break; }
        if (FUNC_1(&VAR_0, "max=")) { *VAR_2 = (int)FUNC_2(&VAR_0); if (VAR_0[0]==',') { VAR_0++; continue; } else break; }
        FUNC_0(4, "invalid compression parameter \n");
        return 0;
    }
    if (VAR_0[0] != 0) return 0;
    if (*VAR_1 > *VAR_2) {
        FUNC_0(4, "incoherent adaptation limits \n");
        return 0;
    }
    return 1;
}
