
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 char** VAR_7 ;
 char** VAR_8 ;
 char** VAR_9 ;
 char** VAR_10 ;
 int FUNC_1 (char const*) ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;


__attribute__((used)) static void
FUNC_2 (int VAR_14, int VAR_15)
{
  const char *VAR_16;

  switch (VAR_14)
    {
    case 132:
      if (VAR_4)
 VAR_16 = "dx";
      else
 VAR_16 = "(%dx)";
      break;
    case 157: case 149: case 144: case 153:
    case 130: case 154: case 131: case 147:
      VAR_16 = VAR_5[VAR_14 - 157];
      break;
    case 135: case 129: case 150:
    case 145: case 134: case 133:
      VAR_16 = VAR_10[VAR_14 - 135];
      break;
    case 158: case 159: case 151: case 152:
    case 146: case 148: case 155: case 156:
      FUNC_0 (0);
      if (VAR_12)
 VAR_16 = VAR_9[VAR_14 - 158];
      else
 VAR_16 = VAR_8[VAR_14 - 158];
      break;
    case 143: case 140: case 138: case 141:
    case 136: case 142: case 137: case 139:
      FUNC_0 (VAR_3);
      if (VAR_12 & VAR_3)
 VAR_16 = VAR_7[VAR_14 - 143];
      else if (VAR_15 & VAR_0)
 VAR_16 = VAR_6[VAR_14 - 143];
      else
 VAR_16 = VAR_5[VAR_14 - 143];
      VAR_13 |= (VAR_11 & VAR_2);
      break;
    case 128:
      if ((VAR_12 & VAR_3) || (VAR_15 & VAR_0))
 VAR_16 = *VAR_6;
      else
 VAR_16 = *VAR_5;
      if (!(VAR_12 & VAR_3))
 VAR_13 |= (VAR_11 & VAR_2);
      break;
    default:
      VAR_16 = VAR_1;
      break;
    }
  FUNC_1 (VAR_16);
}
