
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XML_Char ;


 scalar_t__ const FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(const XML_Char *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 1;
    while (*VAR_0) {
        if (*VAR_0 == FUNC_0(' '))
            ++VAR_2;
        else if (*VAR_0 == FUNC_0('\t') || *VAR_0 == FUNC_0('\n') || *VAR_0 == FUNC_0('\r'))
            return 0;
        else {
            if (VAR_3) {
                VAR_3 = 0;
                if (VAR_2 && !VAR_1)

                    return 0;
            }
            else if (VAR_2 > 1 && !VAR_1)
                return 0;
            VAR_2 = 0;
        }
        ++VAR_0;
    }
    if (VAR_2 && !VAR_1)
        return 0;
    return 1;
}
