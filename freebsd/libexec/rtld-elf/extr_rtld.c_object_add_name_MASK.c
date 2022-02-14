
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int names; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Name_Entry ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(Obj_Entry *VAR_1, const char *VAR_2)
{
    Name_Entry *VAR_3;
    size_t VAR_4;

    VAR_4 = FUNC_3(VAR_2);
    VAR_3 = FUNC_1(sizeof(Name_Entry) + VAR_4);

    if (VAR_3 != ((void*)0)) {
 FUNC_2(VAR_3->name, VAR_2);
 FUNC_0(&VAR_1->names, VAR_3, VAR_0);
    }
}
