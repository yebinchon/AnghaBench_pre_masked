
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int val; struct TYPE_4__* name; } ;
typedef TYPE_1__ Var ;
typedef int Boolean ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static Boolean
FUNC_2(Var *VAR_3, Boolean VAR_4)
{
    if ((VAR_3->flags & VAR_2) == 0)
 return VAR_0;
    FUNC_1(VAR_3->name);
    FUNC_0(&VAR_3->val, VAR_4);
    FUNC_1(VAR_3);
    return VAR_1;
}
