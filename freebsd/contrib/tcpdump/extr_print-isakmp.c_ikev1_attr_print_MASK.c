
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static const u_char *
FUNC_5(netdissect_options *VAR_0, const u_char *VAR_1, const u_char *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 FUNC_2(VAR_1[0]);
 if (VAR_1[0] & 0x80)
  VAR_3 = 4;
 else {
  FUNC_3(&VAR_1[2]);
  VAR_3 = 4 + FUNC_0(&VAR_1[2]);
 }
 if (VAR_2 < VAR_1 + VAR_3) {
  FUNC_1((VAR_0,"[|attr]"));
  return VAR_2 + 1;
 }

 FUNC_3(&VAR_1[0]);
 FUNC_1((VAR_0,"("));
 VAR_4 = FUNC_0(&VAR_1[0]) & 0x7fff;
 FUNC_1((VAR_0,"type=#%d ", VAR_4));
 if (VAR_1[0] & 0x80) {
  FUNC_1((VAR_0,"value="));
  VAR_4 = VAR_1[2];
  if (!FUNC_4(VAR_0, (const uint8_t *)&VAR_1[2], 2)) {
   FUNC_1((VAR_0,")"));
   goto trunc;
  }
 } else {
  FUNC_1((VAR_0,"len=%d value=", VAR_3 - 4));
  if (!FUNC_4(VAR_0, (const uint8_t *)&VAR_1[4], VAR_3 - 4)) {
   FUNC_1((VAR_0,")"));
   goto trunc;
  }
 }
 FUNC_1((VAR_0,")"));
 return VAR_1 + VAR_3;

trunc:
 return ((void*)0);
}
