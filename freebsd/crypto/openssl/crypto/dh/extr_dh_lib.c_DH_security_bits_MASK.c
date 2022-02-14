
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ p; scalar_t__ q; } ;
typedef TYPE_1__ DH ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;

int FUNC_2(const DH *VAR_0)
{
    int VAR_1;
    if (VAR_0->q)
        VAR_1 = FUNC_0(VAR_0->q);
    else if (VAR_0->length)
        VAR_1 = VAR_0->length;
    else
        VAR_1 = -1;
    return FUNC_1(FUNC_0(VAR_0->p), VAR_1);
}
