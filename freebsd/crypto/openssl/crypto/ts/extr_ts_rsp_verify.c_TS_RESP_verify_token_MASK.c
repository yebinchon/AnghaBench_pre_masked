
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_VERIFY_CTX ;
typedef int TS_TST_INFO ;
typedef int PKCS7 ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;

int FUNC_3(TS_VERIFY_CTX *VAR_0, PKCS7 *VAR_1)
{
    TS_TST_INFO *VAR_2 = FUNC_0(VAR_1);
    int VAR_3 = 0;
    if (VAR_2) {
        VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
        FUNC_1(VAR_2);
    }
    return VAR_3;
}
