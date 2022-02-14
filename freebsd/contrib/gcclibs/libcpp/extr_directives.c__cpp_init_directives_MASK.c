
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cpp_reader ;
struct TYPE_4__ {int is_directive; unsigned int directive_index; } ;
typedef TYPE_1__ cpp_hashnode ;
struct TYPE_5__ {int length; int name; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int ) ;
 TYPE_2__* VAR_1 ;

void
FUNC_1 (cpp_reader *VAR_2)
{
  unsigned int VAR_3;
  cpp_hashnode *VAR_4;

  for (VAR_3 = 0; VAR_3 < (unsigned int) VAR_0; VAR_3++)
    {
      VAR_4 = FUNC_0 (VAR_2, VAR_1[VAR_3].name, VAR_1[VAR_3].length);
      VAR_4->is_directive = 1;
      VAR_4->directive_index = VAR_3;
    }
}
