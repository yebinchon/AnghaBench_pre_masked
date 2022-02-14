
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int FUNC_0 (char const*,char,unsigned int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, uint8_t * VAR_1)
{
 unsigned VAR_2, VAR_3;
 const char *VAR_4 = VAR_0;
 VAR_4 += FUNC_0(VAR_4, ',', &VAR_2);
 VAR_4 += FUNC_0(VAR_4, ',', &VAR_3);
 *VAR_1 = (VAR_2 << 4) | (VAR_3 & 0xf);
 return (int)(VAR_4 - VAR_0);
}
