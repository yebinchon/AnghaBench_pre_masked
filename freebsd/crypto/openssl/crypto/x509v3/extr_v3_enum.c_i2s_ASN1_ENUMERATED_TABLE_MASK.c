
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* usr_data; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;
struct TYPE_6__ {long bitnum; scalar_t__ lname; } ;
typedef TYPE_2__ ENUMERATED_NAMES ;
typedef int ASN1_ENUMERATED ;


 long FUNC_0 (int const*) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (TYPE_1__*,int const*) ;

char *FUNC_3(X509V3_EXT_METHOD *VAR_0,
                                const ASN1_ENUMERATED *VAR_1)
{
    ENUMERATED_NAMES *VAR_2;
    long VAR_3;

    VAR_3 = FUNC_0(VAR_1);
    for (VAR_2 = VAR_0->usr_data; VAR_2->lname; VAR_2++) {
        if (VAR_3 == VAR_2->bitnum)
            return FUNC_1(VAR_2->lname);
    }
    return FUNC_2(VAR_0, VAR_1);
}
