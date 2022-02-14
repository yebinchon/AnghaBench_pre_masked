
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_10 (char*,int*,int) ;

int FUNC_11(BIO *VAR_4, BIO *VAR_5, int VAR_6)
{
    BIO *VAR_7;
    char VAR_8;
    int VAR_9;
    char VAR_10[VAR_0];




    VAR_7 = FUNC_4(FUNC_0());
    if (VAR_7 == ((void*)0))
        return 0;
    VAR_5 = FUNC_7(VAR_7, VAR_5);
    if (VAR_6 & VAR_2) {
        while ((VAR_9 = FUNC_8(VAR_4, VAR_10, VAR_0)) > 0)
            FUNC_9(VAR_5, VAR_10, VAR_9);
    } else {
        int VAR_11 = 0;
        if (VAR_6 & VAR_3)
            FUNC_6(VAR_5, "Content-Type: text/plain\r\n\r\n");
        while ((VAR_9 = FUNC_3(VAR_4, VAR_10, VAR_0)) > 0) {
            VAR_8 = FUNC_10(VAR_10, &VAR_9, VAR_6);
            if (VAR_9) {

                if (VAR_6 & VAR_1) {
                    int VAR_12;
                    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
                        FUNC_9(VAR_5, "\r\n", 2);
                    VAR_11 = 0;
                }
                FUNC_9(VAR_5, VAR_10, VAR_9);
                if (VAR_8)
                    FUNC_9(VAR_5, "\r\n", 2);
            } else if (VAR_6 & VAR_1)
                VAR_11++;
            else if (VAR_8)
                FUNC_9(VAR_5, "\r\n", 2);
        }
    }
    (void)FUNC_1(VAR_5);
    FUNC_5(VAR_5);
    FUNC_2(VAR_7);
    return 1;
}
