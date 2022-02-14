
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

int
FUNC_0(const char *VAR_1, const char *VAR_2, register size_t VAR_3)
{
 register const unsigned char *VAR_4 = VAR_0,
   *VAR_5 = (const unsigned char *)VAR_1,
   *VAR_6 = (const unsigned char *)VAR_2;

 for (;;) {
  if (VAR_3 == 0) {






   return(0);
  }
  if (VAR_4[*VAR_5] != VAR_4[*VAR_6++]) {



   break;
  }
  if (*VAR_5++ == '\0') {





   return(0);
  }
  VAR_3--;
 }
 return(VAR_4[*VAR_5] - VAR_4[*--VAR_6]);
}
