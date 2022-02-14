
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* wrap_hint ) (struct ui_out*,char*) ;} ;


 int FUNC_0 (struct ui_out*,char*) ;

void
FUNC_1 (struct ui_out *VAR_0, char *VAR_1)
{
  if (!VAR_0->impl->wrap_hint)
    return;
  VAR_0->impl->wrap_hint (VAR_0, VAR_1);
}
