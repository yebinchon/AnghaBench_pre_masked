
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong_t ;


 int VAR_0 ;

__attribute__((used)) static size_t
FUNC_0(const char *VAR_1)
{
 ulong_t VAR_2, VAR_3 = 0;
 const char *VAR_4;

 for (VAR_4 = VAR_1; *VAR_4 != '\0'; VAR_4++) {
  VAR_3 = (VAR_3 << 4) + *VAR_4;

  if ((VAR_2 = (VAR_3 & 0xf0000000)) != 0) {
   VAR_3 ^= (VAR_2 >> 24);
   VAR_3 ^= VAR_2;
  }
 }

 return (VAR_3 % VAR_0);
}
