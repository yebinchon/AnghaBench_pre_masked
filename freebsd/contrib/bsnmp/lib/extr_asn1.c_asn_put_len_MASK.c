
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int asn_len_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static u_int
FUNC_1(u_char *VAR_1, asn_len_t VAR_2)
{
 u_int VAR_3, VAR_4;
 asn_len_t VAR_5;

 if (VAR_2 > VAR_0) {
  FUNC_0(((void*)0), "encoding length too long: (%u)", VAR_2);
  return (0);
 }

 if (VAR_2 <= 127) {
  if (VAR_1)
   *VAR_1++ = (u_char)VAR_2;
  return (1);
 } else {
  VAR_3 = 0;

  for (VAR_5 = VAR_2; VAR_5 != 0; VAR_5 >>= 8)
   VAR_3++;
  if (VAR_1 != ((void*)0)) {
   *VAR_1++ = (u_char)VAR_3 | 0x80;
   VAR_4 = VAR_3;
   while (VAR_4-- > 0) {
    VAR_1[VAR_4] = VAR_2 & 0xff;
    VAR_2 >>= 8;
   }
  }
  return (VAR_3 + 1);
 }
}
