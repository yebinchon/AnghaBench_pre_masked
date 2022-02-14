
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_char ;



__attribute__((used)) static int
FUNC_0(const u_char *VAR_0, int VAR_1, uint64_t *VAR_2, size_t VAR_3)
{
 uint64_t VAR_4;
 uint8_t VAR_5;

 VAR_5 = VAR_0[VAR_1++];
 if (VAR_5 > sizeof(uint64_t) || VAR_5 + VAR_1 >= VAR_3)
  return (-1);
 for (VAR_4 = 0; VAR_5 > 0; VAR_5--)
  VAR_4 = (VAR_4 << 8) | VAR_0[VAR_1++];
 *VAR_2 = VAR_4;
 return (VAR_1);
}
