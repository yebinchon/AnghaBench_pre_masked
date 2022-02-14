
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 char* FUNC_1 (long) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

char *FUNC_4(const unsigned char *VAR_2, long VAR_3)
{
    static const char VAR_4[] = "0123456789ABCDEF";
    char *VAR_5, *VAR_6;
    const unsigned char *VAR_7;
    int VAR_8;

    if (VAR_3 == 0)
    {
        return FUNC_2(1);
    }

    if ((VAR_5 = FUNC_1(VAR_3 * 3)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_6 = VAR_5;
    for (VAR_8 = 0, VAR_7 = VAR_2; VAR_8 < VAR_3; VAR_8++, VAR_7++) {
        *VAR_6++ = VAR_4[(*VAR_7 >> 4) & 0xf];
        *VAR_6++ = VAR_4[*VAR_7 & 0xf];
        *VAR_6++ = ':';
    }
    VAR_6[-1] = 0;




    return VAR_5;
}
