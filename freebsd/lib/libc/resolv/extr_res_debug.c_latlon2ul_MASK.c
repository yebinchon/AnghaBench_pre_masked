
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int32_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static u_int32_t
FUNC_2(const char **VAR_0, int *VAR_1) {
 const char *VAR_2;
 u_int32_t VAR_3;
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

 VAR_2 = *VAR_0;

 while (FUNC_0((unsigned char)*VAR_2))
  VAR_4 = VAR_4 * 10 + (*VAR_2++ - '0');

 while (FUNC_1((unsigned char)*VAR_2))
  VAR_2++;

 if (!(FUNC_0((unsigned char)*VAR_2)))
  goto fndhemi;

 while (FUNC_0((unsigned char)*VAR_2))
  VAR_5 = VAR_5 * 10 + (*VAR_2++ - '0');

 while (FUNC_1((unsigned char)*VAR_2))
  VAR_2++;

 if (!(FUNC_0((unsigned char)*VAR_2)))
  goto fndhemi;

 while (FUNC_0((unsigned char)*VAR_2))
  VAR_6 = VAR_6 * 10 + (*VAR_2++ - '0');

 if (*VAR_2 == '.') {
  VAR_2++;
  if (FUNC_0((unsigned char)*VAR_2)) {
   VAR_7 = (*VAR_2++ - '0') * 100;
   if (FUNC_0((unsigned char)*VAR_2)) {
    VAR_7 += (*VAR_2++ - '0') * 10;
    if (FUNC_0((unsigned char)*VAR_2)) {
     VAR_7 += (*VAR_2++ - '0');
    }
   }
  }
 }

 while (!FUNC_1((unsigned char)*VAR_2))
  VAR_2++;

 while (FUNC_1((unsigned char)*VAR_2))
  VAR_2++;

 fndhemi:
 switch (*VAR_2) {
 case 'N': case 'n':
 case 'E': case 'e':
  VAR_3 = ((unsigned)1<<31)
   + (((((VAR_4 * 60) + VAR_5) * 60) + VAR_6) * 1000)
   + VAR_7;
  break;
 case 'S': case 's':
 case 'W': case 'w':
  VAR_3 = ((unsigned)1<<31)
   - (((((VAR_4 * 60) + VAR_5) * 60) + VAR_6) * 1000)
   - VAR_7;
  break;
 default:
  VAR_3 = 0;
  break;
 }

 switch (*VAR_2) {
 case 'N': case 'n':
 case 'S': case 's':
  *VAR_1 = 1;
  break;
 case 'E': case 'e':
 case 'W': case 'w':
  *VAR_1 = 2;
  break;
 default:
  *VAR_1 = 0;
  break;
 }

 VAR_2++;
 while (!FUNC_1((unsigned char)*VAR_2))
  VAR_2++;

 while (FUNC_1((unsigned char)*VAR_2))
  VAR_2++;

 *VAR_0 = VAR_2;

 return (VAR_3);
}
