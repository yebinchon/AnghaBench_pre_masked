
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hashed_msg; int hash_algo; } ;
typedef TYPE_1__ TS_MSG_IMPRINT ;
typedef int BIO ;
typedef int ASN1_OCTET_STRING ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(BIO *VAR_0, TS_MSG_IMPRINT *VAR_1)
{
    ASN1_OCTET_STRING *VAR_2;

    FUNC_4(VAR_0, VAR_1->hash_algo);

    FUNC_3(VAR_0, "Message data:\n");
    VAR_2 = VAR_1->hashed_msg;
    FUNC_2(VAR_0, (const char *)FUNC_0(VAR_2),
                    FUNC_1(VAR_2), 4);

    return 1;
}
