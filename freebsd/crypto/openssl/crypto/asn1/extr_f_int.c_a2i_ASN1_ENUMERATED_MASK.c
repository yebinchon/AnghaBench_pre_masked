
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_ENUMERATED ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,char*,int) ;

int FUNC_1(BIO *VAR_2, ASN1_ENUMERATED *VAR_3, char *VAR_4, int VAR_5)
{
    int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 == 1)
        VAR_3->type = VAR_0 | (VAR_3->type & VAR_1);
    return VAR_6;
}
