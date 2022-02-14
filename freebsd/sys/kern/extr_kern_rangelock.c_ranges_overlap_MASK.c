
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_q_entry {scalar_t__ rl_q_start; scalar_t__ rl_q_end; } ;



__attribute__((used)) static int
FUNC_0(const struct rl_q_entry *VAR_0,
    const struct rl_q_entry *VAR_1)
{

 if (VAR_0->rl_q_start < VAR_1->rl_q_end && VAR_0->rl_q_end > VAR_1->rl_q_start)
  return (1);
 return (0);
}
