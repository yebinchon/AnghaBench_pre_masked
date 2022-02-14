
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char* FUNC_0(const char* VAR_0, const char* VAR_1, const char** VAR_2, int* VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (!VAR_0 || !VAR_1 || !VAR_2 || !VAR_3)
        return ((void*)0);

    for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
    {
        int VAR_6 = 0;
        for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
            if (VAR_0[VAR_4] == VAR_1[VAR_5])
            {
                VAR_6 = 1;
                break;
            }
        if (!VAR_6)
            break;
    }

    if (!VAR_0[VAR_4])
        return ((void*)0);

    *VAR_3 = 0;
    *VAR_2 = &VAR_0[VAR_4];

    for (; VAR_0[VAR_4]; VAR_4++, (*VAR_3)++)
    {
        int VAR_7 = 0;
        for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
            if (VAR_0[VAR_4] == VAR_1[VAR_5])
            {
                VAR_7 = 1;
                break;
            }
        if (VAR_7)
            break;
    }

    for (; VAR_0[VAR_4]; VAR_4++)
    {
        int VAR_8 = 0;
        for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
            if (VAR_0[VAR_4] == VAR_1[VAR_5])
            {
                VAR_8 = 1;
                break;
            }
        if (!VAR_8)
            break;
    }

    return &VAR_0[VAR_4];
}
