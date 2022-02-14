
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_SignerInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,unsigned char*,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned char*,unsigned int*) ;

int FUNC_3(CMS_SignerInfo *VAR_6, CMS_SignerInfo *VAR_7)
{
    unsigned char VAR_8[VAR_3];
    unsigned int VAR_9;
    if (!FUNC_2(VAR_7, VAR_8, &VAR_9)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    if (!FUNC_0(VAR_6, VAR_4,
                                     VAR_5, VAR_8, VAR_9)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }
    return 1;
}
