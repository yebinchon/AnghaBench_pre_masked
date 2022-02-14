
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(const char *VAR_1, unsigned VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_7 = 8;
 VAR_4 = VAR_0 / VAR_7;
 VAR_5 = VAR_0 % VAR_7;

 while ((*VAR_1 == ' ' || *VAR_1 == '\t') && VAR_2-- > 0)
  VAR_1++;

 VAR_3 = 0;
 VAR_6 = *VAR_1 - '0';
 while (*VAR_1 >= '0' && VAR_6 < VAR_7 && VAR_2-- > 0) {
  if (VAR_3>VAR_4 || (VAR_3 == VAR_4 && VAR_6 > VAR_5)) {
   VAR_3 = VAR_0;
   break;
  }
  VAR_3 = (VAR_3 * VAR_7) + VAR_6;
  VAR_6 = *++VAR_1 - '0';
 }
 return (VAR_3);
}
