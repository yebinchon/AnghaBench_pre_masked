
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(CMS_ContentInfo *VAR_3,
                              const unsigned char *VAR_4, size_t VAR_5,
                              BIO *VAR_6, BIO *VAR_7, unsigned int VAR_8)
{
    BIO *VAR_9;
    int VAR_10;
    if (FUNC_4(FUNC_2(VAR_3)) != VAR_2) {
        FUNC_3(VAR_0,
               VAR_1);
        return 0;
    }

    if (!VAR_6 && !FUNC_5(VAR_3))
        return 0;

    if (FUNC_0(VAR_3, ((void*)0), VAR_4, VAR_5) <= 0)
        return 0;
    VAR_9 = FUNC_1(VAR_3, VAR_6);
    if (!VAR_9)
        return 0;
    VAR_10 = FUNC_6(VAR_7, VAR_9, VAR_8);
    FUNC_7(VAR_9, VAR_6);
    return VAR_10;
}
