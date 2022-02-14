
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int location_t ;
typedef int diagnostic_t ;
struct TYPE_4__ {char const* format_spec; int * args_ptr; int err_no; } ;
struct TYPE_5__ {scalar_t__ option_index; int kind; int location; TYPE_1__ message; } ;
typedef TYPE_2__ diagnostic_info ;


 int VAR_0 ;

void
FUNC_0 (diagnostic_info *VAR_1, const char *VAR_2,
    va_list *VAR_3, location_t VAR_4,
    diagnostic_t VAR_5)
{
  VAR_1->message.err_no = VAR_0;
  VAR_1->message.args_ptr = VAR_3;
  VAR_1->message.format_spec = VAR_2;
  VAR_1->location = VAR_4;
  VAR_1->kind = VAR_5;
  VAR_1->option_index = 0;
}
