
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * obj; struct TYPE_3__* next; } ;
typedef int Objlist ;
typedef TYPE_1__ Needed_Entry ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1(Needed_Entry *VAR_0, Objlist *VAR_1)
{

    if (VAR_0->next != ((void*)0))
 FUNC_1(VAR_0->next, VAR_1);


    if (VAR_0->obj != ((void*)0))
 FUNC_0(VAR_0->obj, VAR_0->obj, VAR_1);
}
