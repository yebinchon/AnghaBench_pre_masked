
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;
typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int const*,int) ;
 unsigned long VAR_1 ;
 int FUNC_3 (int ,int *,int const*,int,unsigned long) ;
 int VAR_2 ;

int FUNC_4(FILE *VAR_3, const X509_NAME *VAR_4, int VAR_5,
                          unsigned long VAR_6)
{
    if (VAR_6 == VAR_1) {
        BIO *VAR_7;
        int VAR_8;
        VAR_7 = FUNC_1(VAR_3, VAR_0);
        if (!VAR_7)
            return -1;
        VAR_8 = FUNC_2(VAR_7, VAR_4, VAR_5);
        FUNC_0(VAR_7);
        return VAR_8;
    }
    return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
