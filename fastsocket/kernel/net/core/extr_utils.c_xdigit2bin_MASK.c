
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;

__attribute__((used)) static inline int FUNC_0(char VAR_6, int VAR_7)
{
 if (VAR_6 == VAR_7 || VAR_6 == '\0')
  return VAR_1;
 if (VAR_6 == ':')
  return VAR_0;
 if (VAR_6 == '.')
  return VAR_3;
 if (VAR_6 >= '0' && VAR_6 <= '9')
  return (VAR_5 | VAR_2| (VAR_6 - '0'));
 if (VAR_6 >= 'a' && VAR_6 <= 'f')
  return (VAR_5 | (VAR_6 - 'a' + 10));
 if (VAR_6 >= 'A' && VAR_6 <= 'F')
  return (VAR_5 | (VAR_6 - 'A' + 10));
 if (VAR_7 == -1)
  return VAR_1;
 return VAR_4;
}
