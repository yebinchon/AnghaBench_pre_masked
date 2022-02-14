
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int const*) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_0,
              register const u_char *VAR_1, u_int VAR_2)
{
 register u_int VAR_3;
 register u_int VAR_4;

 if (VAR_2 < 3) {
  FUNC_0((VAR_0, " [bad length %u]", VAR_2));
  return (0);
 }
 if ((VAR_2 + 1) & 3)
  FUNC_0((VAR_0, " [bad length %u]", VAR_2));
 FUNC_1(VAR_1[2]);
 VAR_3 = VAR_1[2] - 1;
 if (VAR_3 < 3 || ((VAR_3 + 1) & 3) || VAR_3 > VAR_2 + 1)
  FUNC_0((VAR_0, " [bad ptr %u]", VAR_1[2]));

 for (VAR_4 = 3; VAR_4 < VAR_2; VAR_4 += 4) {
  FUNC_2(VAR_1[VAR_4], 4);
  FUNC_0((VAR_0, " %s", FUNC_3(VAR_0, &VAR_1[VAR_4])));
  if (VAR_3 > VAR_4)
   FUNC_0((VAR_0, ","));
 }
 return (0);

trunc:
 return (-1);
}
