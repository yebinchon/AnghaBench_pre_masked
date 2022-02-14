
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static int FUNC_5(char *VAR_3)
{
    int VAR_4;
    char *VAR_5, *VAR_6, *VAR_7;


    for (VAR_5 = VAR_3; *VAR_5 && !FUNC_2(*VAR_5); VAR_5++)
        continue;
    if (!*VAR_5) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }


    while (*VAR_5 && FUNC_2(*VAR_5))
        VAR_5++;

    if (!*VAR_5) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }


    for (VAR_6 = VAR_5; *VAR_6 && !FUNC_2(*VAR_6); VAR_6++)
        continue;

    if (!*VAR_6) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }


    *VAR_6++ = 0;


    VAR_4 = FUNC_4(VAR_5, &VAR_7, 10);

    if (*VAR_7)
        return 0;


    while (*VAR_6 && FUNC_2(*VAR_6))
        VAR_6++;

    if (*VAR_6) {





        for (VAR_7 = VAR_6 + FUNC_3(VAR_6) - 1; FUNC_2(*VAR_7); VAR_7--)
            *VAR_7 = 0;
    }
    if (VAR_4 != 200) {
        FUNC_1(VAR_0, VAR_1);
        if (!*VAR_6)
            FUNC_0(2, "Code=", VAR_5);
        else
            FUNC_0(4, "Code=", VAR_5, ",Reason=", VAR_6);
        return 0;
    }

    return 1;

}
