
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RC5_32_KEY ;


 int FUNC_0 (unsigned long*,int *) ;
 int FUNC_1 (unsigned long*,int *) ;
 int FUNC_2 (unsigned char const*,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned char*) ;

void FUNC_4(const unsigned char *VAR_0, unsigned char *VAR_1,
                        RC5_32_KEY *VAR_2, int VAR_3)
{
    unsigned long VAR_4, VAR_5[2];

    FUNC_2(VAR_0, VAR_4);
    VAR_5[0] = VAR_4;
    FUNC_2(VAR_0, VAR_4);
    VAR_5[1] = VAR_4;
    if (VAR_3)
        FUNC_1(VAR_5, VAR_2);
    else
        FUNC_0(VAR_5, VAR_2);
    VAR_4 = VAR_5[0];
    FUNC_3(VAR_4, VAR_1);
    VAR_4 = VAR_5[1];
    FUNC_3(VAR_4, VAR_1);
    VAR_4 = VAR_5[0] = VAR_5[1] = 0;
}
