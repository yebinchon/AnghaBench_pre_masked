
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct ui_out {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* message ) (struct ui_out*,int,char const*,int ) ;} ;


 int FUNC_0 (struct ui_out*,int,char const*,int ) ;

void
FUNC_1 (struct ui_out *VAR_0, int VAR_1,
     const char *VAR_2,
     va_list VAR_3)
{
  if (!VAR_0->impl->message)
    return;
  VAR_0->impl->message (VAR_0, VAR_1, VAR_2, VAR_3);
}
