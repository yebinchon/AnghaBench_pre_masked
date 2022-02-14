
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef int DES_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(DES_LONG *VAR_2, DES_key_schedule *VAR_3,
                  DES_key_schedule *VAR_4, DES_key_schedule *VAR_5)
{
    register DES_LONG VAR_6, VAR_7;

    VAR_6 = VAR_2[0];
    VAR_7 = VAR_2[1];
    FUNC_2(VAR_6, VAR_7);
    VAR_2[0] = VAR_6;
    VAR_2[1] = VAR_7;
    FUNC_0((DES_LONG *)VAR_2, VAR_5, VAR_0);
    FUNC_0((DES_LONG *)VAR_2, VAR_4, VAR_1);
    FUNC_0((DES_LONG *)VAR_2, VAR_3, VAR_0);
    VAR_6 = VAR_2[0];
    VAR_7 = VAR_2[1];
    FUNC_1(VAR_7, VAR_6);
    VAR_2[0] = VAR_6;
    VAR_2[1] = VAR_7;
}
