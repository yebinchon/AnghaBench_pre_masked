
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int ,char const*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (char const*,char,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char,int) ;
 int FUNC_9 (char const*,int,int,...) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ) ;

BIO *FUNC_13(const char *VAR_9, int VAR_10, int VAR_11)
{
    FILE *VAR_12 = ((void*)0);
    BIO *VAR_13 = ((void*)0);
    int VAR_14 = -1, VAR_15, VAR_16, VAR_17;

    if (!VAR_11 || VAR_9 == ((void*)0) || FUNC_11(VAR_9, "-") == 0)
        return FUNC_3(VAR_9, 'w', VAR_10);

    VAR_16 = VAR_5;






    VAR_17 = FUNC_7(VAR_10);
    if (!VAR_17) {





    }
        VAR_14 = FUNC_9(VAR_9, VAR_16, 0600);
    if (VAR_14 < 0)
        goto err;
    VAR_12 = FUNC_6(VAR_14, FUNC_8('w', VAR_10));
    if (VAR_12 == ((void*)0))
        goto err;
    VAR_15 = VAR_0;
    if (VAR_17)
        VAR_15 |= VAR_1;
    VAR_13 = FUNC_0(VAR_12, VAR_15);
    if (VAR_13)
        return VAR_13;

 err:
    FUNC_1(VAR_7, "%s: Can't open \"%s\" for writing, %s\n",
               FUNC_10(), VAR_9, FUNC_12(VAR_8));
    FUNC_2(VAR_7);

    if (VAR_12)
        FUNC_5(VAR_12);
    else if (VAR_14 >= 0)
        FUNC_4(VAR_14);
    return ((void*)0);
}
