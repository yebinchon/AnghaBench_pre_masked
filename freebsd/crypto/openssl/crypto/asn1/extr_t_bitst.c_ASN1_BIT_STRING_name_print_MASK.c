
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lname; int bitnum; } ;
typedef TYPE_1__ BIT_STRING_BITNAME ;
typedef int BIO ;
typedef int ASN1_BIT_STRING ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int,char*) ;
 int FUNC_2 (int *,char*) ;

int FUNC_3(BIO *VAR_0, ASN1_BIT_STRING *VAR_1,
                               BIT_STRING_BITNAME *VAR_2, int VAR_3)
{
    BIT_STRING_BITNAME *VAR_4;
    char VAR_5 = 1;
    FUNC_1(VAR_0, "%*s", VAR_3, "");
    for (VAR_4 = VAR_2; VAR_4->lname; VAR_4++) {
        if (FUNC_0(VAR_1, VAR_4->bitnum)) {
            if (!VAR_5)
                FUNC_2(VAR_0, ", ");
            FUNC_2(VAR_0, VAR_4->lname);
            VAR_5 = 0;
        }
    }
    FUNC_2(VAR_0, "\n");
    return 1;
}
