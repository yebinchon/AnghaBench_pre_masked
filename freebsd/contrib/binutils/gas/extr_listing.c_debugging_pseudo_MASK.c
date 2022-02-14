
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* next; scalar_t__ debugging; } ;
typedef TYPE_2__ list_info_type ;
struct TYPE_4__ {scalar_t__ debugging; } ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2 (list_info_type *VAR_0, const char *VAR_1)
{
  static int VAR_2;
  int VAR_3;

  if (VAR_0->debugging)
    {
      VAR_2 = 1;
      return 1;
    }

  VAR_3 = VAR_2;
  VAR_2 = 0;

  while (FUNC_0 (*VAR_1))
    VAR_1++;

  if (*VAR_1 != '.')
    {
      return 0;
    }

  VAR_1++;

  if (FUNC_1 (VAR_1, "def", 3) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "val", 3) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "scl", 3) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "line", 4) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "endef", 5) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "ln", 2) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "type", 4) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "size", 4) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "dim", 3) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "tag", 3) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "stabs", 5) == 0)
    return 1;
  if (FUNC_1 (VAR_1, "stabn", 5) == 0)
    return 1;

  return 0;
}
