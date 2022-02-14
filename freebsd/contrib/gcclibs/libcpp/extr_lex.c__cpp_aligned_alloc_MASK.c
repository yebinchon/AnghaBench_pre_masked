
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* a_buff; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_7__ {unsigned char* cur; unsigned char* limit; struct TYPE_7__* next; } ;
typedef TYPE_2__ _cpp_buff ;


 TYPE_2__* FUNC_0 (TYPE_1__*,size_t) ;

unsigned char *
FUNC_1 (cpp_reader *VAR_0, size_t VAR_1)
{
  _cpp_buff *VAR_2 = VAR_0->a_buff;
  unsigned char *VAR_3 = VAR_2->cur;

  if (VAR_1 > (size_t) (VAR_2->limit - VAR_3))
    {
      VAR_2 = FUNC_0 (VAR_0, VAR_1);
      VAR_2->next = VAR_0->a_buff;
      VAR_0->a_buff = VAR_2;
      VAR_3 = VAR_2->cur;
    }

  VAR_2->cur = VAR_3 + VAR_1;
  return VAR_3;
}
