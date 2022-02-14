
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {struct packet_reg* regs; } ;
struct packet_reg {long regnum; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static struct packet_reg *
FUNC_1 (struct remote_state *VAR_2, long VAR_3)
{
  if (VAR_3 < 0 && VAR_3 >= VAR_1 + VAR_0)
    return ((void*)0);
  else
    {
      struct packet_reg *VAR_4 = &VAR_2->regs[VAR_3];
      FUNC_0 (VAR_4->regnum == VAR_3);
      return VAR_4;
    }
}
