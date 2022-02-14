
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _U_UINT ;


 int FUNC_0 (char const) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(const char* VAR_0)
{
    const char* VAR_1 = VAR_0;

    if (VAR_1 != ((void*)0))
    {
        while (*VAR_1)
        {

            if ((*VAR_1 <= 126) && (*VAR_1 >= 32))
            {
                FUNC_0(*VAR_1);
            }

            else if (*VAR_1 == 13)
            {
                FUNC_0('\\');
                FUNC_0('r');
            }

            else if (*VAR_1 == 10)
            {
                FUNC_0('\\');
                FUNC_0('n');
            }

            else
            {
                FUNC_0('\\');
                FUNC_1((_U_UINT)*VAR_1, 2);
            }
            VAR_1++;
        }
    }
}
