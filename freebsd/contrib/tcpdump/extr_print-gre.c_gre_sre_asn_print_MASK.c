
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_0, uint8_t VAR_1, uint8_t VAR_2,
                  const u_char *VAR_3, u_int VAR_4)
{
 const u_char *VAR_5 = VAR_3;

 if (VAR_1 & 1) {
  FUNC_1((VAR_0, ", badoffset=%u", VAR_1));
  return (1);
 }
 if (VAR_2 & 1) {
  FUNC_1((VAR_0, ", badlength=%u", VAR_2));
  return (1);
 }
 if (VAR_1 >= VAR_2) {
  FUNC_1((VAR_0, ", badoff/len=%u/%u", VAR_1, VAR_2));
  return (1);
 }

 while (VAR_2 != 0) {
  if (!FUNC_2(*VAR_3, 2))
   return (0);
  if (VAR_4 < 2)
   return (0);

  FUNC_1((VAR_0, " %s%x",
      ((VAR_3 - VAR_5) == VAR_1) ? "*" : "",
      FUNC_0(VAR_3)));

  VAR_3 += 2;
  VAR_4 -= 2;
  VAR_2 -= 2;
 }
 return (1);
}
