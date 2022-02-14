
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int enc; scalar_t__ modified; } ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;
typedef TYPE_1__ ASN1_ENCODING ;


 TYPE_1__* FUNC_0 (int **,int const*) ;
 int FUNC_1 (unsigned char*,int ,int) ;

int FUNC_2(int *VAR_0, unsigned char **VAR_1, ASN1_VALUE **VAR_2,
                     const ASN1_ITEM *VAR_3)
{
    ASN1_ENCODING *VAR_4;
    VAR_4 = FUNC_0(VAR_2, VAR_3);
    if (!VAR_4 || VAR_4->modified)
        return 0;
    if (VAR_1) {
        FUNC_1(*VAR_1, VAR_4->enc, VAR_4->len);
        *VAR_1 += VAR_4->len;
    }
    if (VAR_0)
        *VAR_0 = VAR_4->len;
    return 1;
}
