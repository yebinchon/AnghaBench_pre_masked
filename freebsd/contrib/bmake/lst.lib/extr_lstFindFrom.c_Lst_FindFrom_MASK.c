
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void const* datum; struct TYPE_6__* nextPtr; } ;
typedef TYPE_1__* LstNode ;
typedef int Lst ;
typedef TYPE_1__* ListNode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void const*,void const*) ;

LstNode
FUNC_4(Lst VAR_0, LstNode VAR_1, const void *VAR_2,
      int (*VAR_3)(const void *, const void *))
{
    ListNode VAR_4;

    if (!FUNC_2 (VAR_0) || FUNC_0 (VAR_0) || !FUNC_1 (VAR_1, VAR_0)) {
 return ((void*)0);
    }

    VAR_4 = VAR_1;

    do {
 if ((*VAR_3)(VAR_4->datum, VAR_2) == 0)
     return (VAR_4);
 VAR_4 = VAR_4->nextPtr;
    } while (VAR_4 != VAR_1 && VAR_4 != ((void*)0));

    return ((void*)0);
}
