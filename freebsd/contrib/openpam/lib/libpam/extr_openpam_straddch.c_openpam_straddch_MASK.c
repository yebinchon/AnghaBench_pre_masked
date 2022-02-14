
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*,size_t) ;

int
FUNC_3(char **VAR_4, size_t *VAR_5, size_t *VAR_6, int VAR_7)
{
 size_t VAR_8;
 char *VAR_9;

 if (*VAR_4 == ((void*)0)) {

  VAR_8 = VAR_1;
  if ((VAR_9 = FUNC_0(VAR_8)) == ((void*)0)) {
   FUNC_1(VAR_2, "malloc(): %m");
   VAR_3 = VAR_0;
   return (-1);
  }
  *VAR_4 = VAR_9;
  *VAR_5 = VAR_8;
  *VAR_6 = 0;
 } else if (VAR_7 != 0 && *VAR_6 + 1 >= *VAR_5) {

  VAR_8 = *VAR_5 * 2;
  if ((VAR_9 = FUNC_2(*VAR_4, VAR_8)) == ((void*)0)) {
   FUNC_1(VAR_2, "realloc(): %m");
   VAR_3 = VAR_0;
   return (-1);
  }
  *VAR_5 = VAR_8;
  *VAR_4 = VAR_9;
 }
 if (VAR_7 != 0) {
  (*VAR_4)[*VAR_6] = VAR_7;
  ++*VAR_6;
 }
 (*VAR_4)[*VAR_6] = '\0';
 return (0);
}
