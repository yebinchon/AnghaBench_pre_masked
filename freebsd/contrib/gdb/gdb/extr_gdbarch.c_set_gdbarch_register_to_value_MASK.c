
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int register_to_value; } ;
typedef int gdbarch_register_to_value_ftype ;



void
FUNC_0 (struct gdbarch *VAR_0,
                               gdbarch_register_to_value_ftype VAR_1)
{
  VAR_0->register_to_value = VAR_1;
}
