
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_ADDR ;


 char* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int *,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*) ;

int FUNC_13(int VAR_5, char **VAR_6)
{
    BIO_ADDR VAR_7;
    int VAR_8 = -1;

    VAR_8 = FUNC_2(VAR_5, &VAR_7, 0);
    if (VAR_8 == (int)VAR_3) {
        if (FUNC_4(VAR_8)) {
            VAR_8 = -2;
            goto end;
        }
        FUNC_8(VAR_4, FUNC_9());
        FUNC_5(VAR_0, VAR_1);
        goto end;
    }

    if (VAR_6 != ((void*)0)) {
        char *VAR_9 = FUNC_0(&VAR_7, 1);
        char *VAR_10 = FUNC_1(&VAR_7, 1);
        if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0))
            *VAR_6 = FUNC_7(FUNC_12(VAR_9) + FUNC_12(VAR_10) + 2);
        else
            *VAR_6 = ((void*)0);

        if (*VAR_6 == ((void*)0)) {
            FUNC_5(VAR_0, VAR_2);
            FUNC_3(VAR_8);
            VAR_8 = (int)VAR_3;
        } else {
            FUNC_11(*VAR_6, VAR_9);
            FUNC_10(*VAR_6, ":");
            FUNC_10(*VAR_6, VAR_10);
        }
        FUNC_6(VAR_9);
        FUNC_6(VAR_10);
    }

 end:
    return VAR_8;
}
