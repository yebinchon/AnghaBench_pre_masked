
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_VERIFY_PARAM ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(X509_VERIFY_PARAM *VAR_2)
{
    int VAR_3;
    X509_VERIFY_PARAM *VAR_4;
    if (VAR_1 == ((void*)0)) {
        VAR_1 = FUNC_3(VAR_0);
        if (VAR_1 == ((void*)0))
            return 0;
    } else {
        VAR_3 = FUNC_2(VAR_1, VAR_2);
        if (VAR_3 >= 0) {
            VAR_4 = FUNC_1(VAR_1, VAR_3);
            FUNC_0(VAR_4);
        }
    }
    if (!FUNC_4(VAR_1, VAR_2))
        return 0;
    return 1;
}
