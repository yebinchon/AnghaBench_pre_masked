
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prevPtr; } ;
typedef TYPE_1__* LstNode ;



LstNode
FUNC_0(LstNode VAR_0)
{
    if (VAR_0 == ((void*)0)) {
 return ((void*)0);
    } else {
 return (VAR_0->prevPtr);
    }
}
