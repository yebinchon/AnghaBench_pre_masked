
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
struct TYPE_2__ {int opcode; } ;


 int FUNC_0 (struct expression*,struct ui_file*,int) ;
 int FUNC_1 (struct ui_file*,char*,...) ;
 int FUNC_2 (struct expression*,int ) ;

int
FUNC_3 (struct expression *VAR_0, struct ui_file *VAR_1, int VAR_2)
{
  static int VAR_3 = 0;
  int VAR_4;

  FUNC_1 (VAR_1, "\n");
  FUNC_1 (VAR_1, "\t%5d  ", VAR_2);

  for (VAR_4 = 1; VAR_4 <= VAR_3; VAR_4++)
    FUNC_1 (VAR_1, " ");
  VAR_3 += 2;

  FUNC_1 (VAR_1, "%-20s  ", FUNC_2 (VAR_0, VAR_0->elts[VAR_2].opcode));

  VAR_2 = FUNC_0 (VAR_0, VAR_1, VAR_2);

  VAR_3 -= 2;

  return VAR_2;
}
