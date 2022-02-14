
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static char *FUNC_0(const unsigned char *VAR_0, const unsigned char *VAR_1)
{
 uint16_t VAR_2 = VAR_1[0]<<8 | VAR_1[1], VAR_3 = VAR_0[0]<<8 | VAR_0[1];
 for (VAR_0++; *VAR_0 && VAR_3 != VAR_2; VAR_3 = VAR_3<<8 | *++VAR_0);
 return *VAR_0 ? (char *)VAR_0-1 : 0;
}
