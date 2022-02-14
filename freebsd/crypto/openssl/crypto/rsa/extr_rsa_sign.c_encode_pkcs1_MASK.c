
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct TYPE_8__ {TYPE_5__* digest; TYPE_3__* algor; } ;
typedef TYPE_2__ X509_SIG ;
struct TYPE_9__ {TYPE_4__* parameter; int * algorithm; } ;
typedef TYPE_3__ X509_ALGOR ;
struct TYPE_11__ {unsigned char* data; unsigned int length; } ;
struct TYPE_7__ {int * ptr; } ;
struct TYPE_10__ {TYPE_1__ value; int type; } ;
typedef TYPE_4__ ASN1_TYPE ;
typedef TYPE_5__ ASN1_OCTET_STRING ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,unsigned char**) ;

__attribute__((used)) static int FUNC_4(unsigned char **VAR_4, int *VAR_5, int VAR_6,
                        const unsigned char *VAR_7, unsigned int VAR_8)
{
    X509_SIG VAR_9;
    X509_ALGOR VAR_10;
    ASN1_TYPE VAR_11;
    ASN1_OCTET_STRING VAR_12;
    uint8_t *VAR_13 = ((void*)0);
    int VAR_14;

    VAR_9.algor = &VAR_10;
    VAR_9.algor->algorithm = FUNC_1(VAR_6);
    if (VAR_9.algor->algorithm == ((void*)0)) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    if (FUNC_0(VAR_9.algor->algorithm) == 0) {
        FUNC_2(VAR_0,
               VAR_1);
        return 0;
    }
    VAR_11.type = VAR_3;
    VAR_11.value.ptr = ((void*)0);
    VAR_9.algor->parameter = &VAR_11;

    VAR_9.digest = &VAR_12;
    VAR_9.digest->data = (unsigned char *)VAR_7;
    VAR_9.digest->length = VAR_8;

    VAR_14 = FUNC_3(&VAR_9, &VAR_13);
    if (VAR_14 < 0)
        return 0;

    *VAR_4 = VAR_13;
    *VAR_5 = VAR_14;
    return 1;
}
