
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (int const,char*,int) ;
 char* FUNC_5 (char*,char) ;

void
FUNC_6(const char *VAR_1, const char *VAR_2)
{
    const int VAR_3 = FUNC_2(VAR_1, VAR_0);
    FUNC_1(VAR_3 != -1, "Cannot open %s", VAR_1);

    char VAR_4[1024];
    ssize_t VAR_5;
    bool VAR_6 = 0;
    while ((VAR_5 = FUNC_4(VAR_3, VAR_4, sizeof(VAR_4) - 1)) > 0) {
        VAR_4[VAR_5] = '\0';

        if (!VAR_6)
            FUNC_3("%s", VAR_2);

        char *VAR_7 = VAR_4;
        char *VAR_8;
        while ((VAR_8 = FUNC_5(VAR_7, '\n')) != ((void*)0)) {
            *VAR_8 = '\0';
            FUNC_3("%s\n", VAR_7);

            VAR_7 = VAR_8 + 1;
            if (VAR_7 != VAR_4 + VAR_5)
                FUNC_3("%s", VAR_2);
            else
                VAR_6 = 0;
        }
        if (VAR_7 < VAR_4 + VAR_5) {
            FUNC_3("%s", VAR_7);
            VAR_6 = 1;
        }
    }
    FUNC_0(VAR_5 == 0);
}
