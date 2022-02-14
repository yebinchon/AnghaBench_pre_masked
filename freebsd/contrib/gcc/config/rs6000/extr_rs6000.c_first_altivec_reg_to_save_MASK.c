
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;

__attribute__((used)) static int
FUNC_0 (void)
{
  int VAR_8;


  if (! VAR_5)
    return VAR_3 + 1;




  if (VAR_1 == VAR_0 && VAR_6
      && ! VAR_4)
    return VAR_2 + 20;


  for (VAR_8 = VAR_2 + 20; VAR_8 <= VAR_3; ++VAR_8)
    if (VAR_7[VAR_8])
      break;

  return VAR_8;
}
