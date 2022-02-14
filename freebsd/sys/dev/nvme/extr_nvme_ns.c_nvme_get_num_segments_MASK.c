
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static uint32_t
FUNC_1(uint64_t VAR_0, uint64_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 if (VAR_2 == 0)
  return (1);

 FUNC_0((VAR_2 & (VAR_2 - 1)) == 0, ("alignment not power of 2\n"));

 VAR_3 = VAR_1 / VAR_2;
 VAR_5 = VAR_1 & (VAR_2 - 1);
 VAR_4 = VAR_0 & (VAR_2 - 1);
 if (VAR_5 > 0 || VAR_4 > 0)
  VAR_3 += 1 + (VAR_5 + VAR_4 - 1) / VAR_2;
 return (VAR_3);
}
