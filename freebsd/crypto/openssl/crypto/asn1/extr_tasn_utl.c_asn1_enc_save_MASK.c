
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__ modified; int * enc; } ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;
typedef TYPE_1__ ASN1_ENCODING ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int **,int const*) ;
 int FUNC_4 (int *,unsigned char const*,int) ;

int FUNC_5(ASN1_VALUE **VAR_2, const unsigned char *VAR_3, int VAR_4,
                  const ASN1_ITEM *VAR_5)
{
    ASN1_ENCODING *VAR_6;
    VAR_6 = FUNC_3(VAR_2, VAR_5);
    if (!VAR_6)
        return 1;

    FUNC_1(VAR_6->enc);
    if ((VAR_6->enc = FUNC_2(VAR_4)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    FUNC_4(VAR_6->enc, VAR_3, VAR_4);
    VAR_6->len = VAR_4;
    VAR_6->modified = 0;

    return 1;
}
