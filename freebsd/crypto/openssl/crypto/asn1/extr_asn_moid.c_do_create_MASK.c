
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 scalar_t__ FUNC_5 (char const) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, const char *VAR_4)
{
    int VAR_5;
    const char *VAR_6, *VAR_7, *VAR_8;
    char *VAR_9 = ((void*)0);

    VAR_8 = FUNC_6(VAR_3, ',');
    if (VAR_8 == ((void*)0)) {
        VAR_6 = VAR_4;
        VAR_7 = VAR_3;
    } else {
        VAR_6 = VAR_3;
        VAR_7 = VAR_8 + 1;
        if (*VAR_7 == '\0')
            return 0;
        while (FUNC_5(*VAR_7))
            VAR_7++;
        while (FUNC_5(*VAR_6))
            VAR_6++;
        VAR_8--;
        while (FUNC_5(*VAR_8)) {
            if (VAR_8 == VAR_6)
                return 0;
            VAR_8--;
        }
        VAR_8++;
        if ((VAR_9 = FUNC_3((VAR_8 - VAR_6) + 1)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        FUNC_4(VAR_9, VAR_6, VAR_8 - VAR_6);
        VAR_9[VAR_8 - VAR_6] = '\0';
        VAR_6 = VAR_9;
    }

    VAR_5 = FUNC_1(VAR_7, VAR_4, VAR_6);

    FUNC_2(VAR_9);

    return VAR_5 != VAR_2;
}
