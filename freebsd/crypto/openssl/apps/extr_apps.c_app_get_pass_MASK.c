
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int,int ) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int * FUNC_7 (int *,int *) ;
 int VAR_2 ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int VAR_3 ;
 int * FUNC_10 (int ) ;
 char* FUNC_11 (char const*) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 scalar_t__ FUNC_14 (char const*,char*,int) ;

__attribute__((used)) static char *FUNC_15(const char *VAR_4, int VAR_5)
{
    char *VAR_6, VAR_7[VAR_0];
    static BIO *VAR_8 = ((void*)0);
    int VAR_9;

    if (FUNC_14(VAR_4, "pass:", 5) == 0)
        return FUNC_8(VAR_4 + 5);
    if (FUNC_14(VAR_4, "env:", 4) == 0) {
        VAR_6 = FUNC_11(VAR_4 + 4);
        if (VAR_6 == ((void*)0)) {
            FUNC_6(VAR_3, "Can't read environment variable %s\n", VAR_4 + 4);
            return ((void*)0);
        }
        return FUNC_8(VAR_6);
    }
    if (!VAR_5 || VAR_8 == ((void*)0)) {
        if (FUNC_14(VAR_4, "file:", 5) == 0) {
            VAR_8 = FUNC_5(VAR_4 + 5, "r");
            if (VAR_8 == ((void*)0)) {
                FUNC_6(VAR_3, "Can't open file %s\n", VAR_4 + 5);
                return ((void*)0);
            }
        } else if (FUNC_14(VAR_4, "fd:", 3) == 0) {
            BIO *VAR_10;
            VAR_9 = FUNC_9(VAR_4 + 3);
            if (VAR_9 >= 0)
                VAR_8 = FUNC_4(VAR_9, VAR_1);
            if ((VAR_9 < 0) || !VAR_8) {
                FUNC_6(VAR_3, "Can't access file descriptor %s\n", VAR_4 + 3);
                return ((void*)0);
            }



            VAR_10 = FUNC_3(FUNC_0());
            VAR_8 = FUNC_7(VAR_10, VAR_8);

        } else if (FUNC_13(VAR_4, "stdin") == 0) {
            VAR_8 = FUNC_10(VAR_2);
            if (!VAR_8) {
                FUNC_6(VAR_3, "Can't open BIO for stdin\n");
                return ((void*)0);
            }
        } else {
            FUNC_6(VAR_3, "Invalid password argument \"%s\"\n", VAR_4);
            return ((void*)0);
        }
    }
    VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_0);
    if (VAR_5 != 1) {
        FUNC_1(VAR_8);
        VAR_8 = ((void*)0);
    }
    if (VAR_9 <= 0) {
        FUNC_6(VAR_3, "Error reading password from BIO\n");
        return ((void*)0);
    }
    VAR_6 = FUNC_12(VAR_7, '\n');
    if (VAR_6 != ((void*)0))
        *VAR_6 = 0;
    return FUNC_8(VAR_7);
}
