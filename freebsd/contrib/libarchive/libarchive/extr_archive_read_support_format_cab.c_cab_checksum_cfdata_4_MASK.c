
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static uint32_t
FUNC_1(const void *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
 const unsigned char *VAR_3;
 unsigned VAR_4;
 uint32_t VAR_5;

 VAR_4 = (unsigned)VAR_1 / 4;
 VAR_5 = VAR_2;
 VAR_3 = VAR_0;
 for (;VAR_4 > 0; --VAR_4) {
  VAR_5 ^= FUNC_0(VAR_3);
  VAR_3 += 4;
 }
 return (VAR_5);
}
