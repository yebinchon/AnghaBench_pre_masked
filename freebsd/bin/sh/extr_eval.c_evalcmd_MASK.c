
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char,char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;
 char* FUNC_4 (char*) ;

int
FUNC_5(int VAR_2, char **VAR_3)
{
        char *VAR_4;
        char *VAR_5;
        char **VAR_6;

        if (VAR_2 > 1) {
                VAR_4 = VAR_3[1];
                if (VAR_2 > 2) {
                        FUNC_0(VAR_5);
                        VAR_6 = VAR_3 + 2;
                        for (;;) {
                                FUNC_2(VAR_4, VAR_5);
                                if ((VAR_4 = *VAR_6++) == ((void*)0))
                                        break;
                                FUNC_1(' ', VAR_5);
                        }
                        FUNC_1('\0', VAR_5);
                        VAR_4 = FUNC_4(VAR_5);
                }
                FUNC_3(VAR_4, VAR_0);
        } else
                VAR_1 = 0;
        return VAR_1;
}
