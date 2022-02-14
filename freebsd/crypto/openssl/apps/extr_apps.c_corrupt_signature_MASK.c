
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; int length; } ;
typedef TYPE_1__ ASN1_STRING ;



void FUNC_0(const ASN1_STRING *VAR_0)
{
        unsigned char *VAR_1 = VAR_0->data;
        VAR_1[VAR_0->length - 1] ^= 0x1;
}
