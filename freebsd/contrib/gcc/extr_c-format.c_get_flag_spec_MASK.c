
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flag_char; scalar_t__ predicate; } ;
typedef TYPE_1__ format_flag_spec ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;

__attribute__((used)) static const format_flag_spec *
FUNC_2 (const format_flag_spec *VAR_0, int VAR_1, const char *VAR_2)
{
  int VAR_3;
  for (VAR_3 = 0; VAR_0[VAR_3].flag_char != 0; VAR_3++)
    {
      if (VAR_0[VAR_3].flag_char != VAR_1)
 continue;
      if (VAR_2 != ((void*)0))
 {
   if (VAR_0[VAR_3].predicate != 0
       && FUNC_1 (VAR_2, VAR_0[VAR_3].predicate) != 0)
     return &VAR_0[VAR_3];
 }
      else if (VAR_0[VAR_3].predicate == 0)
 return &VAR_0[VAR_3];
    }
  FUNC_0 (VAR_2);
  return ((void*)0);
}
