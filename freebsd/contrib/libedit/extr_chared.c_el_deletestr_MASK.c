
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * buffer; int * cursor; } ;
struct TYPE_6__ {TYPE_1__ el_line; } ;
typedef TYPE_2__ EditLine ;


 int FUNC_0 (TYPE_2__*,int) ;

void
FUNC_1(EditLine *VAR_0, int VAR_1)
{
 if (VAR_1 <= 0)
  return;

 if (VAR_0->el_line.cursor < &VAR_0->el_line.buffer[VAR_1])
  return;

 FUNC_0(VAR_0, VAR_1);
 VAR_0->el_line.cursor -= VAR_1;
 if (VAR_0->el_line.cursor < VAR_0->el_line.buffer)
  VAR_0->el_line.cursor = VAR_0->el_line.buffer;
}
