
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* table_body ) (struct ui_out*) ;} ;


 int FUNC_0 (struct ui_out*) ;

void
FUNC_1 (struct ui_out *VAR_0)
{
  if (!VAR_0->impl->table_body)
    return;
  VAR_0->impl->table_body (VAR_0);
}
