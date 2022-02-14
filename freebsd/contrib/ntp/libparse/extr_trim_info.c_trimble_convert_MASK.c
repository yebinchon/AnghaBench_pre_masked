
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
typedef TYPE_1__ cmd_info_t ;



cmd_info_t *
FUNC_0(
  unsigned int VAR_0,
  cmd_info_t *VAR_1
  )
{
  int VAR_2;

  for (VAR_2 = 0; VAR_1[VAR_2].cmd != 0xFF; VAR_2++)
    {
      if (VAR_1[VAR_2].cmd == VAR_0)
 return &VAR_1[VAR_2];
    }
  return 0;
}
