
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int (* to_attach ) (char*,int) ;} ;


 struct target_ops* FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;

void
FUNC_2 (char *VAR_0, int VAR_1)
{
  struct target_ops *VAR_2;

  VAR_2 = FUNC_0 ("attach");
  (VAR_2->to_attach) (VAR_0, VAR_1);
  return;
}
