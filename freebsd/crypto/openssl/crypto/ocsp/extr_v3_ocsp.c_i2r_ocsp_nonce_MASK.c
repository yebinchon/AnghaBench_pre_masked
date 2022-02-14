
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509V3_EXT_METHOD ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char*,int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,void*,int ) ;

__attribute__((used)) static int FUNC_2(const X509V3_EXT_METHOD *VAR_1, void *VAR_2,
                          BIO *VAR_3, int VAR_4)
{
    if (FUNC_0(VAR_3, "%*s", VAR_4, "") <= 0)
        return 0;
    if (FUNC_1(VAR_3, VAR_2, VAR_0) <= 0)
        return 0;
    return 1;
}
