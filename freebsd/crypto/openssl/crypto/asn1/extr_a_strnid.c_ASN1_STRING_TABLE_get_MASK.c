
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nid; } ;
typedef TYPE_1__ ASN1_STRING_TABLE ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

ASN1_STRING_TABLE *FUNC_4(int VAR_2)
{
    int VAR_3;
    ASN1_STRING_TABLE VAR_4;

    VAR_4.nid = VAR_2;
    if (VAR_0) {
        VAR_3 = FUNC_2(VAR_0, &VAR_4);
        if (VAR_3 >= 0)
            return FUNC_3(VAR_0, VAR_3);
    }
    return FUNC_0(&VAR_4, VAR_1, FUNC_1(VAR_1));
}
