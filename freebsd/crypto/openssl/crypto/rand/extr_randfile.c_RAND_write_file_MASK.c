
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,char*) ;
 int FUNC_8 (unsigned char*,int,int,int *) ;
 int FUNC_9 (char const*,int,int) ;
 int * FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*,struct stat*) ;

int FUNC_12(const char *VAR_7)
{
    unsigned char VAR_8[VAR_3];
    int VAR_9 = -1;
    FILE *VAR_10 = ((void*)0);

    struct stat VAR_11;

    if (FUNC_11(VAR_7, &VAR_11) >= 0 && !FUNC_4(VAR_11.st_mode)) {
        FUNC_3(VAR_4, VAR_6);
        FUNC_0(2, "Filename=", VAR_7);
        return -1;
    }



    if (FUNC_2(VAR_8, (int)sizeof(VAR_8)) != 1)
        return -1;
    if (VAR_10 == ((void*)0))
        VAR_10 = FUNC_10(VAR_7, "wb");
    if (VAR_10 == ((void*)0)) {
        FUNC_3(VAR_4, VAR_5);
        FUNC_0(2, "Filename=", VAR_7);
        return -1;
    }





    FUNC_5(VAR_7, 0600);


    VAR_9 = FUNC_8(VAR_8, 1, VAR_3, VAR_10);
    FUNC_6(VAR_10);
    FUNC_1(VAR_8, VAR_3);
    return VAR_9;
}
