
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ _uw ;
struct TYPE_4__ {int fnoffset; } ;
typedef TYPE_1__ const __EIT_entry ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static const __EIT_entry *
FUNC_1 (const __EIT_entry * VAR_0, int VAR_1, _uw VAR_2)
{
  _uw VAR_3;
  _uw VAR_4;
  int VAR_5, VAR_6, VAR_7;

  if (VAR_1 == 0)
    return (__EIT_entry *) 0;

  VAR_6 = 0;
  VAR_7 = VAR_1 - 1;

  while (1)
    {
      VAR_5 = (VAR_6 + VAR_7) / 2;
      VAR_4 = FUNC_0 (&VAR_0[VAR_5].fnoffset);
      if (VAR_5 != VAR_1 - 1)
 VAR_3 = FUNC_0 (&VAR_0[VAR_5 + 1].fnoffset) - 1;
      else
 VAR_3 = (_uw)0 - 1;

      if (VAR_2 < VAR_4)
 {
   if (VAR_5 == VAR_6)
     return (__EIT_entry *) 0;
   VAR_7 = VAR_5 - 1;
 }
      else if (VAR_2 <= VAR_3)
 return &VAR_0[VAR_5];
      else
 VAR_6 = VAR_5 + 1;
    }
}
