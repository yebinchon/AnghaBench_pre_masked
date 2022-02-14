
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
struct TYPE_3__ {int indexed; int * values; scalar_t__ length; int * tail; int head; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static value_set_t
FUNC_1 (bool VAR_1)
{
  value_set_t VAR_2;
  VAR_2 = (value_set_t) FUNC_0 (VAR_0);
  VAR_2->head = *(VAR_2->tail = ((void*)0));
  VAR_2->length = 0;
  VAR_2->indexed = VAR_1;
  VAR_2->values = ((void*)0);
  return VAR_2;
}
