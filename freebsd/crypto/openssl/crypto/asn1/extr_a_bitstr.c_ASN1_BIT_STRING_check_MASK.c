
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; int length; } ;
typedef TYPE_1__ ASN1_BIT_STRING ;



int FUNC_0(const ASN1_BIT_STRING *VAR_0,
                          const unsigned char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    if (!VAR_0 || !VAR_0->data)
        return 1;




    VAR_4 = 1;
    for (VAR_3 = 0; VAR_3 < VAR_0->length && VAR_4; ++VAR_3) {
        unsigned char VAR_5 = VAR_3 < VAR_2 ? ~VAR_1[VAR_3] : 0xff;

        VAR_4 = (VAR_0->data[VAR_3] & VAR_5) == 0;
    }
    return VAR_4;
}
