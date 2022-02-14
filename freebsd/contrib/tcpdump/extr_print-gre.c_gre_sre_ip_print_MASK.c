
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,char*,int) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_1, uint8_t VAR_2, uint8_t VAR_3,
                 const u_char *VAR_4, u_int VAR_5)
{
 const u_char *VAR_6 = VAR_4;
 char VAR_7[VAR_0];

 if (VAR_2 & 3) {
  FUNC_0((VAR_1, ", badoffset=%u", VAR_2));
  return (1);
 }
 if (VAR_3 & 3) {
  FUNC_0((VAR_1, ", badlength=%u", VAR_3));
  return (1);
 }
 if (VAR_2 >= VAR_3) {
  FUNC_0((VAR_1, ", badoff/len=%u/%u", VAR_2, VAR_3));
  return (1);
 }

 while (VAR_3 != 0) {
  if (!FUNC_1(*VAR_4, 4))
   return (0);
  if (VAR_5 < 4)
   return (0);

  FUNC_2(VAR_4, VAR_7, sizeof(VAR_7));
  FUNC_0((VAR_1, " %s%s",
      ((VAR_4 - VAR_6) == VAR_2) ? "*" : "", VAR_7));

  VAR_4 += 4;
  VAR_5 -= 4;
  VAR_3 -= 4;
 }
 return (1);
}
