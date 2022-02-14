
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int* data; } ;
typedef TYPE_1__ ASN1_BIT_STRING ;



int FUNC_0(const ASN1_BIT_STRING *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;

    VAR_2 = VAR_1 / 8;
    VAR_3 = 1 << (7 - (VAR_1 & 0x07));
    if ((VAR_0 == ((void*)0)) || (VAR_0->length < (VAR_2 + 1)) || (VAR_0->data == ((void*)0)))
        return 0;
    return ((VAR_0->data[VAR_2] & VAR_3) != 0);
}
