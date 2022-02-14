
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ ASN1_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int,char*) ;
 int VAR_0 ;
 int FUNC_6 (int ,unsigned char*,int) ;

__attribute__((used)) static ASN1_INTEGER *FUNC_7(int VAR_1)
{
    unsigned char VAR_2[20];
    ASN1_INTEGER *VAR_3 = ((void*)0);
    int VAR_4 = (VAR_1 - 1) / 8 + 1;
    int VAR_5;

    if (VAR_4 > (int)sizeof(VAR_2))
        goto err;
    if (FUNC_4(VAR_2, VAR_4) <= 0)
        goto err;


    for (VAR_5 = 0; VAR_5 < VAR_4 && !VAR_2[VAR_5]; ++VAR_5)
        continue;
    if ((VAR_3 = FUNC_1()) == ((void*)0))
        goto err;
    FUNC_3(VAR_3->data);
    VAR_3->length = VAR_4 - VAR_5;
    VAR_3->data = FUNC_5(VAR_3->length + 1, "nonce buffer");
    FUNC_6(VAR_3->data, VAR_2 + VAR_5, VAR_3->length);
    return VAR_3;

 err:
    FUNC_2(VAR_0, "could not create nonce\n");
    FUNC_0(VAR_3);
    return ((void*)0);
}
