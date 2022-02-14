
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ pretty_printer ;
struct TYPE_4__ {int line_length; int obstack; } ;


 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static inline void
FUNC_1 (pretty_printer *VAR_0, const char *VAR_1, int VAR_2)
{
  FUNC_0 (VAR_0->buffer->obstack, VAR_1, VAR_2);
  VAR_0->buffer->line_length += VAR_2;
}
