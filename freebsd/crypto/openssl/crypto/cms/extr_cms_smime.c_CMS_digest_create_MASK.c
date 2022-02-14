
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int *,unsigned int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int const*) ;

CMS_ContentInfo *FUNC_5(BIO *VAR_2, const EVP_MD *VAR_3,
                                   unsigned int VAR_4)
{
    CMS_ContentInfo *VAR_5;
    if (!VAR_3)
        VAR_3 = FUNC_3();
    VAR_5 = FUNC_4(VAR_3);
    if (!VAR_5)
        return ((void*)0);

    if (!(VAR_4 & VAR_0))
        FUNC_2(VAR_5, 0);

    if ((VAR_4 & VAR_1) || FUNC_1(VAR_5, VAR_2, ((void*)0), VAR_4))
        return VAR_5;

    FUNC_0(VAR_5);
    return ((void*)0);
}
