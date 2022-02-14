
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_map_st {scalar_t__ bit; int text; } ;
typedef int BIO ;
typedef int ASN1_BIT_STRING ;


 scalar_t__ FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_0, const struct status_map_st *VAR_1,
                               const ASN1_BIT_STRING *VAR_2)
{
    int VAR_3 = 0;

    for (; VAR_1->bit >= 0; ++VAR_1) {
        if (FUNC_0(VAR_2, VAR_1->bit)) {
            if (++VAR_3 > 1)
                FUNC_1(VAR_0, ", ");
            FUNC_1(VAR_0, "%s", VAR_1->text);
        }
    }

    return VAR_3;
}
