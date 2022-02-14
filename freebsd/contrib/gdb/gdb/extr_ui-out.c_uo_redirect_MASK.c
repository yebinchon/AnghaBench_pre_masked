
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
struct ui_file {int dummy; } ;
struct TYPE_2__ {int (* redirect ) (struct ui_out*,struct ui_file*) ;} ;


 int FUNC_0 (struct ui_out*,struct ui_file*) ;

int
FUNC_1 (struct ui_out *VAR_0, struct ui_file *VAR_1)
{
  if (!VAR_0->impl->redirect)
    return -1;
  VAR_0->impl->redirect (VAR_0, VAR_1);
  return 0;
}
