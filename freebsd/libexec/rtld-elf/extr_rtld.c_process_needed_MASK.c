
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ name; TYPE_1__* obj; struct TYPE_8__* next; } ;
struct TYPE_7__ {scalar_t__ strtab; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Needed_Entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__,int,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(Obj_Entry *VAR_3, Needed_Entry *VAR_4, int VAR_5)
{
    Obj_Entry *VAR_6;

    for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
 VAR_6 = VAR_4->obj = FUNC_0(VAR_3->strtab + VAR_4->name, -1, VAR_3,
   VAR_5 & ~VAR_1);
 if (VAR_6 == ((void*)0) && !VAR_2 && (VAR_5 & VAR_0) == 0)
     return (-1);
    }
    return (0);
}
