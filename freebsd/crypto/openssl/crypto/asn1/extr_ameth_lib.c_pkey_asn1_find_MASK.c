
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pkey_id; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;


 TYPE_1__** FUNC_0 (TYPE_1__ const**,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 TYPE_1__ const* FUNC_3 (scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static const EVP_PKEY_ASN1_METHOD *FUNC_4(int VAR_2)
{
    EVP_PKEY_ASN1_METHOD VAR_3;
    const EVP_PKEY_ASN1_METHOD *VAR_4 = &VAR_3, **VAR_5;
    VAR_3.pkey_id = VAR_2;
    if (VAR_0) {
        int VAR_6;
        VAR_6 = FUNC_2(VAR_0, &VAR_3);
        if (VAR_6 >= 0)
            return FUNC_3(VAR_0, VAR_6);
    }
    VAR_5 = FUNC_0(&VAR_4, VAR_1, FUNC_1(VAR_1));
    if (!VAR_5 || !*VAR_5)
        return ((void*)0);
    return *VAR_5;
}
