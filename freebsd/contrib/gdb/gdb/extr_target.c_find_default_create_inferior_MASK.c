
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int (* to_create_inferior ) (char*,char*,char**) ;} ;


 struct target_ops* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char**) ;

void
FUNC_2 (char *VAR_0, char *VAR_1, char **VAR_2)
{
  struct target_ops *VAR_3;

  VAR_3 = FUNC_0 ("run");
  (VAR_3->to_create_inferior) (VAR_0, VAR_1, VAR_2);
  return;
}
