
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (char const*,char*,size_t) ;
 size_t FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,size_t,char*,size_t) ;
 size_t FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char const*,size_t,...) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static const char* FUNC_6(const char* VAR_5)
{

    static char VAR_6[4086];
    static char* VAR_7 = (char*)VAR_6;

    if (VAR_5 != ((void*)0))
    {

        size_t VAR_8 = 4086 - (size_t)(VAR_7 - VAR_6);
        DWORD VAR_9 = FUNC_0(VAR_5, VAR_7, (DWORD)VAR_8);
        if (VAR_9 >= VAR_8)
            FUNC_4(VAR_4, VAR_5, (size_t)VAR_9 - 1, (size_t)(VAR_8 - 1));
        else if (VAR_9 > 0)
        {
            const char* VAR_10 = (const char*)VAR_7;
            VAR_7 += VAR_9 + 1;
            return VAR_10;
        }
        else
        {



            DWORD VAR_11 = FUNC_1();
            if (VAR_11 == VAR_1)
                return VAR_7;

            if (VAR_11 != VAR_0)
                FUNC_4(VAR_3, VAR_5, (int)VAR_11);
        }
    }
    return ((void*)0);
}
