
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int OPTION_CHOICE ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (unsigned long,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int *) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int,char**,int ) ;
 int FUNC_5 () ;
 char** FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char*,unsigned long*) ;

int FUNC_8(int VAR_5, char **VAR_6)
{
    OPTION_CHOICE VAR_7;
    char VAR_8[256], *VAR_9;
    int VAR_10 = 1;
    unsigned long VAR_11;

    VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_4);
    while ((VAR_7 = FUNC_5()) != 130) {
        switch (VAR_7) {
        case 130:
        case 129:
            FUNC_0(VAR_2, "%s: Use -help for summary.\n", VAR_9);
            goto end;
        case 128:
            FUNC_3(VAR_4);
            VAR_10 = 0;
            goto end;
        }
    }

    VAR_10 = 0;
    for (VAR_6 = FUNC_6(); *VAR_6; VAR_6++) {
        if (FUNC_7(*VAR_6, "%lx", &VAR_11) == 0) {
            VAR_10++;
        } else {



            FUNC_2(VAR_1
                             | VAR_0, ((void*)0));
            FUNC_1(VAR_11, VAR_8, sizeof(VAR_8));
            FUNC_0(VAR_3, "%s\n", VAR_8);
        }
    }
 end:
    return VAR_10;
}
