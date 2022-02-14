
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_binding_level {int binding_depth; struct cp_binding_level* level_chain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cp_binding_level* VAR_2 ;
 int FUNC_0 (struct cp_binding_level*,int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void
FUNC_2 (struct cp_binding_level *VAR_6)
{

  VAR_6->level_chain = VAR_2;
  VAR_2 = VAR_6;
  VAR_5 = 0;

  if (VAR_0)
    {
      VAR_6->binding_depth = VAR_1;
      FUNC_1 (VAR_1);
      FUNC_0 (VAR_6, VAR_3, "push");
      VAR_4 = 0;
      VAR_1++;
    }
}
