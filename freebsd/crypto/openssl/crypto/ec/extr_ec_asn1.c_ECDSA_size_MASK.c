
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned char* data; int type; } ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef TYPE_1__ ASN1_INTEGER ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *) ;

int FUNC_4(const EC_KEY *VAR_2)
{
    int VAR_3, VAR_4;
    ASN1_INTEGER VAR_5;
    unsigned char VAR_6[4];
    const EC_GROUP *VAR_7;

    if (VAR_2 == ((void*)0))
        return 0;
    VAR_7 = FUNC_2(VAR_2);
    if (VAR_7 == ((void*)0))
        return 0;

    VAR_4 = FUNC_1(VAR_7);
    if (VAR_4 == 0)
        return 0;
    VAR_5.length = (VAR_4 + 7) / 8;
    VAR_5.data = VAR_6;
    VAR_5.type = VAR_0;

    VAR_6[0] = 0xff;

    VAR_4 = FUNC_3(&VAR_5, ((void*)0));
    VAR_4 += VAR_4;
    VAR_3 = FUNC_0(1, VAR_4, VAR_1);
    return VAR_3;
}
