
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int length; unsigned char* data; } ;
typedef TYPE_1__ ASN1_UNIVERSALSTRING ;


 scalar_t__ FUNC_0 (unsigned char*,int) ;
 scalar_t__ VAR_0 ;

int FUNC_1(ASN1_UNIVERSALSTRING *VAR_1)
{
    int VAR_2;
    unsigned char *VAR_3;

    if (VAR_1->type != VAR_0)
        return 0;
    if ((VAR_1->length % 4) != 0)
        return 0;
    VAR_3 = VAR_1->data;
    for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2 += 4) {
        if ((VAR_3[0] != '\0') || (VAR_3[1] != '\0') || (VAR_3[2] != '\0'))
            break;
        else
            VAR_3 += 4;
    }
    if (VAR_2 < VAR_1->length)
        return 0;
    VAR_3 = VAR_1->data;
    for (VAR_2 = 3; VAR_2 < VAR_1->length; VAR_2 += 4) {
        *(VAR_3++) = VAR_1->data[VAR_2];
    }
    *(VAR_3) = '\0';
    VAR_1->length /= 4;
    VAR_1->type = FUNC_0(VAR_1->data, VAR_1->length);
    return 1;
}
