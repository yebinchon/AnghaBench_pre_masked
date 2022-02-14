
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int register_bytes_ok; } ;
typedef int gdbarch_register_bytes_ok_ftype ;



void
FUNC_0 (struct gdbarch *VAR_0,
                               gdbarch_register_bytes_ok_ftype VAR_1)
{
  VAR_0->register_bytes_ok = VAR_1;
}
