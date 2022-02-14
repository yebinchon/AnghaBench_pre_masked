
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int length; unsigned char* data; } ;
typedef TYPE_1__ ASN1_BIT_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 unsigned char* FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(ASN1_BIT_STRING *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    unsigned char *VAR_9;

    VAR_6 = VAR_4 / 8;
    VAR_7 = 1 << (7 - (VAR_4 & 0x07));
    VAR_8 = ~VAR_7;
    if (!VAR_5)
        VAR_7 = 0;

    if (VAR_3 == ((void*)0))
        return 0;

    VAR_3->flags &= ~(VAR_1 | 0x07);

    if ((VAR_3->length < (VAR_6 + 1)) || (VAR_3->data == ((void*)0))) {
        if (!VAR_5)
            return 1;
        VAR_9 = FUNC_1(VAR_3->data, VAR_3->length, VAR_6 + 1);
        if (VAR_9 == ((void*)0)) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (VAR_6 + 1 - VAR_3->length > 0)
            FUNC_2(VAR_9 + VAR_3->length, 0, VAR_6 + 1 - VAR_3->length);
        VAR_3->data = VAR_9;
        VAR_3->length = VAR_6 + 1;
    }
    VAR_3->data[VAR_6] = ((VAR_3->data[VAR_6]) & VAR_8) | VAR_7;
    while ((VAR_3->length > 0) && (VAR_3->data[VAR_3->length - 1] == 0))
        VAR_3->length--;
    return 1;
}
