
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {long st_size; int st_mode; } ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (unsigned char*,int) ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (unsigned char*,int,double) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned char*,int,int,int *) ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;
 int * FUNC_12 (char const*,char*) ;
 int FUNC_13 (int *,int *) ;

int FUNC_14(const char *VAR_9, long VAR_10)
{
    unsigned char VAR_11[(VAR_1 + VAR_2)];


    struct stat VAR_12;

    int VAR_13, VAR_14, VAR_15 = 0;
    FILE *VAR_16;

    if (VAR_10 == 0)
        return 0;

    if ((VAR_16 = FUNC_12(VAR_9, "rb")) == ((void*)0)) {
        FUNC_4(VAR_3, VAR_5);
        FUNC_0(2, "Filename=", VAR_9);
        return -1;
    }


    if (FUNC_11(FUNC_9(VAR_16), &VAR_12) < 0) {
        FUNC_4(VAR_3, VAR_6);
        FUNC_0(2, "Filename=", VAR_9);
        FUNC_7(VAR_16);
        return -1;
    }

    if (VAR_10 < 0) {
        if (FUNC_5(VAR_12.st_mode))
            VAR_10 = VAR_12.st_size;
        else
            VAR_10 = VAR_2;
    }
    FUNC_13(VAR_16, ((void*)0));




    for ( ; ; ) {
        if (VAR_10 > 0)
            VAR_14 = (VAR_10 <= (VAR_1 + VAR_2)) ? (int)VAR_10 : VAR_1;
        else
            VAR_14 = (VAR_1 + VAR_2);
        VAR_13 = FUNC_10(VAR_11, 1, VAR_14, VAR_16);







        if (VAR_13 == 0)
            break;

        FUNC_2(VAR_11, VAR_13, (double)VAR_13);
        VAR_15 += VAR_13;


        if (VAR_10 > 0 && (VAR_10 -= VAR_13) <= 0)
            break;
    }

    FUNC_1(VAR_11, sizeof(VAR_11));
    FUNC_7(VAR_16);
    if (!FUNC_3()) {
        FUNC_4(VAR_3, VAR_7);
        FUNC_0(2, "Filename=", VAR_9);
        return -1;
    }

    return VAR_15;
}
