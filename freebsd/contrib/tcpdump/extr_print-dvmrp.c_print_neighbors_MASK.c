
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int *,int const*) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0,
                register const u_char *VAR_1, register const u_char *VAR_2,
                register u_int VAR_3)
{
 const u_char *VAR_4;
 register u_char VAR_5;
 register u_char VAR_6;
 register int VAR_7;

 while (VAR_3 > 0 && VAR_1 < VAR_2) {
  FUNC_1(VAR_1[0], 7);
  VAR_4 = VAR_1;
  VAR_1 += 4;
  VAR_5 = *VAR_1++;
  VAR_6 = *VAR_1++;
  VAR_7 = *VAR_1++;
  VAR_3 -= 7;
  while (--VAR_7 >= 0) {
   FUNC_1(VAR_1[0], 4);
   FUNC_0((VAR_0, " [%s ->", FUNC_2(VAR_0, VAR_4)));
   FUNC_0((VAR_0, " %s, (%d/%d)]",
       FUNC_2(VAR_0, VAR_1), VAR_5, VAR_6));
   VAR_1 += 4;
   VAR_3 -= 4;
  }
 }
 return (0);
trunc:
 return (-1);
}
