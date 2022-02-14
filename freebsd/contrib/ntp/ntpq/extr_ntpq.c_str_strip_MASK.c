
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(
 const char ** VAR_0,
 size_t VAR_1
 )
{
 static const char VAR_2[] = "";

 if (*VAR_0 && VAR_1) {
  const char * VAR_3 = *VAR_0;
  const char * VAR_4 = VAR_3 + VAR_1;

  while (VAR_3 != VAR_4 && *(const unsigned char*)VAR_3 <= ' ')
   ++VAR_3;
  while (VAR_3 != VAR_4 && *(const unsigned char*)(VAR_4 - 1) <= ' ')
   --VAR_4;
  *VAR_0 = VAR_3;
  VAR_1 = (size_t)(VAR_4 - VAR_3);
 } else {
  *VAR_0 = VAR_2;
  VAR_1 = 0;
 }
 return VAR_1;
}
