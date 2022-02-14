
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long minsize; long maxsize; unsigned long mask; unsigned long flags; } ;
typedef TYPE_1__ ASN1_STRING_TABLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2(int VAR_3,
                          long VAR_4, long VAR_5, unsigned long VAR_6,
                          unsigned long VAR_7)
{
    ASN1_STRING_TABLE *VAR_8;

    VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (VAR_4 >= 0)
        VAR_8->minsize = VAR_4;
    if (VAR_5 >= 0)
        VAR_8->maxsize = VAR_5;
    if (VAR_6)
        VAR_8->mask = VAR_6;
    if (VAR_7)
        VAR_8->flags = VAR_2 | VAR_7;
    return 1;
}
