
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int type; int data; } ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(const ASN1_STRING *VAR_0, const ASN1_STRING *VAR_1)
{
    int VAR_2;

    VAR_2 = (VAR_0->length - VAR_1->length);
    if (VAR_2 == 0) {
        VAR_2 = FUNC_0(VAR_0->data, VAR_1->data, VAR_0->length);
        if (VAR_2 == 0)
            return VAR_0->type - VAR_1->type;
        else
            return VAR_2;
    } else
        return VAR_2;
}
