
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 char const* VAR_1 ;

const char *
FUNC_1(const char *VAR_2)
{
 char *VAR_3, *VAR_4;
 char VAR_5;

 if (VAR_2 == ((void*)0) || *VAR_2 == '\0') {
  return VAR_1;
 }

 for (VAR_3 = (char*)VAR_2, VAR_4 = (char*)VAR_2; *VAR_3 != '\0'; VAR_3++) {


  if (*VAR_3 == ';')
   continue;

  if (*VAR_3 == '-' && *(VAR_3+1) == '1') {
   *VAR_4++ = VAR_0;
   VAR_3++;
   continue;
  }

  if (!FUNC_0((unsigned char)*VAR_3)) {

   return VAR_1;
  }


  VAR_5 = *VAR_3 - '0';
  if (FUNC_0((unsigned char)*(VAR_3+1))) {
   VAR_3++;
   VAR_5 *= 10;
   VAR_5 += *VAR_3 - '0';
  }

  *VAR_4 = VAR_5;

  if (*VAR_4 == '\0')
   return (VAR_4 == (char*)VAR_2) ? VAR_1 : VAR_2;
  VAR_4++;
 }
 *VAR_4 = '\0';
 return VAR_2;
}
