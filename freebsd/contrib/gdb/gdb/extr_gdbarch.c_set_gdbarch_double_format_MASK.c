
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {struct floatformat const* double_format; } ;
struct floatformat {int dummy; } ;



void
FUNC_0 (struct gdbarch *VAR_0,
                           const struct floatformat * VAR_1)
{
  VAR_0->double_format = VAR_1;
}
