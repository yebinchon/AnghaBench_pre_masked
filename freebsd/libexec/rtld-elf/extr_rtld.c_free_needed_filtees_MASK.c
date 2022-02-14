
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int * obj; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Needed_Entry ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(Needed_Entry *VAR_0, RtldLockState *VAR_1)
{
    Needed_Entry *VAR_2, *VAR_3;

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
 if (VAR_2->obj != ((void*)0)) {
     FUNC_0(VAR_2->obj, VAR_1);
     VAR_2->obj = ((void*)0);
 }
    }
    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
 VAR_3 = VAR_2->next;
 FUNC_1(VAR_2);
    }
}
