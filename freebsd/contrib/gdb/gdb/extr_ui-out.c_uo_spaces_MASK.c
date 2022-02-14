
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* spaces ) (struct ui_out*,int) ;} ;


 int FUNC_0 (struct ui_out*,int) ;

void
FUNC_1 (struct ui_out *VAR_0, int VAR_1)
{
  if (!VAR_0->impl->spaces)
    return;
  VAR_0->impl->spaces (VAR_0, VAR_1);
}
