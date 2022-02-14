
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,unsigned char const*,unsigned int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_0,
    const unsigned char *VAR_1,
    unsigned int VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2 == 0) {
  return (VAR_0);
 }
 VAR_3 = (4 - (((uintptr_t) VAR_1) & 0x3));
 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));
}
