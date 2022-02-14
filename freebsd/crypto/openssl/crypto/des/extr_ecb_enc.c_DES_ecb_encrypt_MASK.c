
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* const_DES_cblock ;
typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef scalar_t__ DES_LONG ;


 int FUNC_0 (scalar_t__*,int *,int) ;
 int FUNC_1 (unsigned char const*,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char*) ;

void FUNC_3(const_DES_cblock *VAR_0, DES_cblock *VAR_1,
                     DES_key_schedule *VAR_2, int VAR_3)
{
    register DES_LONG VAR_4;
    DES_LONG VAR_5[2];
    const unsigned char *VAR_6 = &(*VAR_0)[0];
    unsigned char *VAR_7 = &(*VAR_1)[0];

    FUNC_1(VAR_6, VAR_4);
    VAR_5[0] = VAR_4;
    FUNC_1(VAR_6, VAR_4);
    VAR_5[1] = VAR_4;
    FUNC_0(VAR_5, VAR_2, VAR_3);
    VAR_4 = VAR_5[0];
    FUNC_2(VAR_4, VAR_7);
    VAR_4 = VAR_5[1];
    FUNC_2(VAR_4, VAR_7);
    VAR_4 = VAR_5[0] = VAR_5[1] = 0;
}
