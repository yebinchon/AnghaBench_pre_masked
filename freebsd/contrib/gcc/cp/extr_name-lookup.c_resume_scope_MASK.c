
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_binding_level {int binding_depth; struct cp_binding_level* level_chain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cp_binding_level* VAR_3 ;
 int FUNC_0 (struct cp_binding_level*,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_3 (struct cp_binding_level* VAR_6)
{


  FUNC_1 (!VAR_2);

  FUNC_1 (VAR_6->level_chain == VAR_3);
  VAR_3 = VAR_6;
  if (VAR_0)
    {
      VAR_6->binding_depth = VAR_1;
      FUNC_2 (VAR_1);
      FUNC_0 (VAR_6, VAR_4, "resume");
      VAR_5 = 0;
      VAR_1++;
    }
}
