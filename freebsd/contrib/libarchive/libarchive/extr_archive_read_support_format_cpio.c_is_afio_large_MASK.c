
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (char const*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_10, size_t VAR_11)
{
 if (VAR_11 < VAR_4)
  return (0);
 if (VAR_10[VAR_5] != 'm'
     || VAR_10[VAR_7] != 'n'
     || VAR_10[VAR_9] != 's'
     || VAR_10[VAR_1] != ':')
  return (0);
 if (!FUNC_0(VAR_10 + VAR_0, VAR_5 - VAR_0))
  return (0);
 if (!FUNC_0(VAR_10 + VAR_6, VAR_7 - VAR_6))
  return (0);
 if (!FUNC_0(VAR_10 + VAR_8, VAR_9 - VAR_8))
  return (0);
 if (!FUNC_0(VAR_10 + VAR_2, VAR_3))
  return (0);
 return (1);
}
