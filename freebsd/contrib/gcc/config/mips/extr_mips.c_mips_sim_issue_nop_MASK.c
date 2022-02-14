
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_sim {scalar_t__ insns_left; } ;


 int FUNC_0 (struct mips_sim*) ;

__attribute__((used)) static void
FUNC_1 (struct mips_sim *VAR_0)
{
  if (VAR_0->insns_left == 0)
    FUNC_0 (VAR_0);
  VAR_0->insns_left--;
}
