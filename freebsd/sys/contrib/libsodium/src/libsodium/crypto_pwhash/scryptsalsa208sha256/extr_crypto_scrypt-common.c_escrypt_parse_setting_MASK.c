
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int *,char const) ;
 char* FUNC_1 (int *,int,char const*) ;

const uint8_t *
FUNC_2(const uint8_t *VAR_0,
                      uint32_t *VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
    const uint8_t *VAR_4;

    if (VAR_0[0] != '$' || VAR_0[1] != '7' || VAR_0[2] != '$') {
        return ((void*)0);
    }
    VAR_4 = VAR_0 + 3;

    if (FUNC_0(VAR_1, *VAR_4)) {
        return ((void*)0);
    }
    VAR_4++;

    VAR_4 = FUNC_1(VAR_2, 30, VAR_4);
    if (!VAR_4) {
        return ((void*)0);
    }

    VAR_4 = FUNC_1(VAR_3, 30, VAR_4);
    if (!VAR_4) {
        return ((void*)0);
    }
    return VAR_4;
}
