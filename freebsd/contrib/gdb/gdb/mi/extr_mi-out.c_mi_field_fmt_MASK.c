
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct ui_out {int dummy; } ;
struct TYPE_3__ {int buffer; scalar_t__ suppress_output; } ;
typedef TYPE_1__ mi_out_data ;
typedef enum ui_align { ____Placeholder_ui_align } ui_align ;


 int FUNC_0 (struct ui_out*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__* FUNC_3 (struct ui_out*) ;
 int FUNC_4 (int ,char const*,int ) ;

void
FUNC_5 (struct ui_out *VAR_0, int VAR_1,
       int VAR_2, enum ui_align VAR_3,
       const char *VAR_4,
       const char *VAR_5,
       va_list VAR_6)
{
  mi_out_data *VAR_7 = FUNC_3 (VAR_0);
  if (VAR_7->suppress_output)
    return;
  FUNC_0 (VAR_0);
  if (VAR_4)
    FUNC_1 (VAR_7->buffer, "%s=\"", VAR_4);
  else
    FUNC_2 ("\"", VAR_7->buffer);
  FUNC_4 (VAR_7->buffer, VAR_5, VAR_6);
  FUNC_2 ("\"", VAR_7->buffer);
}
