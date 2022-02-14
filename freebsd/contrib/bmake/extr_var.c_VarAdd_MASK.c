
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; scalar_t__ flags; int val; } ;
typedef TYPE_1__ Var ;
struct TYPE_11__ {int flags; char* name; int context; } ;
struct TYPE_10__ {int name; } ;
typedef TYPE_2__ Hash_Entry ;
typedef TYPE_3__ GNode ;


 int FUNC_0 (int *,int,char const*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,char*,char const*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_3, const char *VAR_4, GNode *VAR_5)
{
    Var *VAR_6;
    int VAR_7;
    Hash_Entry *VAR_8;

    VAR_6 = FUNC_5(sizeof(Var));

    VAR_7 = VAR_4 ? FUNC_7(VAR_4) : 0;
    FUNC_1(&VAR_6->val, VAR_7+1);
    FUNC_0(&VAR_6->val, VAR_7, VAR_4);

    VAR_6->flags = 0;

    VAR_8 = FUNC_3(&VAR_5->context, VAR_3, ((void*)0));
    FUNC_4(VAR_8, VAR_6);
    VAR_6->name = VAR_8->name;
    if (FUNC_2(VAR_1) && (VAR_5->flags & VAR_0) == 0) {
 FUNC_6(VAR_2, "%s:%s = %s\n", VAR_5->name, VAR_3, VAR_4);
    }
}
