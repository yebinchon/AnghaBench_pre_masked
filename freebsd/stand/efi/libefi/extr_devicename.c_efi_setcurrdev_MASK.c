
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_var {int ev_name; } ;
struct devdesc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct devdesc**,void const*,int *) ;
 int FUNC_1 (int ,int,void const*,int *,int *) ;
 int FUNC_2 (struct devdesc*) ;

int
FUNC_3(struct env_var *VAR_1, int VAR_2, const void *VAR_3)
{
 struct devdesc *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_3, ((void*)0));
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_2(VAR_4);
 FUNC_1(VAR_1->ev_name, VAR_2 | VAR_0, VAR_3, ((void*)0), ((void*)0));
 return (0);
}
