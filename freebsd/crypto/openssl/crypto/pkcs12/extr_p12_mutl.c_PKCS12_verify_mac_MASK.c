
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mac; } ;
struct TYPE_5__ {int dinfo; } ;
typedef TYPE_2__ PKCS12 ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (unsigned char*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int const**) ;
 int FUNC_5 (TYPE_2__*,char const*,int,unsigned char*,unsigned int*,int ) ;

int FUNC_6(PKCS12 *VAR_5, const char *VAR_6, int VAR_7)
{
    unsigned char VAR_8[VAR_0];
    unsigned int VAR_9;
    const ASN1_OCTET_STRING *VAR_10;

    if (VAR_5->mac == ((void*)0)) {
        FUNC_3(VAR_1, VAR_2);
        return 0;
    }
    if (!FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9,
                        VAR_4)) {
        FUNC_3(VAR_1, VAR_3);
        return 0;
    }
    FUNC_4(VAR_5->mac->dinfo, ((void*)0), &VAR_10);
    if ((VAR_9 != (unsigned int)FUNC_1(VAR_10))
        || FUNC_2(VAR_8, FUNC_0(VAR_10), VAR_9) != 0)
        return 0;

    return 1;
}
