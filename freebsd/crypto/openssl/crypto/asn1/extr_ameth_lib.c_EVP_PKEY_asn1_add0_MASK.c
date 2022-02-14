
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkey_flags; int pkey_id; int * pem_str; int member_0; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__ const*) ;
 int FUNC_4 (int *) ;

int FUNC_5(const EVP_PKEY_ASN1_METHOD *VAR_6)
{
    EVP_PKEY_ASN1_METHOD VAR_7 = { 0, };
    if (!((VAR_6->pem_str == ((void*)0)
           && (VAR_6->pkey_flags & VAR_0) != 0)
          || (VAR_6->pem_str != ((void*)0)
              && (VAR_6->pkey_flags & VAR_0) == 0))) {
        FUNC_0(VAR_2, VAR_1);
        return 0;
    }

    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_2(VAR_4);
        if (VAR_5 == ((void*)0))
            return 0;
    }

    VAR_7.pkey_id = VAR_6->pkey_id;
    if (FUNC_1(VAR_5, &VAR_7) >= 0) {
        FUNC_0(VAR_2,
               VAR_3);
        return 0;
    }

    if (!FUNC_3(VAR_5, VAR_6))
        return 0;
    FUNC_4(VAR_5);
    return 1;
}
