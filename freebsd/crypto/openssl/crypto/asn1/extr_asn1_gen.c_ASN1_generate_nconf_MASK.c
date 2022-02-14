
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_CTX ;
typedef int CONF ;
typedef int ASN1_TYPE ;


 int * FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *,int *) ;

ASN1_TYPE *FUNC_2(const char *VAR_0, CONF *VAR_1)
{
    X509V3_CTX VAR_2;

    if (!VAR_1)
        return FUNC_0(VAR_0, ((void*)0));

    FUNC_1(&VAR_2, VAR_1);
    return FUNC_0(VAR_0, &VAR_2);
}
