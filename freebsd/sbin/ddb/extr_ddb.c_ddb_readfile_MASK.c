
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,...) ;
 size_t FUNC_6 (char*,int ) ;
 size_t FUNC_7 (char*) ;
 size_t FUNC_8 (char*,int ) ;

void
FUNC_9(char *VAR_4)
{
 char VAR_5[VAR_0];
 FILE* VAR_6;

 if ((VAR_6 = FUNC_4(VAR_4, "r")) == ((void*)0))
  FUNC_1(VAR_1, "fopen: %s", VAR_4);



 while (FUNC_3(VAR_5, VAR_0, VAR_6)) {
  int VAR_7 = 0;
  char *VAR_8[2];
  size_t VAR_9;

  VAR_9 = FUNC_7(VAR_5);
  if (VAR_5[VAR_9-1] == '\n')
   VAR_5[VAR_9-1] = '\0';

  VAR_9 = FUNC_8(VAR_5, " \t");
  VAR_8[0] = VAR_5 + VAR_9;
  if (*VAR_8[0] == '#' || *VAR_8[0] == '\0')
   continue;
  VAR_7++;

  VAR_9 = FUNC_6(VAR_8[0], " \t");
  VAR_8[1] = VAR_8[0] + VAR_9 + FUNC_8(VAR_8[0] + VAR_9, " \t");
  VAR_8[0][VAR_9] = '\0';
  if (*VAR_8[1] != '\0')
   VAR_7++;
  FUNC_0(VAR_7, VAR_8);
 }
 FUNC_2(VAR_6);
}
