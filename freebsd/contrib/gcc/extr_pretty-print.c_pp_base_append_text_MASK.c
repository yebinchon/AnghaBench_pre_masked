
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ pretty_printer ;
struct TYPE_7__ {scalar_t__ line_length; } ;


 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

void
FUNC_3 (pretty_printer *VAR_0, const char *VAR_1, const char *VAR_2)
{

  if (VAR_0->buffer->line_length == 0)
    {
      FUNC_1 (VAR_0);
      if (FUNC_2 (VAR_0))
 while (VAR_1 != VAR_2 && *VAR_1 == ' ')
   ++VAR_1;
    }
  FUNC_0 (VAR_0, VAR_1, VAR_2 - VAR_1);
}
