
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int needed; scalar_t__ marker; } ;
typedef TYPE_1__ Obj_Entry ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(Obj_Entry *VAR_1, int VAR_2)
{
    Obj_Entry *VAR_3;

    for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = FUNC_0(VAR_3, VAR_0)) {
 if (VAR_3->marker)
     continue;
 if (FUNC_1(VAR_3, VAR_3->needed, VAR_2) == -1)
     return (-1);
    }
    return (0);
}
