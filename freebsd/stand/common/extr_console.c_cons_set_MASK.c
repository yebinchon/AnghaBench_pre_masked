
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_var {int ev_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (int ,int,void const*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct env_var *VAR_2, int VAR_3, const void *VAR_4)
{
    int VAR_5;

    if ((VAR_4 == ((void*)0)) || (FUNC_1(VAR_4) == 0)) {




 return (VAR_0);
    }

    VAR_5 = FUNC_0(VAR_4);
    if (VAR_5 != VAR_0)
 return (VAR_5);

    FUNC_2(VAR_2->ev_name, VAR_3 | VAR_1, VAR_4, ((void*)0), ((void*)0));
    return (VAR_0);
}
