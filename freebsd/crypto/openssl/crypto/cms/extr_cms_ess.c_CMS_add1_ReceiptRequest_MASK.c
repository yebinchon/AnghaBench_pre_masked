
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_SignerInfo ;
typedef int CMS_ReceiptRequest ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,unsigned char*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned char*) ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned char**) ;

int FUNC_4(CMS_SignerInfo *VAR_4, CMS_ReceiptRequest *VAR_5)
{
    unsigned char *VAR_6 = ((void*)0);
    int VAR_7, VAR_8 = 0;

    VAR_7 = FUNC_3(VAR_5, &VAR_6);
    if (VAR_7 < 0)
        goto merr;

    if (!FUNC_0(VAR_4, VAR_2,
                                     VAR_3, VAR_6, VAR_7))
        goto merr;

    VAR_8 = 1;

 merr:
    if (!VAR_8)
        FUNC_1(VAR_0, VAR_1);

    FUNC_2(VAR_6);

    return VAR_8;

}
