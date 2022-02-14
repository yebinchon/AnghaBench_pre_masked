
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OCSP_REQ_CTX ;
typedef int OCSP_REQUEST ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;

OCSP_REQ_CTX *FUNC_4(BIO *VAR_0, const char *VAR_1, OCSP_REQUEST *VAR_2,
                               int VAR_3)
{

    OCSP_REQ_CTX *VAR_4 = ((void*)0);
    VAR_4 = FUNC_2(VAR_0, VAR_3);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    if (!FUNC_1(VAR_4, "POST", VAR_1))
        goto err;

    if (VAR_2 && !FUNC_3(VAR_4, VAR_2))
        goto err;

    return VAR_4;

 err:
    FUNC_0(VAR_4);
    return ((void*)0);
}
