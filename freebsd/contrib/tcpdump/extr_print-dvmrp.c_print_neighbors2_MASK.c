
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_6,
                 register const u_char *VAR_7, register const u_char *VAR_8,
                 register u_int VAR_9)
{
 const u_char *VAR_10;
 register u_char VAR_11, VAR_12, VAR_13;
 register int VAR_14;

 FUNC_0((VAR_6, " (v %d.%d):",
        (int)VAR_5 & 0xff,
        (int)(VAR_5 >> 8) & 0xff));

 while (VAR_9 > 0 && VAR_7 < VAR_8) {
  FUNC_1(VAR_7[0], 8);
  VAR_10 = VAR_7;
  VAR_7 += 4;
  VAR_11 = *VAR_7++;
  VAR_12 = *VAR_7++;
  VAR_13 = *VAR_7++;
  VAR_14 = *VAR_7++;
  VAR_9 -= 8;
  while (--VAR_14 >= 0 && (VAR_9 >= 4) && (VAR_7 + 4) <= VAR_8) {
   FUNC_0((VAR_6, " [%s -> ", FUNC_2(VAR_6, VAR_10)));
   FUNC_0((VAR_6, "%s (%d/%d", FUNC_2(VAR_6, VAR_7),
         VAR_11, VAR_12));
   if (VAR_13 & VAR_4)
    FUNC_0((VAR_6, "/tunnel"));
   if (VAR_13 & VAR_3)
    FUNC_0((VAR_6, "/srcrt"));
   if (VAR_13 & VAR_2)
    FUNC_0((VAR_6, "/querier"));
   if (VAR_13 & VAR_0)
    FUNC_0((VAR_6, "/disabled"));
   if (VAR_13 & VAR_1)
    FUNC_0((VAR_6, "/down"));
   FUNC_0((VAR_6, ")]"));
   VAR_7 += 4;
   VAR_9 -= 4;
  }
  if (VAR_14 != -1) {
   FUNC_0((VAR_6, " [|]"));
   return (0);
  }
 }
 return (0);
trunc:
 return (-1);
}
