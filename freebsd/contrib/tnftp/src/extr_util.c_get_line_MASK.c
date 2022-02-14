
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,size_t,int *) ;
 int FUNC_3 () ;
 size_t FUNC_4 (char*) ;

int
FUNC_5(FILE *VAR_1, char *VAR_2, size_t VAR_3, const char **VAR_4)
{
 int VAR_5, VAR_6;
 size_t VAR_7;

 if (FUNC_2(VAR_2, VAR_3, VAR_1) == ((void*)0)) {
  if (FUNC_1(VAR_1)) {
   VAR_5 = -2;
   if (VAR_4)
    *VAR_4 = "\nEOF received";
  } else {
   VAR_5 = -1;
   if (VAR_4)
    *VAR_4 = "Error encountered";
  }
  FUNC_0(VAR_1);
  return VAR_5;
 }
 VAR_7 = FUNC_4(VAR_2);
 if (VAR_2[VAR_7-1] == '\n') {
  VAR_2[--VAR_7] = '\0';
 } else if (VAR_7 == VAR_3-1) {
  while ((VAR_6 = FUNC_3()) != '\n' && VAR_6 != VAR_0)
   continue;
  if (VAR_4)
   *VAR_4 = "Input line is too long";
  FUNC_0(VAR_1);
  return -3;
 }
 if (VAR_4)
  *VAR_4 = ((void*)0);
 return VAR_7;
}
