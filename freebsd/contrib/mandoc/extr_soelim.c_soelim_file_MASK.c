
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,size_t*,int *) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,char*) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_7(FILE *VAR_1, int VAR_2)
{
 char *VAR_3 = ((void*)0);
 char *VAR_4, *VAR_5;
 size_t VAR_6 = 0;
 ssize_t VAR_7;

 if (VAR_1 == ((void*)0))
  return (1);

 while ((VAR_7 = FUNC_2(&VAR_3, &VAR_6, VAR_1)) > 0) {
  if (FUNC_6(VAR_3, ".so", 3) != 0) {
   FUNC_4("%s", VAR_3);
   continue;
  }

  VAR_4 = VAR_3 + 3;
  if (!FUNC_3(*VAR_4) && ((VAR_2 & VAR_0) == 0)) {
   FUNC_4("%s", VAR_3);
   continue;
  }

  while (FUNC_3(*VAR_4))
   VAR_4++;

  VAR_5 = VAR_4;
  while (*VAR_5 != '\0' && !FUNC_3(*VAR_5))
   VAR_5++;
  *VAR_5 = 0;
  if (VAR_5 < VAR_3 + VAR_7)
   VAR_5++;

  if (*VAR_4 == '\0') {
   FUNC_4("%s", VAR_3);
   continue;
  }
  if (FUNC_7(FUNC_5(VAR_4), VAR_2) == 1) {
   FUNC_1(VAR_3);
   return (1);
  }
  if (*VAR_5 != '\0')
   FUNC_4("%s", VAR_5);
 }

 FUNC_1(VAR_3);
 FUNC_0(VAR_1);

 return (0);
}
