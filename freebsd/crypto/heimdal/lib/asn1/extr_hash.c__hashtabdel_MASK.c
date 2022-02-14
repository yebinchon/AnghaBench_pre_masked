
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** prev; TYPE_1__* next; struct TYPE_6__* ptr; } ;
struct TYPE_5__ {struct TYPE_5__** prev; } ;
typedef int Hashtab ;
typedef TYPE_2__ Hashentry ;


 TYPE_2__* FUNC_0 (int *,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

int
FUNC_3(Hashtab * VAR_0, void *VAR_1, int VAR_2)
{
    Hashentry *VAR_3;

    FUNC_1(VAR_0 && VAR_1);

    VAR_3 = FUNC_0(VAR_0, VAR_1);
    if (VAR_3) {
 if (VAR_2)
     FUNC_2(VAR_3->ptr);
 if ((*(VAR_3->prev) = VAR_3->next))
     VAR_3->next->prev = VAR_3->prev;
 FUNC_2(VAR_3);
 return 0;
    } else
 return -1;
}
