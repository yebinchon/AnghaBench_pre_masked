
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {int r_rflags; } ;
typedef int register_t ;



int
FUNC_0(struct reg *VAR_0, int VAR_1)
{
 register_t VAR_2;

 VAR_2 = VAR_0->r_rflags;
 if (VAR_1)
  VAR_0->r_rflags |= 0x0100;
 else
  VAR_0->r_rflags &= ~0x0100;
 return (VAR_2 != VAR_0->r_rflags);
}
