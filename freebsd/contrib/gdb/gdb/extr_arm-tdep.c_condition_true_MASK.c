
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;




__attribute__((used)) static int
FUNC_0 (unsigned long VAR_6, unsigned long VAR_7)
{
  if (VAR_6 == VAR_4 || VAR_6 == VAR_5)
    return 1;

  switch (VAR_6)
    {
    case 139:
      return ((VAR_7 & VAR_3) != 0);
    case 131:
      return ((VAR_7 & VAR_3) == 0);
    case 140:
      return ((VAR_7 & VAR_0) != 0);
    case 141:
      return ((VAR_7 & VAR_0) == 0);
    case 132:
      return ((VAR_7 & VAR_1) != 0);
    case 130:
      return ((VAR_7 & VAR_1) == 0);
    case 128:
      return ((VAR_7 & VAR_2) != 0);
    case 129:
      return ((VAR_7 & VAR_2) == 0);
    case 136:
      return ((VAR_7 & (VAR_0 | VAR_3)) == VAR_0);
    case 134:
      return ((VAR_7 & (VAR_0 | VAR_3)) != VAR_0);
    case 138:
      return (((VAR_7 & VAR_1) == 0) == ((VAR_7 & VAR_2) == 0));
    case 133:
      return (((VAR_7 & VAR_1) == 0) != ((VAR_7 & VAR_2) == 0));
    case 137:
      return (((VAR_7 & VAR_3) == 0) &&
       (((VAR_7 & VAR_1) == 0) == ((VAR_7 & VAR_2) == 0)));
    case 135:
      return (((VAR_7 & VAR_3) != 0) ||
       (((VAR_7 & VAR_1) == 0) != ((VAR_7 & VAR_2) == 0)));
    }
  return 1;
}
