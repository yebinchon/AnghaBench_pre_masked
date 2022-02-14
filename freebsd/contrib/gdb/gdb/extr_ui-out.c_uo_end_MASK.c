
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
typedef enum ui_out_type { ____Placeholder_ui_out_type } ui_out_type ;
struct TYPE_2__ {int (* end ) (struct ui_out*,int,int) ;} ;


 int FUNC_0 (struct ui_out*,int,int) ;

void
FUNC_1 (struct ui_out *VAR_0,
 enum ui_out_type VAR_1,
 int VAR_2)
{
  if (VAR_0->impl->end == ((void*)0))
    return;
  VAR_0->impl->end (VAR_0, VAR_1, VAR_2);
}
