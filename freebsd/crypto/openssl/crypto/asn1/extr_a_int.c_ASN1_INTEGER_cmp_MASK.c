
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
typedef TYPE_1__ ASN1_INTEGER ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int VAR_0 ;

int FUNC_1(const ASN1_INTEGER *VAR_1, const ASN1_INTEGER *VAR_2)
{
    int VAR_3, VAR_4;

    VAR_3 = VAR_1->type & VAR_0;
    if (VAR_3 != (VAR_2->type & VAR_0)) {
        if (VAR_3)
            return -1;
        else
            return 1;
    }

    VAR_4 = FUNC_0(VAR_1, VAR_2);

    if (VAR_3)
        return -VAR_4;
    else
        return VAR_4;
}
