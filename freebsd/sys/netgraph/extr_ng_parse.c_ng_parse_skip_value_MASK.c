
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;





 int FUNC_0 (char const*,int*,int*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_2;

 VAR_4 = VAR_5 = VAR_6 = 0;
 do {
  switch (FUNC_0(VAR_1, &VAR_7, &VAR_4)) {
  case 130:
   VAR_5++;
   break;
  case 131:
   VAR_6++;
   break;
  case 128:
   if (VAR_5-- == 0)
    return (VAR_0);
   break;
  case 129:
   if (VAR_6-- == 0)
    return (VAR_0);
   break;
  case 132:
   return (VAR_0);
  default:
   break;
  }
  VAR_7 += VAR_4;
 } while (VAR_5 > 0 || VAR_6 > 0);
 *VAR_3 = VAR_7 - VAR_2;
 return (0);
}
