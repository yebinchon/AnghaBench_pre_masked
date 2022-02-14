
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int DES_LONG ;


 int FUNC_0 (char*,char*,int) ;

const char *FUNC_1(void)
{
    static int VAR_0 = 1;
    static char VAR_1[12];

    if (VAR_0) {
        if (sizeof(DES_LONG) != sizeof(long))
            FUNC_0(VAR_1, "des(int)", sizeof(VAR_1));
        else
            FUNC_0(VAR_1, "des(long)", sizeof(VAR_1));
        VAR_0 = 0;
    }
    return VAR_1;
}
