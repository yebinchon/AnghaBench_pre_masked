
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct df {int dummy; } ;
struct TYPE_4__ {int reg_chain; } ;
struct TYPE_3__ {int reg_chain; } ;
typedef int FILE ;


 TYPE_2__* FUNC_0 (struct df*,unsigned int) ;
 TYPE_1__* FUNC_1 (struct df*,unsigned int) ;
 int FUNC_2 (struct df*,int ,int *) ;
 int FUNC_3 (int *,char*,...) ;

void
FUNC_4 (struct df *VAR_0, unsigned int VAR_1, FILE *VAR_2)
{
  FUNC_3 (VAR_2, "reg %d defs ", VAR_1);
  FUNC_2 (VAR_0, FUNC_0 (VAR_0, VAR_1)->reg_chain, VAR_2);
  FUNC_3 (VAR_2, " uses ");
  FUNC_2 (VAR_0, FUNC_1 (VAR_0, VAR_1)->reg_chain, VAR_2);
  FUNC_3 (VAR_2, "\n");
}
