
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_info_cb ;
typedef int BIO ;


 long FUNC_0 (int *,int,int *) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(BIO *VAR_0, int VAR_1, BIO_info_cb *VAR_2)
{
    long VAR_3 = 1;
    BIO *VAR_4 = FUNC_1(VAR_0);

    if (VAR_4 == ((void*)0))
        return 0;
    switch (VAR_1) {
    default:
        VAR_3 = FUNC_0(VAR_4, VAR_1, VAR_2);
        break;
    }
    return VAR_3;
}
