
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int
FUNC_0 (void)
{
  unsigned int VAR_7;
  int VAR_8;
  int VAR_9;

  VAR_9 = 0;

  if (VAR_2 && VAR_3)
    {
      VAR_8 = 0;
      for (VAR_7 = VAR_0;
    VAR_7 < VAR_1;
    VAR_7 += 2)
 {
   if ((!VAR_6[VAR_7] || VAR_5[VAR_7])
       && (!VAR_6[VAR_7 + 1] || VAR_5[VAR_7 + 1]))
     {
       if (VAR_8 > 0)
  {

    if (VAR_8 == 2 && !VAR_4)
      VAR_8++;
    VAR_9 += VAR_8 * 8 + 4;
  }
       VAR_8 = 0;
     }
   else
     VAR_8++;
 }
      if (VAR_8 > 0)
 {
   if (VAR_8 == 2 && !VAR_4)
     VAR_8++;
   VAR_9 += VAR_8 * 8 + 4;
 }
    }
  return VAR_9;
}
