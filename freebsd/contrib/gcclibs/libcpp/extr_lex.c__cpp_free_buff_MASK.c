
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; struct TYPE_3__* next; } ;
typedef TYPE_1__ _cpp_buff ;


 int FUNC_0 (int ) ;

void
FUNC_1 (_cpp_buff *VAR_0)
{
  _cpp_buff *VAR_1;

  for (; VAR_0; VAR_0 = VAR_1)
    {
      VAR_1 = VAR_0->next;
      FUNC_0 (VAR_0->base);
    }
}
