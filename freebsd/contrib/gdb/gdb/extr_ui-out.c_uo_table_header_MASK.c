
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_out {TYPE_1__* impl; } ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;
struct TYPE_2__ {int (* table_header ) (struct ui_out*,int,int,char const*,char const*) ;} ;


 int FUNC_0 (struct ui_out*,int,int,char const*,char const*) ;

void
FUNC_1 (struct ui_out *VAR_0, int VAR_1, enum ui_align VAR_2,
   const char *VAR_3,
   const char *VAR_4)
{
  if (!VAR_0->impl->table_header)
    return;
  VAR_0->impl->table_header (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
