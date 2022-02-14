
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 char** VAR_8 ;
 int FUNC_0 (char const*) ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_1 (int VAR_13, int VAR_14)
{
  const char *VAR_15;

  *VAR_9++ = VAR_10;
  VAR_12 |= (VAR_11 & VAR_1);
  if (VAR_2 == VAR_5)
    {
      if (!(VAR_14 & VAR_0))
 VAR_15 = VAR_7[VAR_13 - VAR_4];
      else
 VAR_15 = VAR_8[VAR_13 - VAR_4];
    }
  else if (VAR_14 & VAR_0)
    VAR_15 = VAR_7[VAR_13 - VAR_4];
  else
    VAR_15 = VAR_6[VAR_13 - VAR_4];
  FUNC_0 (VAR_15);
  *VAR_9++ = VAR_3;
  *VAR_9 = 0;
}
