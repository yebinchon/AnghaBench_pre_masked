
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* data; int length; } ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(ASN1_OCTET_STRING *VAR_3, ASN1_OCTET_STRING *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    unsigned char *VAR_8, *VAR_9, *VAR_10;
    VAR_8 = VAR_3->data;
    VAR_5 = VAR_3->length;
    VAR_9 = VAR_4->data;
    VAR_6 = VAR_4->length;


    if (!((VAR_5 == 4) || (VAR_5 == 16)))
        return VAR_1;
    if (!((VAR_6 == 8) || (VAR_6 == 32)))
        return VAR_1;


    if (VAR_5 * 2 != VAR_6)
        return VAR_0;

    VAR_10 = VAR_4->data + VAR_5;



    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
        if ((VAR_8[VAR_7] & VAR_10[VAR_7]) != (VAR_9[VAR_7] & VAR_10[VAR_7]))
            return VAR_0;

    return VAR_2;

}
