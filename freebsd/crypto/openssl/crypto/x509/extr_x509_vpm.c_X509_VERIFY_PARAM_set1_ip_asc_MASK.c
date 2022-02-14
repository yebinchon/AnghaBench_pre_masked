
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_VERIFY_PARAM ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (unsigned char*,char const*) ;

int FUNC_2(X509_VERIFY_PARAM *VAR_0, const char *VAR_1)
{
    unsigned char VAR_2[16];
    size_t VAR_3;

    VAR_3 = (size_t)FUNC_1(VAR_2, VAR_1);
    if (VAR_3 == 0)
        return 0;
    return FUNC_0(VAR_0, VAR_2, VAR_3);
}
