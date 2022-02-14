
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  const char *VAR_11 = VAR_8;
  const char *VAR_12 = VAR_7;

  if ((VAR_9 & ~VAR_2) == 0)
    {
      if (VAR_10)
 VAR_9 |= VAR_6 | VAR_3 | VAR_1;
      else if (FUNC_3 (VAR_11, "aix", 3) == 0
        && VAR_11[3] >= '4' && VAR_11[3] <= '9')
 VAR_9 |= VAR_4 | VAR_0;
      else if (FUNC_3 (VAR_11, "aix3", 4) == 0)
 VAR_9 |= VAR_5 | VAR_0;
      else if (FUNC_2 (VAR_12, "rs6000") == 0)
 VAR_9 |= VAR_5 | VAR_0;
      else if (FUNC_3 (VAR_12, "powerpc", 7) == 0)
 VAR_9 |= VAR_6 | VAR_3 | VAR_0;
      else
 FUNC_1 (FUNC_0("Unknown default cpu = %s, os = %s"),
    VAR_12, VAR_11);
    }
}
