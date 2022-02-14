
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_7__ {int cur; int base; struct TYPE_7__* next; } ;
typedef TYPE_1__ _cpp_buff ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ,int ,int ) ;

_cpp_buff *
FUNC_4 (cpp_reader *VAR_0, _cpp_buff *VAR_1, size_t VAR_2)
{
  size_t VAR_3 = FUNC_1 (VAR_1, VAR_2);
  _cpp_buff *VAR_4 = FUNC_2 (VAR_0, VAR_3);

  VAR_1->next = VAR_4;
  FUNC_3 (VAR_4->base, VAR_1->cur, FUNC_0 (VAR_1));
  return VAR_4;
}
