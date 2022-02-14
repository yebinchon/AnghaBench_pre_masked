
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;

int FUNC_3(char **VAR_0, int *VAR_1, int VAR_2, int VAR_3, char **VAR_4,
 const char *VAR_5)
{
 if (VAR_2 > *VAR_1) {
  char *VAR_6;
  int VAR_7 = VAR_3 ? VAR_2 % VAR_3 : 0;
  int VAR_8 = VAR_4 ? *VAR_4 - *VAR_0 : 0;

  if (VAR_7)
   VAR_2 += VAR_3 - VAR_7;
  VAR_6 = (char *) FUNC_2(*VAR_0, VAR_2);
  FUNC_1( ("adjbuf %s: %d %d (pbuf=%p, tbuf=%p)\n", VAR_5, *VAR_1, VAR_2, (void ) *VAR_0, (void *) VAR_6) );
  if (VAR_6 == ((void*)0)) {
   if (VAR_5)
    FUNC_0("out of memory in %s", VAR_5);
   return 0;
  }
  *VAR_0 = VAR_6;
  *VAR_1 = VAR_2;
  if (VAR_4)
   *VAR_4 = VAR_6 + VAR_8;
 }
 return 1;
}
