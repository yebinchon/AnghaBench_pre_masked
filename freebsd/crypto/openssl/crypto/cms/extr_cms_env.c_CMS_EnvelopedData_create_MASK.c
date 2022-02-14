
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encryptedContentInfo; } ;
typedef int EVP_CIPHER ;
typedef TYPE_1__ CMS_EnvelopedData ;
typedef int CMS_ContentInfo ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int const*,int *,int ) ;
 TYPE_1__* FUNC_4 (int *) ;

CMS_ContentInfo *FUNC_5(const EVP_CIPHER *VAR_2)
{
    CMS_ContentInfo *VAR_3;
    CMS_EnvelopedData *VAR_4;
    VAR_3 = FUNC_1();
    if (VAR_3 == ((void*)0))
        goto merr;
    VAR_4 = FUNC_4(VAR_3);
    if (VAR_4 == ((void*)0))
        goto merr;
    if (!FUNC_3(VAR_4->encryptedContentInfo,
                                   VAR_2, ((void*)0), 0))
        goto merr;
    return VAR_3;
 merr:
    FUNC_0(VAR_3);
    FUNC_2(VAR_0, VAR_1);
    return ((void*)0);
}
