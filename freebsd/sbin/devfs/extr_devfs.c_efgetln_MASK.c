
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int *,size_t*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (char*) ;
 size_t FUNC_6 (char*) ;

size_t
FUNC_7(FILE *VAR_0, char **VAR_1)
{
 size_t VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_3 == ((void*)0)) {
  *VAR_1 = ((void*)0);
  return (VAR_2);
 }
 if (VAR_3[VAR_2 - 1] == '\n') {
  VAR_3[VAR_2 - 1] = '\0';
  *VAR_1 = FUNC_5(VAR_3);
  if (*VAR_1 == ((void*)0))
   FUNC_1(1, "cannot allocate memory");
  --VAR_2;
 } else {
  *VAR_1 = FUNC_3(VAR_2 + 1);
  if (*VAR_1 == ((void*)0))
   FUNC_1(1, "cannot allocate memory");
  FUNC_4(*VAR_1, VAR_3, VAR_2);
  (*VAR_1)[VAR_2] = '\0';
 }
 FUNC_0(VAR_2 == FUNC_6(*VAR_1));
 return (VAR_2);
}
