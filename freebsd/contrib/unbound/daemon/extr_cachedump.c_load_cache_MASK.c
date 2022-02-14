
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scratch_buffer; } ;
struct worker {TYPE_1__ env; } ;
typedef int RES ;


 int FUNC_0 (int *,struct worker*) ;
 int FUNC_1 (int *,struct worker*) ;
 int FUNC_2 (int *,int ,char*) ;

int
FUNC_3(RES* VAR_0, struct worker* VAR_1)
{
 if(!FUNC_1(VAR_0, VAR_1))
  return 0;
 if(!FUNC_0(VAR_0, VAR_1))
  return 0;
 return FUNC_2(VAR_0, VAR_1->env.scratch_buffer, "EOF");
}
