
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 scalar_t__ FUNC_0 (char const*,int*,int*,int,int*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, char *VAR_1, uint64_t *VAR_2, uint64_t *VAR_3,
    uint8_t *VAR_4, size_t *VAR_5)
{
 uint64_t VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 *VAR_5 = 0;
 VAR_8 = 0;
 VAR_10 = 1;
 if (FUNC_0(VAR_0, &VAR_10, &VAR_6, 1, &VAR_8) < 0)
  return (-1);
 if (FUNC_0(VAR_0, &VAR_10, VAR_2, 2, &VAR_8) < 0)
  return (-1);
 if (VAR_0[VAR_10++] != '0')
  return (-1);
 *VAR_1 = VAR_0[VAR_10++];
 VAR_8 += *VAR_1 - '0';
 switch (*VAR_1) {
 case '0':
  for (VAR_9 = 0; (uint64_t) VAR_9 < VAR_6; VAR_9++) {
   if (FUNC_0(VAR_0, &VAR_10, VAR_3, 1, &VAR_8) < 0)
    return (-1);
   VAR_4[VAR_9] = (uint8_t) *VAR_3;
  }
  *VAR_5 = VAR_6;
  break;
 case '1':
  if (VAR_6 != 0)
   return (-1);
  break;
 case '2':
 case '4':
  if (VAR_6 != 2)
   return (-1);
  if (FUNC_0(VAR_0, &VAR_10, VAR_3, 2, &VAR_8) < 0)
   return (-1);
  break;
 case '3':
 case '5':
  if (VAR_6 != 4)
   return (-1);
  if (FUNC_0(VAR_0, &VAR_10, VAR_3, 4, &VAR_8) < 0)
   return (-1);
  break;
 default:
  return (-1);
 }

 if (FUNC_0(VAR_0, &VAR_10, &VAR_7, 1, &VAR_8) < 0)
  return (-1);

 if ((VAR_8 & 0xFF) != 0) {
  return (-1);
 }

 return (0);
}
