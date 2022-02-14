
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI_METHOD ;
typedef int UI ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int ,char*,int ,size_t) ;
 int FUNC_3 (int *,void*) ;
 char* FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;

__attribute__((used)) static char *FUNC_9(const UI_METHOD *VAR_5, char *VAR_6,
                           size_t VAR_7, const char *VAR_8, void *VAR_9)
{
    UI *VAR_10 = FUNC_6();
    char *VAR_11 = ((void*)0);

    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_2, VAR_0);
        return ((void*)0);
    }

    if (VAR_5 != ((void*)0))
        FUNC_8(VAR_10, VAR_5);
    FUNC_3(VAR_10, VAR_9);

    if ((VAR_11 = FUNC_4(VAR_10, "pass phrase",
                                      VAR_8)) == ((void*)0)) {
        FUNC_1(VAR_2, VAR_0);
        VAR_6 = ((void*)0);
    } else if (!FUNC_2(VAR_10, VAR_11, VAR_4,
                                    VAR_6, 0, VAR_7 - 1)) {
        FUNC_1(VAR_2, VAR_1);
        VAR_6 = ((void*)0);
    } else {
        switch (FUNC_7(VAR_10)) {
        case -2:
            FUNC_1(VAR_2,
                          VAR_3);
            VAR_6 = ((void*)0);
            break;
        case -1:
            FUNC_1(VAR_2, VAR_1);
            VAR_6 = ((void*)0);
            break;
        default:
            break;
        }
    }

    FUNC_0(VAR_11);
    FUNC_5(VAR_10);
    return VAR_6;
}
