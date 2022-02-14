
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int X509V3_CTX ;
typedef int CONF ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int,int,char const*) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (char const**) ;
 int * FUNC_4 (int ,char const*,int,int,int *) ;

X509_EXTENSION *FUNC_5(CONF *VAR_0, X509V3_CTX *VAR_1, int VAR_2,
                                     const char *VAR_3)
{
    int VAR_4;
    int VAR_5;
    VAR_4 = FUNC_2(&VAR_3);
    if ((VAR_5 = FUNC_3(&VAR_3)))
        return FUNC_4(FUNC_0(VAR_2),
                                    VAR_3, VAR_4, VAR_5, VAR_1);
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
}
