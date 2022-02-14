
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _s_x {int dummy; } ;


 int FUNC_0 (struct _s_x*,char*) ;
 char* FUNC_1 (char*,char) ;

int
FUNC_2(struct _s_x *VAR_0, char *VAR_1, char **VAR_2, uint32_t *VAR_3,
    uint32_t *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 uint32_t *VAR_7;

 while (VAR_1 && *VAR_1) {
  if (*VAR_1 == '!') {
   VAR_1++;
   VAR_7 = VAR_4;
  } else
   VAR_7 = VAR_3;
  VAR_5 = FUNC_1(VAR_1, ',');
  if (VAR_5)
   *VAR_5++ = '\0';
  VAR_6 = FUNC_0(VAR_0, VAR_1);
  if (VAR_6 <= 0) {
   if (VAR_2 != ((void*)0))
    *VAR_2 = VAR_1;
   return (-1);
  }
  *VAR_7 |= (uint32_t)VAR_6;
  VAR_1 = VAR_5;
 }
 return (0);
}
