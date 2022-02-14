
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parmBuf ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5 (int VAR_0, char** VAR_1)
{
 int VAR_2;
 char* VAR_3;
 char VAR_4[256];
 int VAR_5;

 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {

  VAR_3 = VAR_1[VAR_2];
  if (*VAR_3 != '-') {

   FUNC_4 ("invalid option %s", VAR_3);
   FUNC_1 ();
  }

  VAR_4[0] = '\0';
  VAR_5 = 0;

  while (VAR_2 < VAR_0 - 1) {

   if (VAR_1[VAR_2 + 1][0] == '-')
    break;

   if (VAR_5) {
    FUNC_3 (VAR_4, " ", sizeof(VAR_4) - (VAR_5 + 1));
    VAR_5 += FUNC_2(VAR_4 + VAR_5);
   }

   ++VAR_2;
   FUNC_3 (VAR_4, VAR_1[VAR_2], sizeof(VAR_4) - (VAR_5 + 1));
   VAR_5 += FUNC_2(VAR_4 + VAR_5);

  }

  FUNC_0 (VAR_3 + 1, (VAR_5 ? VAR_4 : ((void*)0)));

 }
}
