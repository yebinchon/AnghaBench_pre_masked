
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_devdesc {int dummy; } ;
struct env_var {int ev_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,void const*,int *,int *) ;
 int FUNC_1 (struct i386_devdesc*) ;
 int FUNC_2 (struct i386_devdesc**,void const*,int *) ;

int
FUNC_3(struct env_var *VAR_1, int VAR_2, const void *VAR_3)
{
    struct i386_devdesc *VAR_4;
    int VAR_5;

    if ((VAR_5 = FUNC_2(&VAR_4, VAR_3, ((void*)0))) != 0)
 return(VAR_5);
    FUNC_1(VAR_4);
    FUNC_0(VAR_1->ev_name, VAR_2 | VAR_0, VAR_3, ((void*)0), ((void*)0));
    return(0);
}
