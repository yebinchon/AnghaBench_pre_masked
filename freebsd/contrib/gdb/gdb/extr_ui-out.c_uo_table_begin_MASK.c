
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* table_begin ) (struct ui_out*,int,int,char const*) ;} ;


 int FUNC_0 (struct ui_out*,int,int,char const*) ;

void
FUNC_1 (struct ui_out *VAR_0, int VAR_1,
  int VAR_2,
  const char *VAR_3)
{
  if (!VAR_0->impl->table_begin)
    return;
  VAR_0->impl->table_begin (VAR_0, VAR_1, VAR_2, VAR_3);
}
