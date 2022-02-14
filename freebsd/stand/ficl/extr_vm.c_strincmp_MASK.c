
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ FICL_UNS ;


 int FUNC_0 (char) ;

int FUNC_1(char *VAR_0, char *VAR_1, FICL_UNS VAR_2)
{
    int VAR_3 = 0;

    for (; 0 < VAR_2; ++VAR_0, ++VAR_1, --VAR_2)
    {
        VAR_3 = FUNC_0(*VAR_0) - FUNC_0(*VAR_1);
        if (VAR_3 != 0)
            return VAR_3;
        else if (*VAR_0 == '\0')
            return 0;
    }
    return 0;
}
