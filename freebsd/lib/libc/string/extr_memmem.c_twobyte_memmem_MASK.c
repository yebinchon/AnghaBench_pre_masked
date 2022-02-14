
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static char *FUNC_0(const unsigned char *VAR_0, size_t VAR_1, const unsigned char *VAR_2)
{
 uint16_t VAR_3 = VAR_2[0]<<8 | VAR_2[1], VAR_4 = VAR_0[0]<<8 | VAR_0[1];
 for (VAR_0+=2, VAR_1-=2; VAR_1; VAR_1--, VAR_4 = VAR_4<<8 | *VAR_0++)
  if (VAR_4 == VAR_3) return (char *)VAR_0-2;
 return VAR_4 == VAR_3 ? (char *)VAR_0-2 : 0;
}
