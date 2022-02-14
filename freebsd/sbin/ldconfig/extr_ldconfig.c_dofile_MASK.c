
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(char *VAR_1, int VAR_2)
{
 FILE *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5 = 0;
 char *VAR_6, *VAR_7;

 if ((VAR_3 = FUNC_3(VAR_1, "r")) == ((void*)0)) {
  FUNC_5("%s", VAR_1);
  return -1;
 }

 while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_3)) {
  VAR_6 = VAR_4;
  while (FUNC_4(*VAR_6))
   VAR_6++;
  if (*VAR_6 == '#' || *VAR_6 == '\0')
   continue;
  VAR_7 = VAR_6;
  while (!FUNC_4(*VAR_6) && *VAR_6 != '\0')
   VAR_6++;

  if (*VAR_6 != '\n') {
   *VAR_6 = '\0';
   FUNC_6("%s: trailing characters ignored", VAR_7);
  }

  *VAR_6 = '\0';

  VAR_5 |= FUNC_0(VAR_7, VAR_2);
 }

 (void)FUNC_1(VAR_3);
 return VAR_5;
}
