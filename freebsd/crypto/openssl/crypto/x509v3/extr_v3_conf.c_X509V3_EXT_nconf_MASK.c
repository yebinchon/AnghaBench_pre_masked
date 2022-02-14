
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int X509V3_CTX ;
typedef int CONF ;


 int FUNC_0 (int,char*,char const*,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,int *,int ,int,char const*) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (char const**) ;
 int * FUNC_6 (char const*,char const*,int,int,int *) ;

X509_EXTENSION *FUNC_7(CONF *VAR_2, X509V3_CTX *VAR_3, const char *VAR_4,
                                 const char *VAR_5)
{
    int VAR_6;
    int VAR_7;
    X509_EXTENSION *VAR_8;
    VAR_6 = FUNC_4(&VAR_5);
    if ((VAR_7 = FUNC_5(&VAR_5)))
        return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3);
    VAR_8 = FUNC_3(VAR_2, VAR_3, FUNC_1(VAR_4), VAR_6, VAR_5);
    if (!VAR_8) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_0(4, "name=", VAR_4, ", value=", VAR_5);
    }
    return VAR_8;
}
