
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned char const**,long) ;

int FUNC_4(SSL *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
    X509 *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_3(((void*)0), &VAR_3, (long)VAR_4);
    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return 0;
    }

    VAR_6 = FUNC_0(VAR_2, VAR_5);
    FUNC_2(VAR_5);
    return VAR_6;
}
