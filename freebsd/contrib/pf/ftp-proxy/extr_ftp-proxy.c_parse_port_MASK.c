
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int16_t ;






 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,unsigned int*,...) ;

u_int16_t
FUNC_1(int VAR_2)
{
 unsigned int VAR_3, VAR_4[6];
 int VAR_5;
 char *VAR_6;


 for (VAR_6 = VAR_0 + VAR_1; VAR_6 > VAR_0; VAR_6--)
  if (*VAR_6 == ' ' || *VAR_6 == '(')
   break;
 if (VAR_6 == VAR_0)
  return (0);

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_6, " %u,%u,%u,%u,%u,%u", &VAR_4[0], &VAR_4[1], &VAR_4[2],
      &VAR_4[3], &VAR_4[4], &VAR_4[5]);
  if (VAR_5 == 6 && VAR_4[0] < 256 && VAR_4[1] < 256 && VAR_4[2] < 256 &&
      VAR_4[3] < 256 && VAR_4[4] < 256 && VAR_4[5] < 256)
   return ((VAR_4[4] << 8) | VAR_4[5]);
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_6, "(%u,%u,%u,%u,%u,%u)", &VAR_4[0], &VAR_4[1], &VAR_4[2],
      &VAR_4[3], &VAR_4[4], &VAR_4[5]);
  if (VAR_5 == 6 && VAR_4[0] < 256 && VAR_4[1] < 256 && VAR_4[2] < 256 &&
      VAR_4[3] < 256 && VAR_4[4] < 256 && VAR_4[5] < 256)
   return ((VAR_4[4] << 8) | VAR_4[5]);
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_6, "(|||%u|)", &VAR_3);
  if (VAR_5 == 1 && VAR_3 < 65536)
   return (VAR_3);
  break;
 case 131:
  VAR_5 = FUNC_0(VAR_6, " |1|%u.%u.%u.%u|%u|", &VAR_4[0], &VAR_4[1], &VAR_4[2],
      &VAR_4[3], &VAR_3);
  if (VAR_5 == 5 && VAR_4[0] < 256 && VAR_4[1] < 256 && VAR_4[2] < 256 &&
      VAR_4[3] < 256 && VAR_3 < 65536)
   return (VAR_3);
  VAR_5 = FUNC_0(VAR_6, " |2|%*[a-fA-F0-9:]|%u|", &VAR_3);
  if (VAR_5 == 1 && VAR_3 < 65536)
   return (VAR_3);
  break;
 default:
  return (0);
 }

 return (0);
}
