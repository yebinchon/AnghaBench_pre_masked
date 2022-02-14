
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_0,
             register const u_char *VAR_1, register const u_char *VAR_2,
             register u_int VAR_3)
{
 register uint32_t VAR_4, VAR_5;
 register int VAR_6, VAR_7;
 register u_int VAR_8, VAR_9;

 while (VAR_3 > 0) {
  if (VAR_3 < 3) {
   FUNC_0((VAR_0, " [|]"));
   return (0);
  }
  FUNC_2(VAR_1[0], 3);
  VAR_4 = (uint32_t)0xff << 24 | VAR_1[0] << 16 | VAR_1[1] << 8 | VAR_1[2];
  VAR_9 = 1;
  if (VAR_1[0])
   VAR_9 = 2;
  if (VAR_1[1])
   VAR_9 = 3;
  if (VAR_1[2])
   VAR_9 = 4;

  FUNC_0((VAR_0, "\n\tMask %s", FUNC_4(FUNC_3(VAR_4))));
  VAR_1 += 3;
  VAR_3 -= 3;
  do {
   if (VAR_1 + VAR_9 + 1 > VAR_2) {
    FUNC_0((VAR_0, " [|]"));
    return (0);
   }
   if (VAR_3 < VAR_9 + 1) {
    FUNC_0((VAR_0, "\n\t  [Truncated Report]"));
    return (0);
   }
   VAR_5 = 0;
   for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
    FUNC_1(*VAR_1);
    VAR_5 = VAR_5 << 8 | *VAR_1++;
   }
   for ( ; VAR_8 < 4; ++VAR_8)
    VAR_5 <<= 8;

   FUNC_1(*VAR_1);
   VAR_6 = *VAR_1++;
   VAR_7 = VAR_6 & 0x80;
   VAR_6 &= 0x7f;
   FUNC_0((VAR_0, "\n\t  %s metric %d", FUNC_4(FUNC_3(VAR_5)),
    VAR_6));
   VAR_3 -= VAR_9 + 1;
  } while (!VAR_7);
 }
 return (0);
trunc:
 return (-1);
}
