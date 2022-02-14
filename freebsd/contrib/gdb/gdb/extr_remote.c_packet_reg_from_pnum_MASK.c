
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {struct packet_reg* regs; } ;
struct packet_reg {scalar_t__ pnum; } ;
typedef scalar_t__ LONGEST ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct packet_reg *
FUNC_0 (struct remote_state *VAR_2, LONGEST VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1 + VAR_0; VAR_4++)
    {
      struct packet_reg *VAR_5 = &VAR_2->regs[VAR_4];
      if (VAR_5->pnum == VAR_3)
 return VAR_5;
    }
  return ((void*)0);
}
