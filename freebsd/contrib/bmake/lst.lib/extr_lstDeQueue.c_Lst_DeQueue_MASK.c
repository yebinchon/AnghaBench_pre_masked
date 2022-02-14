
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* datum; } ;
typedef int Lst ;
typedef TYPE_1__* ListNode ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

void *
FUNC_2(Lst VAR_1)
{
    void *VAR_2;
    ListNode VAR_3;

    VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 == ((void*)0)) {
 return ((void*)0);
    }

    VAR_2 = VAR_3->datum;
    if (FUNC_1(VAR_1, VAR_3) == VAR_0) {
 return ((void*)0);
    } else {
 return (VAR_2);
    }
}
