
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_0(const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; *VAR_2 != '\0'; VAR_2++) {


  if (*VAR_2 <= (char)(VAR_1 & VAR_0)) {
   while (*VAR_2 != '\0')
    VAR_2++;
   continue;
  }


  if (*VAR_2 < ' ')
   VAR_2++;


  if (VAR_4)
   VAR_4 += VAR_3;


  while (*VAR_2 != '\0') {
   VAR_4++;
   VAR_2++;
  }
 }
 return VAR_4;
}
