
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 char** VAR_7 ;
 char** VAR_8 ;
 char** VAR_9 ;
 char** VAR_10 ;
 char** VAR_11 ;
 char** VAR_12 ;
 int FUNC_1 (char const*) ;
 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;

__attribute__((used)) static void
FUNC_2 (int VAR_16, int VAR_17)
{
  const char *VAR_18;
  int VAR_19 = 0;
  FUNC_0 (VAR_3);
  if (VAR_14 & VAR_3)
    VAR_19 = 8;

  switch (VAR_16)
    {
    case 163: case 155: case 150: case 159:
    case 129: case 160: case 130: case 153:
      VAR_18 = VAR_7[VAR_16 - 163 + VAR_19];
      break;
    case 141: case 128: case 156:
    case 151: case 140: case 139:
      VAR_18 = VAR_12[VAR_16 - 141 + VAR_19];
      break;
    case 164: case 165: case 157: case 158:
    case 152: case 154: case 161: case 162:
      FUNC_0 (0);
      if (VAR_14)
 VAR_18 = VAR_11[VAR_16 - 164 + VAR_19];
      else
 VAR_18 = VAR_10[VAR_16 - 164];
      break;
    case 138: case 135: case 133: case 136:
    case 131: case 137: case 132: case 134:
      if (VAR_5 == VAR_6 && (VAR_17 & VAR_0))
 {
   VAR_18 = VAR_9[VAR_16 - 138 + VAR_19];
   break;
 }
      VAR_16 += 149 - 138;

    case 149: case 146: case 144: case 147:
    case 142: case 148: case 143: case 145:
      FUNC_0 (VAR_4);
      if (VAR_14 & VAR_4)
 VAR_18 = VAR_9[VAR_16 - 149 + VAR_19];
      else if (VAR_17 & VAR_0)
 VAR_18 = VAR_8[VAR_16 - 149 + VAR_19];
      else
 VAR_18 = VAR_7[VAR_16 - 149 + VAR_19];
      VAR_15 |= (VAR_13 & VAR_2);
      break;
    default:
      VAR_18 = VAR_1;
      break;
    }
  FUNC_1 (VAR_18);
}
