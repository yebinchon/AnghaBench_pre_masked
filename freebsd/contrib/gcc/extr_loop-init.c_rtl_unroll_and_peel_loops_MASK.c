
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static unsigned int
FUNC_1 (void)
{
  if (VAR_3)
    {
      int VAR_7 = 0;

      if (VAR_4)
 VAR_7 |= VAR_0;
      if (VAR_6)
 VAR_7 |= VAR_1;
      if (VAR_5)
 VAR_7 |= VAR_2;

      FUNC_0 (VAR_3, VAR_7);
    }
  return 0;
}
