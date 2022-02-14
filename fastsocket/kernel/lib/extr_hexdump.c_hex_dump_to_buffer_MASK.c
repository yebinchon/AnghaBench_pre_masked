
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef scalar_t__ u64 ;
typedef unsigned long long u32 ;
typedef unsigned long long u16 ;


 char FUNC_0 (char) ;
 char FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char*,size_t,char*,char*,unsigned long long const) ;

void FUNC_5(const void *VAR_0, size_t VAR_1, int VAR_2,
   int VAR_3, char *VAR_4, size_t VAR_5,
   bool VAR_6)
{
 const u8 *VAR_7 = VAR_0;
 u8 VAR_8;
 int VAR_9, VAR_10 = 0;
 int VAR_11;

 if (VAR_2 != 16 && VAR_2 != 32)
  VAR_2 = 16;

 if (!VAR_1)
  goto nil;
 if (VAR_1 > VAR_2)
  VAR_1 = VAR_2;
 if ((VAR_1 % VAR_3) != 0)
  VAR_3 = 1;

 switch (VAR_3) {
 case 8: {
  const u64 *VAR_12 = VAR_0;
  int VAR_13 = VAR_1 / VAR_3;

  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++)
   VAR_10 += FUNC_4(VAR_4 + VAR_10, VAR_5 - VAR_10,
    "%s%16.16llx", VAR_9 ? " " : "",
    (unsigned long long)*(VAR_12 + VAR_9));
  VAR_11 = 17 * VAR_13 + 2;
  break;
 }

 case 4: {
  const u32 *VAR_14 = VAR_0;
  int VAR_15 = VAR_1 / VAR_3;

  for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
   VAR_10 += FUNC_4(VAR_4 + VAR_10, VAR_5 - VAR_10,
    "%s%8.8x", VAR_9 ? " " : "", *(VAR_14 + VAR_9));
  VAR_11 = 9 * VAR_15 + 2;
  break;
 }

 case 2: {
  const u16 *VAR_16 = VAR_0;
  int VAR_17 = VAR_1 / VAR_3;

  for (VAR_9 = 0; VAR_9 < VAR_17; VAR_9++)
   VAR_10 += FUNC_4(VAR_4 + VAR_10, VAR_5 - VAR_10,
    "%s%4.4x", VAR_9 ? " " : "", *(VAR_16 + VAR_9));
  VAR_11 = 5 * VAR_17 + 2;
  break;
 }

 default:
  for (VAR_9 = 0; (VAR_9 < VAR_1) && (VAR_10 + 3) <= VAR_5; VAR_9++) {
   VAR_8 = VAR_7[VAR_9];
   VAR_4[VAR_10++] = FUNC_0(VAR_8);
   VAR_4[VAR_10++] = FUNC_1(VAR_8);
   VAR_4[VAR_10++] = ' ';
  }
  if (VAR_9)
   VAR_10--;

  VAR_11 = 3 * VAR_2 + 2;
  break;
 }
 if (!VAR_6)
  goto nil;

 while (VAR_10 < (VAR_5 - 1) && VAR_10 < (VAR_11 - 1))
  VAR_4[VAR_10++] = ' ';
 for (VAR_9 = 0; (VAR_9 < VAR_1) && (VAR_10 + 2) < VAR_5; VAR_9++)
  VAR_4[VAR_10++] = (FUNC_2(VAR_7[VAR_9]) && FUNC_3(VAR_7[VAR_9])) ? VAR_7[VAR_9]
    : '.';
nil:
 VAR_4[VAR_10++] = '\0';
}
