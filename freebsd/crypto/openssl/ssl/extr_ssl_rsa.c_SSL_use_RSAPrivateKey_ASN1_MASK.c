
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int RSA ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,unsigned char const**,long) ;

int FUNC_4(SSL *VAR_2, const unsigned char *VAR_3, long VAR_4)
{
    int VAR_5;
    const unsigned char *VAR_6;
    RSA *VAR_7;

    VAR_6 = VAR_3;
    if ((VAR_7 = FUNC_3(((void*)0), &VAR_6, (long)VAR_4)) == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }

    VAR_5 = FUNC_1(VAR_2, VAR_7);
    FUNC_0(VAR_7);
    return VAR_5;
}
