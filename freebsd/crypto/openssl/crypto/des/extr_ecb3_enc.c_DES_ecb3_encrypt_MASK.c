
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* const_DES_cblock ;
typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef int DES_LONG ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (unsigned char const*,int ) ;
 int FUNC_3 (int ,unsigned char*) ;

void FUNC_4(const_DES_cblock *VAR_0, DES_cblock *VAR_1,
                      DES_key_schedule *VAR_2, DES_key_schedule *VAR_3,
                      DES_key_schedule *VAR_4, int VAR_5)
{
    register DES_LONG VAR_6, VAR_7;
    DES_LONG VAR_8[2];
    const unsigned char *VAR_9 = &(*VAR_0)[0];
    unsigned char *VAR_10 = &(*VAR_1)[0];

    FUNC_2(VAR_9, VAR_6);
    FUNC_2(VAR_9, VAR_7);
    VAR_8[0] = VAR_6;
    VAR_8[1] = VAR_7;
    if (VAR_5)
        FUNC_1(VAR_8, VAR_2, VAR_3, VAR_4);
    else
        FUNC_0(VAR_8, VAR_2, VAR_3, VAR_4);
    VAR_6 = VAR_8[0];
    VAR_7 = VAR_8[1];
    FUNC_3(VAR_6, VAR_10);
    FUNC_3(VAR_7, VAR_10);
}
