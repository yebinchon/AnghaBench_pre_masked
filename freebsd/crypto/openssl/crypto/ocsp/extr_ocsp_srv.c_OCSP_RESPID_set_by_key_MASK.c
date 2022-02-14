
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int * byKey; } ;
struct TYPE_5__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ OCSP_RESPID ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,unsigned char*,int *) ;

int FUNC_5(OCSP_RESPID *VAR_2, X509 *VAR_3)
{
    ASN1_OCTET_STRING *VAR_4 = ((void*)0);
    unsigned char VAR_5[VAR_0];


    if (!FUNC_4(VAR_3, FUNC_3(), VAR_5, ((void*)0)))
        return 0;

    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
        return 0;

    if (!(FUNC_2(VAR_4, VAR_5, VAR_0))) {
        FUNC_0(VAR_4);
        return 0;
    }

    VAR_2->type = VAR_1;
    VAR_2->value.byKey = VAR_4;

    return 1;
}
