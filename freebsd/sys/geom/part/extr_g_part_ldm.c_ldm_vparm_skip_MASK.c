
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;



__attribute__((used)) static int
FUNC_0(const u_char *VAR_0, int VAR_1, size_t VAR_2)
{
 uint8_t VAR_3;

 VAR_3 = VAR_0[VAR_1++];
 if (VAR_1 + VAR_3 >= VAR_2)
  return (-1);

 return (VAR_1 + VAR_3);
}
