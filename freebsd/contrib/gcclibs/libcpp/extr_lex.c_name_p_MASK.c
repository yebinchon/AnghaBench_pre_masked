
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; int * text; } ;
typedef TYPE_1__ cpp_string ;
typedef int cpp_reader ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (cpp_reader *VAR_0, const cpp_string *VAR_1)
{
  unsigned int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++)
    if (!FUNC_0 (VAR_1->text[VAR_2]))
      return 0;

  return 1;
}
