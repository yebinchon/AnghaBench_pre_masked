
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int
FUNC_2(u_char *VAR_0)
{
 uint16_t VAR_1;
 uint8_t VAR_2;


 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 512 || VAR_1 > 4096 || !((VAR_1 & (VAR_1 - 1)) == 0))
  return (0);
 VAR_2 = VAR_0[2];
 if (VAR_2 < 1 || VAR_2 > 128 || !((VAR_2 & (VAR_2 - 1)) == 0))
  return (0);


 return (1);
}
