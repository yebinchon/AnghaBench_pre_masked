
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursor; scalar_t__ buffer; scalar_t__ lastchar; } ;
struct TYPE_5__ {TYPE_1__ el_line; } ;
typedef TYPE_2__ EditLine ;



int
FUNC_0(EditLine *VAR_0, int VAR_1)
{
 if (VAR_1 == 0)
  goto out;

 VAR_0->el_line.cursor += VAR_1;

 if (VAR_0->el_line.cursor < VAR_0->el_line.buffer)
  VAR_0->el_line.cursor = VAR_0->el_line.buffer;
 if (VAR_0->el_line.cursor > VAR_0->el_line.lastchar)
  VAR_0->el_line.cursor = VAR_0->el_line.lastchar;
out:
 return (int)(VAR_0->el_line.cursor - VAR_0->el_line.buffer);
}
