
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {struct target_ops* to_sections; int to_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct target_ops*) ;

void
FUNC_2 (struct target_ops *VAR_0, int VAR_1)
{
  FUNC_0 (VAR_0->to_data);
  FUNC_1 (VAR_0->to_sections);
  FUNC_1 (VAR_0);
}
