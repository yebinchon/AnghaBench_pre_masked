
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {short subentries; short name_index; short alternative; } ;
struct TYPE_3__ {short completers; } ;


 TYPE_2__* VAR_0 ;
 short FUNC_0 (char const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static short
FUNC_1 (short VAR_2, short VAR_3, const char *VAR_4)
{
  short VAR_5 = FUNC_0 (VAR_4);

  if (VAR_5 < 0)
    {
      return -1;
    }

  if (VAR_3 == -1)
    {
      VAR_3 = VAR_1[VAR_2].completers;
    }
  else
    {
      VAR_3 = VAR_0[VAR_3].subentries;
    }

  while (VAR_3 != -1)
    {
      if (VAR_0[VAR_3].name_index == VAR_5)
 {
   return VAR_3;
 }
      VAR_3 = VAR_0[VAR_3].alternative;
    }
  return -1;
}
