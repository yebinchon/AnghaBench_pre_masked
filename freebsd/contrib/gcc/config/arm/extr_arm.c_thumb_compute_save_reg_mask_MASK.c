
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__* VAR_13 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static unsigned long
FUNC_2 (void)
{
  unsigned long VAR_14;
  unsigned VAR_15;

  VAR_14 = 0;
  for (VAR_15 = 0; VAR_15 < 12; VAR_15 ++)
    if (VAR_13[VAR_15] && !VAR_9[VAR_15])
      VAR_14 |= 1 << VAR_15;

  if (VAR_11
      && !VAR_7
      && VAR_8 != VAR_2
      && VAR_10)
    VAR_14 |= 1 << VAR_5;


  if (!VAR_12 && VAR_1 > 0)
    VAR_14 |= 1 << VAR_0;


  if (VAR_14 & 0xff || FUNC_1 ())
    VAR_14 |= (1 << VAR_4);




  if ((VAR_14 & 0xff) == 0
      && ((VAR_14 & 0x0f00) || VAR_6))
    {




      VAR_15 = FUNC_0 (1 << VAR_3);

      if (! VAR_9[VAR_15])
 VAR_14 |= 1 << VAR_15;
    }

  return VAR_14;
}
