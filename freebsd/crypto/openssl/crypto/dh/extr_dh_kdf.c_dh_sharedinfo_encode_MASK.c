
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* parameter; int * algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
struct TYPE_10__ {unsigned char* data; int length; scalar_t__ flags; void* type; } ;
struct TYPE_7__ {TYPE_4__* octet_string; } ;
struct TYPE_9__ {TYPE_1__ value; void* type; } ;
typedef TYPE_3__ ASN1_TYPE ;
typedef TYPE_4__ ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (unsigned char**,TYPE_2__*,TYPE_4__*,size_t) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 size_t VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (unsigned char**,long*,void*) ;

__attribute__((used)) static int FUNC_3(unsigned char **VAR_4, unsigned char **VAR_5,
                                ASN1_OBJECT *VAR_6, size_t VAR_7,
                                const unsigned char *VAR_8, size_t VAR_9)
{
    unsigned char *VAR_10;
    int VAR_11;
    long VAR_12;

    static unsigned char VAR_13[4] = { 0xF3, 0x17, 0x22, 0x53 };
    X509_ALGOR VAR_14;
    ASN1_OCTET_STRING VAR_15, VAR_16, *VAR_17;
    ASN1_TYPE VAR_18;
    if (VAR_9 > VAR_0 || VAR_7 > VAR_0)
        return 0;
    VAR_15.data = VAR_13;
    VAR_15.length = 4;
    VAR_15.flags = 0;
    VAR_15.type = VAR_2;
    VAR_18.type = VAR_2;
    VAR_18.value.octet_string = &VAR_15;
    VAR_14.algorithm = VAR_6;
    VAR_14.parameter = &VAR_18;
    if (VAR_8) {
        VAR_16.type = VAR_2;
        VAR_16.flags = 0;
        VAR_16.data = (unsigned char *)VAR_8;
        VAR_16.length = VAR_9;
        VAR_17 = &VAR_16;
    } else
        VAR_17 = ((void*)0);
    VAR_11 = FUNC_0(VAR_4, &VAR_14, VAR_17, VAR_7);
    if (VAR_11 <= 0)
        return 0;
    VAR_10 = *VAR_4;
    VAR_12 = VAR_11;
    if (!FUNC_2(&VAR_10, &VAR_12, VAR_3))
        return 0;
    if (!FUNC_2(&VAR_10, &VAR_12, VAR_3))
        return 0;
    if (!FUNC_2(&VAR_10, &VAR_12, VAR_1))
        return 0;
    if (!FUNC_2(&VAR_10, &VAR_12, VAR_2))
        return 0;
    if (FUNC_1(VAR_10, VAR_13, 4))
        return 0;
    *VAR_5 = VAR_10;
    return VAR_11;
}
