
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static u_int8_t
FUNC_1(const char **VAR_1) {
 unsigned int VAR_2 = 0, VAR_3 = 0;
 u_int8_t VAR_4 = 0;
 const char *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = *VAR_1;

 while (FUNC_0((unsigned char)*VAR_5))
  VAR_2 = VAR_2 * 10 + (*VAR_5++ - '0');

 if (*VAR_5 == '.') {
  VAR_5++;
  if (FUNC_0((unsigned char)*VAR_5)) {
   VAR_3 = (*VAR_5++ - '0') * 10;
   if (FUNC_0((unsigned char)*VAR_5)) {
    VAR_3 += (*VAR_5++ - '0');
   }
  }
 }
 VAR_3 = (VAR_2 * 100) + VAR_3;

 for (VAR_6 = 0; VAR_6 < 9; VAR_6++)
  if (VAR_3 < VAR_0[VAR_6+1])
   break;

 VAR_7 = VAR_3 / VAR_0[VAR_6];
 if (VAR_7 > 9)
  VAR_7 = 9;

 VAR_4 = (VAR_7 << 4) | VAR_6;

 *VAR_1 = VAR_5;

 return (VAR_4);
}
