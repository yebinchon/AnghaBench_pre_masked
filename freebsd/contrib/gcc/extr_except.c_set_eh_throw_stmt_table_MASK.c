
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htab {int dummy; } ;
struct function {TYPE_1__* eh; } ;
struct TYPE_2__ {struct htab* throw_stmt_table; } ;



void
FUNC_0 (struct function *VAR_0, struct htab *VAR_1)
{
  VAR_0->eh->throw_stmt_table = VAR_1;
}
