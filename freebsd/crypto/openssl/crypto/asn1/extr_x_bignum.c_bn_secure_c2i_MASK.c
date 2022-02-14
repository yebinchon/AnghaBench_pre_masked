
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int **,unsigned char const*,int,int,char*,int const*) ;
 int FUNC_2 (int **,int const*) ;

__attribute__((used)) static int FUNC_3(ASN1_VALUE **VAR_1, const unsigned char *VAR_2, int VAR_3,
                         int VAR_4, char *VAR_5, const ASN1_ITEM *VAR_6)
{
    int VAR_7;
    BIGNUM *VAR_8;

    if (!*VAR_1 && !FUNC_2(VAR_1, VAR_6))
        return 0;

    VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    if (!VAR_7)
        return 0;


    VAR_8 = (BIGNUM *)*VAR_1;
    FUNC_0(VAR_8, VAR_0);
    return VAR_7;
}
