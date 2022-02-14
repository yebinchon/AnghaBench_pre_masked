
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_LONG ;


 int FUNC_0 (char*,char*,char const*,char const*,char const*,char const*) ;

char *FUNC_1(void)
        {
        static int VAR_0=1;
        static char VAR_1[32];

        if (VAR_0)
                {
                const char *VAR_2,*VAR_3,*VAR_4,*VAR_5;




                VAR_2="idx";
                VAR_4="cisc";




                VAR_3="4";

                if (sizeof(DES_LONG) != sizeof(long))
                        VAR_5="int";
                else
                        VAR_5="long";
                FUNC_0(VAR_1,"des(%s,%s,%s,%s)",VAR_2,VAR_4,VAR_3,VAR_5);
                VAR_0=0;
                }
        return(VAR_1);
}
