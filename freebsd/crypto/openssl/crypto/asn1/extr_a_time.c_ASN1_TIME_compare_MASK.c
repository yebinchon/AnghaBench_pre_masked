
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_TIME ;


 int FUNC_0 (int*,int*,int const*,int const*) ;

int FUNC_1(const ASN1_TIME *VAR_0, const ASN1_TIME *VAR_1)
{
    int VAR_2, VAR_3;

    if (!FUNC_0(&VAR_2, &VAR_3, VAR_1, VAR_0))
        return -2;
    if (VAR_2 > 0 || VAR_3 > 0)
        return 1;
    if (VAR_2 < 0 || VAR_3 < 0)
        return -1;
    return 0;
}
