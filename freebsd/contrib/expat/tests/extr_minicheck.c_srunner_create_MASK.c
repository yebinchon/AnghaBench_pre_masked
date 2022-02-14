
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * suite; } ;
typedef int Suite ;
typedef TYPE_1__ SRunner ;


 TYPE_1__* FUNC_0 (int,int) ;

SRunner *
FUNC_1(Suite *VAR_0)
{
    SRunner *VAR_1 = FUNC_0(1, sizeof(SRunner));
    if (VAR_1 != ((void*)0)) {
        VAR_1->suite = VAR_0;
    }
    return VAR_1;
}
