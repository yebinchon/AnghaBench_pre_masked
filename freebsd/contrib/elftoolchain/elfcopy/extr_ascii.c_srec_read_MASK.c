
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint64_t ;


 scalar_t__ FUNC_0 (char const*,int*,size_t*,int,int*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, char *VAR_1, uint64_t *VAR_2, uint8_t *VAR_3,
    size_t *VAR_4)
{
 uint64_t VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = 0;
 VAR_11 = 2;
 if (FUNC_0(VAR_0, &VAR_11, &VAR_5, 1, &VAR_9) < 0)
  return (-1);
 *VAR_1 = VAR_0[1];
 switch (*VAR_1) {
 case '0':
 case '1':
 case '5':
 case '9':
  VAR_8 = 2;
  break;
 case '2':
 case '8':
  VAR_8 = 3;
  break;
 case '3':
 case '7':
  VAR_8 = 4;
  break;
 default:
  return (-1);
 }

 if (FUNC_0(VAR_0, &VAR_11, VAR_2, VAR_8, &VAR_9) < 0)
  return (-1);

 VAR_5 -= VAR_8 + 1;
 if (*VAR_1 >= '0' && *VAR_1 <= '3') {
  for (VAR_10 = 0; (uint64_t) VAR_10 < VAR_5; VAR_10++) {
   if (FUNC_0(VAR_0, &VAR_11, &VAR_7, 1, &VAR_9) < 0)
    return -1;
   VAR_3[VAR_10] = (uint8_t) VAR_7;
  }
  *VAR_4 = VAR_5;
 } else
  *VAR_4 = 0;

 if (FUNC_0(VAR_0, &VAR_11, &VAR_6, 1, ((void*)0)) < 0)
  return (-1);

 if ((int) VAR_6 != (~VAR_9 & 0xFF))
  return (-1);

 return (0);
}
