
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * nonce; } ;
typedef TYPE_1__ TS_TST_INFO ;
typedef int ASN1_INTEGER ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const ASN1_INTEGER *VAR_3, TS_TST_INFO *VAR_4)
{
    const ASN1_INTEGER *VAR_5 = VAR_4->nonce;

    if (!VAR_5) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }


    if (FUNC_0(VAR_3, VAR_5) != 0) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    return 1;
}
